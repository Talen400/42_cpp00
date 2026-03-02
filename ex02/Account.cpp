#include "Account.hpp"

Account::Account(int initial_deposit) {}
Account::~Account(void) {}

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (_totalAmount);
}

int	Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	return ;
}

void	Account::_displayTimestamp(void){
	return ;
}
