#include "bank.hpp"
#include <iostream>

/***************************************************************************/

// define instance (nullptr)

Bank * Bank::ms_Instance;

/***************************************************************************/

Bank::Bank()
{
	std::cout << "Bank is created" << std::endl;
}

/***************************************************************************/

Bank::~Bank()
{
	std::cout << "Bank is destroyed" << std::endl;
}

/***************************************************************************/

Bank * 
Bank::getInstance()
{
	if (!ms_Instance)
	{
		// the first time object created 
		ms_Instance = new Bank();

		
		struct Deleter
		{
			~Deleter()
			{
				delete ms_Instance;
			}
		};
		// all static resources are cleared after the exit from main function
		static Deleter deleter;
	}

	return ms_Instance;
}

/***************************************************************************/

void
Bank::withdraw(std::string const & _account, int _amount)
{
	std::cout << "Withdrawing..." << std::endl;
}

/***************************************************************************/

void
Bank::deposit(std::string const & _acount, int _amount)
{
	std::cout << "Depositing..." << std::endl;
}

/***************************************************************************/
