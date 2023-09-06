/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:23:03 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/06 14:37:32 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

// Initialize static member variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Constructor  for Account class */
Account::Account(int initial_deposit)
{
    // Set the account index and initialize account properties
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    /* Update static properties to track the total number of accounts 
     * and total deposited amount.*/
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;

    // Display the timestamp and information about the created account
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
        << ";created" << std::endl;
}

/* Destructor for Account class */
Account::~Account(void)
{
    // Display the timestamp and information about the closed account
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
        << ";closed" << std::endl;
}

/* Get the number of accounts */
int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

/*  Get the total amount of deposits made from all accounts */
int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

/*  Get the number of deposits made from all accounts */
int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

/*  Get the number of withdrawals  made from all accounts */
int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

/* Dispplay information about all accounts */
void Account::displayAccountsInfos(void)
{
    // Display a timestamp and information about all accounts
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" 
        << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits 
        << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

/* Make a deposit to the account */
void Account::makeDeposit(int deposit)
{
    // Display a timestamp and information about the deposit
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" 
        << this->_amount << ";deposit:" << deposit;

    // Update account properties and global totals for deposit
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;

    // Display updated information about the account
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" 
        << this->_nbDeposits << std::endl;
}

/* Make a withdrawal from the account */
bool Account::makeWithdrawal(int withdrawal)
{
    // Display a timestamp and information about the withdrawal
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" 
        << this->_amount << ";withdrawal:";

    // Check if the withdrawal amount is greater than the current balance
    if (withdrawal > this->_amount)
    {
        // Display a message and return false if the withdrawal is refused
        std::cout << "refused" << std::endl;
        return (false);
    }

    // Update account properties and global totals for withdrawal
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += 1;

    // Display updated information about the account
    std::cout << withdrawal << ";amount:" << this->_amount 
        << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

/* Check the current balance of the account */
int Account::checkAmount(void) const
{
    return (this->_amount);
}

/* Display the status of the account */
void Account::displayStatus(void) const
{
    // Display a timestamp and information about the account's status
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" 
        << this->_amount << ";deposits:" << this->_nbDeposits 
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

/*  Display the timestamp for account actions */
void Account::_displayTimestamp(void)
{
    time_t now;
    tm *ltm;

    now = time(0);
    ltm = localtime(&now);

    // Format and display the timestamp
    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec;
    std::cout << "] ";
}

// int main(void)
// {
//     Account *a = new Account(1000);
//     Account *b = new Account(2000);
//     Account::displayAccountsInfos();
//     a->displayStatus();
//     b->displayStatus();
//     a->makeDeposit(500);
//     a->displayStatus();
//     a->makeWithdrawal(100);
//     a->displayStatus();
//     a->makeWithdrawal(10000);
//     a->displayStatus();
//     Account::displayAccountsInfos();
//     delete a;
//     delete b;
//     return (0);
// }
