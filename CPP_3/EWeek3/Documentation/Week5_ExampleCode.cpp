
class MyDouble
{
public:
	MyDouble() = default;

	explicit operator double()
	{
		return mDouble;
	}

private:
	double mDouble{ 0.0 };
};

class MyLong
{
public:
	MyLong() = default;

	operator long()
	{
		return mLong;
	}
 
 
private:
	long mLong{ 1L };
};

int main()
{
	MyDouble md;

	// an explicit conversion is used for direct initialization and explicit conversion ONLY
	double d{ md };
	double d1 = static_cast<double>(md);
	// compile error for no conversion, this represents an 'implicit conversion'
	//double d2 = md;

	long d3 = d;  // implicit conversion works

	// compiler error "no suitable conversion" because this is an implicit
	//long l = md;
	// still no... same reason
	//long d4{ md };

	long d5 = static_cast<double>(md); // compiles, but warning about truncation.

	MyLong ml;
	long l = ml;
	long l1{ ml }; // ok, still implicit as anything that can be done explicitly can also be implicitly done
	long l2 = static_cast<long>(ml); // still implicit

	// compile error: no suitable constructor
	//MyLong ml2 = l1;

	return 0;
}

