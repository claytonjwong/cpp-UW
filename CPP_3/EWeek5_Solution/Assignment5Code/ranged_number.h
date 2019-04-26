#pragma once

template <typename T, T lowerLimit, T upperLimit>
class ranged_number
{
public:
    // operators and methods to make the class behave just like an actual number,
    // with the addition of restricting the range.
    
    ranged_number(const T& value = lowerLimit) :
    myValue{value},
    myLowerLimit{lowerLimit},
    myUpperLimit{upperLimit}
    {
        if (myValue > myUpperLimit)
        {
            myValue = myUpperLimit;
        }
        else if (myValue < myLowerLimit)
        {
            myValue = myLowerLimit;
        }
    }

    operator T() const
    {
        return myValue;
    }

    ranged_number& operator=(const ranged_number& rhs)
    {
        myValue = rhs.myValue;
        return *this;
    }

    ranged_number& operator=(const T& rhs)
    {
        myValue = rhs;
        return *this;
    }

    ranged_number& operator++()
    {
        if (myValue != myUpperLimit)
        {
            ++myValue;
        }

        return *this;
    }

    ranged_number operator++(int)
    {
        ranged_number tmp {*this};

        if (myValue != myUpperLimit)
        {
            ++myValue;
        }

        return tmp;
    }

    ranged_number operator--(int)
    {
        ranged_number tmp {*this};

        if (myValue != myLowerLimit)
        {
            --myValue;
        }

        return tmp;
    }

    ranged_number& operator--()
    {
        if (myValue != myLowerLimit)
        {
            --myValue;
        }

        return *this;
    }

    // Note that this will not work correctly with unsigned types,
    // which can "wrap around" when adding.
    
    ranged_number& operator+=(const ranged_number& rhs)
    {
        myValue += rhs.myValue;
        if (myValue > myUpperLimit)
        {
            myValue = myUpperLimit;
        }

        return *this;
    }

    friend ranged_number operator+(const ranged_number& a, const ranged_number& b)
    {
        ranged_number r = a;
        return r += b;
    }

private:
    T myValue;
    T myLowerLimit;
    T myUpperLimit;
};
