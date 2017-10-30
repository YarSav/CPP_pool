//
// Created by ysavenko on 30.10.17.
//

#include "Account.class.hpp"
#include "iostream"
#include "ctime"
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::getNbAccounts(){
    return _nbAccounts;
}
int Account::getNbDeposits(){
    return _totalNbDeposits;
}
int Account::getTotalAmount(){
    return _totalAmount;
}
int Account::getNbWithdrawals(){
    return _totalNbWithdrawals;
}
void Account::displayAccountsInfos(){
    Account::_displayTimestamp();
    std::cout << " accounts:"<<_nbAccounts<<";amount:"<<_totalAmount<<
    ";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}
void Account::_displayTimestamp() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime(buffer, 80, "[%Y%d%m_%H%M%S]", timeinfo);
    std::cout<<buffer;

}
Account::Account() {
    this->_accountIndex = _nbAccounts;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    _nbAccounts++;
    std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount
    <<";created"<<std::endl;
}
Account::Account(int initial_deposit) {
    _totalAmount += initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    _nbAccounts++;
    std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount
             <<";created"<<std::endl;
}
Account::~Account() {
    _displayTimestamp();
    std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount
          <<";closed"<<std::endl;
    _nbAccounts--;
}
int Account::checkAmount() const {
    return this->_amount;
}
void Account::displayStatus() const {
    _displayTimestamp();
    std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount
    <<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals
                          <<std::endl;
}
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<this->_amount;
    _totalNbDeposits++;
    this->_nbDeposits++;
    _totalAmount += deposit;
    this->_amount += deposit;
    std::cout<<";deposit:"<<deposit<<";amount:"<<this->_amount<<";nb_deposits:"
             <<this->_nbDeposits<<std::endl;

}
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (this->_amount < withdrawal)
    {
        std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<
        this->_amount<<";withdrawal:refused"<<std::endl;
        return false;
    }
    std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<
    this->_amount<<";withdrawal:"<<withdrawal;
    _totalNbWithdrawals++;
    this->_nbWithdrawals++;
    this->_amount -= withdrawal;
    std::cout<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
    return true;
}