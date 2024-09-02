
#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat bureaucrat("John", 50);
			std::cout << bureaucrat;
			std::cout << "Increment grade\n";
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
			std::cout << "Decrement grade\n";
			bureaucrat.decrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n";
		try
		{
			Bureaucrat bureaucrat("Fake John", -1);
			std::cout << bureaucrat;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n";
		try
		{
			Bureaucrat bureaucrat("Top John", 1);
			std::cout << bureaucrat;
			std::cout << "Increment grade\n";
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n";
		try
		{
			Bureaucrat bureaucrat("Bottom John", 150);
			std::cout << bureaucrat;
			std::cout << "Decrement grade\n";
			bureaucrat.decrementGrade();
			std::cout << bureaucrat;
		}
		catch (std::exception& e)
		{
			std::cout << e.what();
		}
	}
	return (0);
}