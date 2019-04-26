/**
* Daniel Sebastian Iliescu, http://dansil.net
* MIT License (MIT), http://opensource.org/licenses/MIT
*
* A doubly-linked implementation of a list combining both LIFO and FIFO operations.
*
* C++ Standard Library compliant iterators for the list are provided. Custom allocators are also supported.
*
* All modifier functions operate in constant time (amortized for custom allocators) since no traversal occurs.
*/

#pragma once

#include <memory>

namespace dsa
{
	template <
		typename T,
		typename Allocator = std::allocator< T > >
		class doubly_linked_list
	{
	public:
		struct doubly_linked_node
		{
			doubly_linked_node() noexcept = default;
			doubly_linked_node(T input_item) noexcept :
				item(input_item)
			{
			}
			~doubly_linked_node() noexcept = default;

			doubly_linked_node(doubly_linked_node const &) = default;
			doubly_linked_node(doubly_linked_node &&) noexcept = default;

			doubly_linked_node& operator=(doubly_linked_node const &) = default;
			doubly_linked_node& operator=(doubly_linked_node &&) noexcept = default;

			bool
				operator==(doubly_linked_node const & rhs) const noexcept
			{
				return (this->item == rhs.item);
			}

			bool
				operator!=(doubly_linked_node const & rhs) const noexcept
			{
				return !(*this == rhs);
			}

			T item = T();

			doubly_linked_node* previous = nullptr;
			doubly_linked_node* next = nullptr;
		};

		// Iterator class for both mutable and const iterators.
		template< bool IsConstIterator >
		class iterator_impl
		{
		public:
			using iterator_category = std::bidirectional_iterator_tag;
			using value_type = T;
			using difference_type = std::ptrdiff_t;
			using pointer =
				typename std::conditional<
				IsConstIterator,
				const T* const,
				T* >::type;
			using reference =
				typename std::conditional<
				IsConstIterator,
				const T&,
				T& >::type;

			iterator_impl(doubly_linked_node* const input_node) noexcept :
				node(input_node)
			{
			}

			iterator_impl(const iterator_impl< false >& it) noexcept :
				node(it.node)
			{
			}

			// Copy construction for const iterators is handled by the default
			// generated implementation. The copy constructor specialization for
			// mutable iterators allows for the conversion from mutable to const.
			iterator_impl& operator=(const iterator_impl< false >& it) noexcept
			{
				this->node = it.node;

				return *this;
			}

			void
				swap(iterator_impl& it) noexcept
			{
				std::swap(this->node, it.node);
			}

			iterator_impl&
				operator++() noexcept
			{
				this->node = this->node->next;

				return *this;
			}

			iterator_impl
				operator++(int) noexcept
			{
				const iterator_impl iterator(*this);
				++(*this);

				return iterator;
			}

			iterator_impl&
				operator--() noexcept
			{
				this->node = this->node->previous;

				return *this;
			}

			iterator_impl
				operator--(int) noexcept
			{
				const iterator_impl iterator(*this);
				--(*this);

				return iterator;
			}

			reference
				operator*() const noexcept
			{
				return this->node->item;
			}

			pointer
				operator->() const noexcept
			{
				return this->node;
			}

			bool
				operator==(const iterator_impl& it) const noexcept
			{
				return
					(this->node == it.node) ||
					((this->node && it.node) &&
					(*this->node == *it.node));
			}

			bool
				operator!=(const iterator_impl& it) const noexcept
			{
				return !(*this == it);
			}

		private:
			doubly_linked_node * node;
		};

		using iterator = iterator_impl< false >;
		using const_iterator = iterator_impl< true >;
		using reverse_iterator = std::reverse_iterator< iterator >;
		using const_reverse_iterator = std::reverse_iterator< const_iterator >;

		using value_type = T;
		using allocator_type = typename std::allocator_traits< Allocator >::template rebind_alloc< doubly_linked_node >;
		using size_type = std::size_t;
		using difference_type = typename std::iterator_traits< iterator >::difference_type;
		using reference = value_type & ;
		using const_reference = const value_type&;
		using pointer = typename std::allocator_traits< allocator_type >::pointer;
		using const_pointer = typename std::allocator_traits< allocator_type >::const_pointer;

		doubly_linked_list() noexcept = default;

		~doubly_linked_list() noexcept
		{
			this->clear();
		}

		doubly_linked_list(const doubly_linked_list& other)
		{
			auto node = other.front_node;

			while (other.valid_node(node))
			{
				this->push_back(node->item);
				node = node->next;
			}
		}

		doubly_linked_list(doubly_linked_list&& other) noexcept :
			allocator(other.allocator),
			front_node(other.front_node),
			back_node(other.back_node),
			sentinel(std::move(other.sentinel)),
			nodes(other.nodes)
		{
			other.front_node = nullptr;
			other.back_node = nullptr;
			other.nodes = 0;
		}

		doubly_linked_list&
			operator=(const doubly_linked_list& rhs)
		{
			this->swap(*this, doubly_linked_list(rhs));

			return *this;
		}

		doubly_linked_list&
			operator=(doubly_linked_list&& rhs) noexcept
		{
			this->swap(*this, rhs);

			return *this;
		}

		bool
			operator==(const doubly_linked_list& rhs) const noexcept
		{
			return equals(this->front_node, rhs.front_node);
		}

