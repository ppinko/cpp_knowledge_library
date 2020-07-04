#include <iostream>
#include "Account.h"

int main() {
	Account frank_account;
	frank_account.set_balance(1000.00);
	double bal = frank_account.get_balance();

	std::cout << bal << std::endl;
	return 0;
}