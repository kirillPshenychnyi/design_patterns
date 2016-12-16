#include "bank.hpp"

int main()
{
	Bank * bank = Bank::getInstance();

	bank->deposit("49494", 100);
	bank->withdraw("49494", 50);

	return 0;
}