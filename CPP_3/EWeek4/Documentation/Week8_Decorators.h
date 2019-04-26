#pragma once

class IOperator
{
public:
	virtual ~IOperator() {}
	virtual int operate(int operand) = 0;

};

class Unary : public IOperator
{
public:
	Unary(int data) : myData{ data } {};

	int operate(int operand = 0) override 
	{ 
		return myData;
	}
private:
	int myData{ 0 };
};

class Add : public IOperator
{
public:
	Add(IOperator* inner) : myInner{ inner } {}

	int operate(int operand) override
	{ 
		return operand + myInner->operate(operand);
	}
private:
	IOperator* myInner;
};

class Subtract : public IOperator
{
public:
	Subtract(IOperator* inner) : myInner{ inner } {}

	int operate(int operand) override
	{
		return myInner->operate(operand) - operand;
	}
private:
	IOperator* myInner;
};

class Multiply : public IOperator
{
public:
	Multiply(IOperator* inner) : myInner{ inner } {}

	int operate(int operand) override
	{
		return myInner->operate(operand) * operand;
	}
private:
	IOperator* myInner;
};
 

class DecoratorFactory
{
public:
	static IOperator* getDecorator(int type, IOperator* inner)
	{
		switch (type)
		{
		case 1:
			return new Add(inner);
			break;
		case 2:
			return new Subtract(inner);
			break;
		case 3:
			return new Multiply(inner);
			break;
		default:
			throw std::runtime_error("INvalid type!");

		}
	}
};