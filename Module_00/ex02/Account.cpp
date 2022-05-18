#include <iostream>
#include "Account.hpp"
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) {
	this->_totalNbDeposits += initial_deposit;
	this->_amount += initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts++;
}

Account::~Account() {}

void	Account::_displayTimestamp(void)
{
	std::time_t		time;
	struct tm		*local;

	time = std::time(&time);
	local = localtime(&time);

	std::cout << "[" << local->tm_year + 1900 <<
				local->tm_mon << local->tm_mday << "_" <<
				local->tm_hour << local->tm_min << local->tm_sec << "] ";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" <<
				 "total:" << getTotalAmount() << ";" <<
				 "deposits:" << getNbDeposits() << ";" << 
				 "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
				 ";amount:" << this->_amount <<
				 ";deposits:" << this->_nbDeposits <<
				 ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts(void) {
	return(_nbAccounts);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit) {
	int	p;

	p = this->_amount;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << 
				 ";p_amount:" << p <<
				 ";deposit:" << deposit <<
				 ";amount:" << this->_amount <<
				 ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int	Account::checkAmount(void) const {
	return (_amount);
}

bool	Account::makeWithdrawal(int withdrawal) {
	bool	rejected;
	int		tmp = this->_amount;

	if (withdrawal > this->_amount)
		rejected = true;
	else
		rejected = false;
	if (rejected == false) {
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << 
				 ";p_amount:" << tmp <<
				 ";withdrawal:";
		std::cout << withdrawal << ";amount:" << this->_amount <<
				 ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
	else {
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << 
				";p_amount:" << tmp <<
				";withdrawal:" << "refused" << std :: endl;
		return (0);
	}
}