		bool
			operator!=(const doubly_linked_list& rhs) const noexcept
		{
			return !(*this == rhs);
		}

		friend void
			swap(doubly_linked_list& first, doubly_linked_list& second) noexcept
		{
			using std::swap;

			swap(first.front_node, second.front_node);
			swap(first.back_node, second.back_node);
			swap(first.sentinel, second.sentinel);
			swap(first.nodes, second.nodes);
		}

		allocator_type
			get_allocator() const
		{
			return this->allocator;
		}

		/**
		* Element access
		*/

		T
			front() const noexcept
		{
			return this->empty() ? T() : this->front_node->item;
		}

		T
			back() const noexcept
		{
			return this->empty() ? T() : this->back_node->item;
		}

		/**
		* Iterators
		*/

		iterator
			begin() noexcept
		{
			return this->first();
		}

		const_iterator
			begin() const noexcept
		{
			return this->first();
		}

		const_iterator
			cbegin() const noexcept
		{
			return this->begin();
		}

		iterator
			end() noexcept
		{
			return this->last();
		}

		const_iterator
			end() const noexcept
		{
			return this->last();
		}

		const_iterator
			cend() const noexcept
		{
			return this->end();
		}

		reverse_iterator
			rbegin() noexcept
		{
			return reverse_iterator(this->end());
		}

		const_reverse_iterator
			rbegin() const noexcept
		{
			return const_reverse_iterator(this->end());
		}

		const_reverse_iterator
			crbegin() const noexcept
		{
			return this->rbegin();
		}

		reverse_iterator
			rend() noexcept
		{
			return reverse_iterator(this->begin());
		}

		const_reverse_iterator
			rend() const noexcept
		{
			return const_reverse_iterator(this->begin());
		}

		const_reverse_iterator
			crend() const noexcept
		{
			return this->rend();
		}

		/**
		* Modifiers
		*/

		void
			push_front(T item)
		{
			auto new_node = this->create_node(item);

			if (this->empty())
			{
				this->front_node = new_node;
				this->back_node = new_node;

				this->update_sentinel();
			}
			else
			{
				new_node->next = this->front_node;

				this->front_node->previous = new_node;
				this->front_node = new_node;
			}

			++(this->nodes);
		}

		void
			push_back(T item)
		{
			auto new_node = this->create_node(item);

			if (this->empty())
			{
				this->front_node = new_node;
				this->back_node = new_node;
			}
			else
			{
				new_node->previous = this->back_node;

				this->back_node->next = new_node;
				this->back_node = new_node;
			}

			this->update_sentinel();

			++(this->nodes);
		}

		T
			pop_front() noexcept
		{
			if (this->empty())
			{
				return T();
			}

			const auto item = this->front_node->item;
			auto next_node = this->front_node->next;

			this->destroy_node(this->front_node);

			if (this->valid_node(next_node))
			{
				next_node->previous = nullptr;
				this->front_node = next_node;
			}
			else
			{
				this->front_node = nullptr;
				this->back_node = nullptr;
			}

			--(this->nodes);

			return item;
		}

		T
			pop_back() noexcept
		{
			if (this->empty())
			{
				return T();
			}

			const auto item = this->back_node->item;
			auto previous_node = this->back_node->previous;

			this->destroy_node(this->back_node);

			if (previous_node)
			{
				previous_node->next = nullptr;
				this->back_node = previous_node;

				this->update_sentinel();
			}
			else
			{
				this->front_node = nullptr;
				this->back_node = nullptr;
			}

			--(this->nodes);

			return item;
		}

		void
			clear() noexcept
		{
			this->clear(*this);
		}

		bool
			empty() const noexcept
		{
			return ((!this->front_node) &&
				(!this->back_node) &&
				(this->nodes == 0));
		}

		size_type
			size() const noexcept
		{
			return this->nodes;
		}

		size_type
			max_size() const noexcept
		{
			return std::allocator_traits< allocator_type >::max_size();
		}

	private:
		typename std::allocator_traits< allocator_type >::pointer
			create_node(T item)
		{
			auto node = std::allocator_traits< allocator_type >::allocate(this->allocator, 1);
			std::allocator_traits< allocator_type >::construct(this->allocator, node, item);

			return node;
		}

		void destroy_node(typename std::allocator_traits< allocator_type >::pointer node) noexcept
		{
			std::allocator_traits< allocator_type >::deallocate(this->allocator, node, 1);
		}

		static void
			clear(doubly_linked_list& instance) noexcept
		{
			while (!instance.empty())
			{
				instance.pop_back();
			}
		}

		void
			update_sentinel()
		{
			this->sentinel.previous = this->back_node;
			this->back_node->next = &this->sentinel;
		}

		pointer
			first() const noexcept
		{
			return this->front_node;
		}

		pointer
			last() const noexcept
		{
			return this->back_node->next;
		}

		bool
			valid_node(pointer node) const
		{
			return node && (node != &this->sentinel);
		}

		static bool
			equals(
				pointer node1,
				pointer node2) noexcept
		{
			return
				(node1 == node2) ||
				((node1 && node2) &&
				(*node1 == *node2) &&
					equals(node1->next, node2->next));
		}

		allocator_type allocator;

		pointer front_node = nullptr;
		pointer back_node = nullptr;

		// Sentinel used to point to the past-the-end sequence for iteration.
		typename std::allocator_traits< allocator_type >::value_type sentinel;

		size_type nodes = 0;
	};
}
