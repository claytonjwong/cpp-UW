#include "TestHarness.h"

#include <iostream>
#include <memory>
#include <string>


// not a single responsiblity or open/closed push button
class PushButton
{
public:
	PushButton(const std::string& label)
		: myLabel(label)
	{
	}

	void pushed()
	{
		std::cout << "you pushed the " << myLabel << " button" << std::endl;
	}

private:
	const std::string myLabel;
};

TEST(Ctor, PushButton)
{
	PushButton pb("Lion");

	// mimic the GUI framework code that tracks the mouse and calls the button push when the mouse is clicked over the button
	pb.pushed();
}

class ICommand
{
public:
	virtual ~ICommand() = default;

	virtual void execute() = 0;
};

class PushButton2
{
public:
	PushButton2(const std::string& label)
		: myLabel(label)
	{
	}

	const std::string& getLabel() const
	{
		return myLabel;
	}

	void setPushCommand(std::unique_ptr<ICommand> pushCommand)
	{
		myCommand = std::move(pushCommand);
	}

	void pushed()
	{
		if (myCommand == nullptr)
		{
			return;
		}

		myCommand->execute();
	}

private:
	const std::string myLabel;
	std::unique_ptr<ICommand> myCommand;
};

TEST(pushedNoCommand, PushButton2)
{
	PushButton2 pb2("OK");

	pb2.pushed();
}

class PrintLabelCommand: public ICommand
{
public:
	void execute() override
	{
		std::cout << "you pushed the " << " button" << std::endl;
	}
};

TEST(pushed, PushButton2)
{
	PushButton2 pb2("OK");

#if 0
	auto printLabelCommand = std::make_unique<PrintLabelCommand>();
	pb2.setPushCommand(std::move(printLabelCommand));
#else
	pb2.setPushCommand(std::make_unique<PrintLabelCommand>());
#endif


	pb2.pushed();
}


TEST(pushed2, PushButton2)
{
	PushButton2 pb2("OK");

#if 0
	auto printLabelCommand = std::make_unique<PrintLabelCommand>();
	pb2.setPushCommand(std::move(printLabelCommand));
#else
	pb2.setPushCommand(std::make_unique<PrintLabelCommand>());
#endif


	pb2.pushed();
}

class PrintLabelCommand2 : public ICommand
{
public:
	PrintLabelCommand2(const PushButton2& pushButton)
		: myPushButton(pushButton)
	{
	}

	void execute() override
	{
		std::cout << "you pushed the " << myPushButton.getLabel() << " button" << std::endl;
	}

private:
	const PushButton2& myPushButton;
};

TEST(printLabelCommand2, PushButton2)
{
	PushButton2 pb2("OK");

	pb2.setPushCommand(std::make_unique<PrintLabelCommand2>(pb2));

	pb2.pushed();
}

class MacroCommand : public ICommand
{
public:
	void execute() override
	{
		for (auto& command : myCommands)
		{
			command->execute();
		}
	}

	void add(std::unique_ptr<ICommand> command)
	{
		myCommands.push_back(std::move(command));
	}
	
private:
	std::vector<std::unique_ptr<ICommand>> myCommands;
};


TEST(MacroCommandExample, PushButton2)
{
	PushButton2 pb2("OK");

	auto macroCommand = std::make_unique<MacroCommand>();

	macroCommand->add(std::make_unique<PrintLabelCommand>());
	macroCommand->add(std::make_unique<PrintLabelCommand2>(pb2));

	pb2.setPushCommand(std::move(macroCommand));

	pb2.pushed();
}