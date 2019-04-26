#pragma once
#include <algorithm>

template <typename T, T lowerLimit, T upperLimit>
class ranged_number
{
public:
	// operators and methods to make the class behave just like an actual number,
	// with the addition of restricting the range.

	ranged_number(const T& value = lowerLimit) noexcept
	{
		myValue = myClamp(value);
	}

	operator T() const
	{
		return myValue;
	}

	ranged_number& operator++()
	{
		if (myValue != upperLimit)
		{
			++myValue;
		}

		return *this;
	}

	ranged_number operator++(int)
	{
		ranged_number tmp{ *this };

		if (myValue != upperLimit)
		{
			++myValue;
		}

		return tmp;
	}

	ranged_number operator--(int)
	{
		ranged_number tmp{ *this };

		if (myValue != lowerLimit)
		{
			--myValue;
		}

		return tmp;
	}

	ranged_number& operator--()
	{
		if (myValue != lowerLimit)
		{
			--myValue;
		}

		return *this;
	}

	ranged_number& operator+=(const ranged_number& rhs)
	{
		if constexpr (std::is_unsigned_v<T> || lowerLimit >= 0)
		{
			myValue = ((upperLimit - myValue) >= rhs.myValue) ? myValue + rhs.myValue : upperLimit;
		}
		else
		{
			myValue = rhs.myValue >= 0 ?
				(((upperLimit - myValue) > rhs.myValue) ? myValue + rhs.myValue : upperLimit)
				: ((std::abs(lowerLimit) - std::abs(myValue) >= std::abs(rhs.myValue)) ? myValue + rhs.myValue : lowerLimit);
		}


		return *this;
	}

	friend ranged_number operator+(const ranged_number& a, const ranged_number& b)
	{
		ranged_number r = a;
		return r += b;
	}

private:

	template<T low, T high> class Clamp
	{
		public:
		T operator()(T value) const
		{
			return std::clamp(value, lowerLimit, upperLimit);
		}
	};
	
	Clamp<lowerLimit, upperLimit> myClamp;

	//Behavior would be undefined otherwise.  
	static_assert(lowerLimit < upperLimit, "ranged_number: lower limit must be strictly less than upper limit");
	T myValue;
};
