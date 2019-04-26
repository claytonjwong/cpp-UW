#pragma once

template <
	class T,
	class _Category = std::output_iterator_tag,
	class _Diff = ptrdiff_t,
	class _Pointer = T * ,
	class _Reference = T & >
class binary_ostream_iterator
{
private:
    // stream to which output will be written
	// Use pointer instead of reference so assignment operator is not implicity deleted by compiler
    std::ostream* myOutputStream;

public:
	//This is needed or else MSVS17 will not compile std::algorithms in debug mode when this iterator is the target. (copy, generate, fill ...)
	using _Unchecked_type = binary_ostream_iterator;

	using iterator_category = _Category;
	using value_type = T;
	using difference_type = _Diff;
	using pointer = _Pointer;
	using reference = _Reference;

	binary_ostream_iterator() = delete;

    explicit binary_ostream_iterator(std::ostream& outputStream)
        : myOutputStream(&outputStream)
    {
    }

	binary_ostream_iterator(const binary_ostream_iterator&) = default;
	binary_ostream_iterator(binary_ostream_iterator&&) = default;
	binary_ostream_iterator& operator=(const binary_ostream_iterator&) = default;
	binary_ostream_iterator& operator=(binary_ostream_iterator&&) = default;

    // assignment operator writes a value to the output stream
    binary_ostream_iterator& operator=(const T& value)
    {
		value.write(*myOutputStream);
        return *this;
    }

    // dereferencing is a no-op that returns the iterator itself
    binary_ostream_iterator& operator*() noexcept
    {
        return *this;
    }

    // increment is a no-op that returns the iterator itself
    binary_ostream_iterator<T>& operator++() noexcept
    { 
        return *this;
    }

    binary_ostream_iterator<T>& operator++(int) noexcept
    {
        return *this;
    }
};
