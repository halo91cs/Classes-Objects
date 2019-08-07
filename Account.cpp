/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.cpp
 * Author: hale
 * 
 * Created on January 29, 2019, 6:28 AM
 */


#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;


void Account::setBalance(double bal){
    
    this->balance = bal;
}

double Account::deposit(double depositAmount) {

// your code should check to ensure that depositAmount is positive (e.g. deposit 100 dollars).
// It should only update the account balance if it is posotive.
// add code here
    if(depositAmount > 0)
    {
        this->balance += depositAmount;
        cout << this->newName << " requested to deposit " << depositAmount << " and " << this->newName << "'s current balance is: " << this->balance << "\n" << endl; 

        
    }
    else
        cout << this->newName << " requested to deposit $" << depositAmount << ", which is a negative number." << this->newName << "'s balance is " << this-> balance << "\n" << endl;
    
    return this->balance;
}

double Account::withdraw(double withdrawalAmount) {
// This method should ensure that the withdrawalAmount is positive (e.g. withdraw 100 dollars).
// It should only update the account balance if the account can cover the withdrawal.
// add code here
    if( ((this->balance - withdrawalAmount) > 0) && withdrawalAmount > 0)
    {
        this->balance -= withdrawalAmount;
        cout << this->newName << " requested to withdraw " << withdrawalAmount << " and " << this->newName << "'s current balance is: " << this->balance << "\n" << endl; 
    }
    else
    {
        cout << this->newName << " requested to withdraw " << withdrawalAmount << " but Withdrawal amount cannot be more than account balance, so " << this->newName << " cannot withdraw money. " << this->newName << "'s balance is: " << this->balance << "\n" << endl;
    }
    return this->balance;
}

double Account::interest(double percent) {
// This method should accept percent (positive or negative). (e.g. to grow the account by 10%
// you would call interest(0.1). To decay the account by 20% you would call interest(-0.2))
// add code here
    this->balance += this->balance * percent;
    if(percent < 0)
    {
        cout << "Interest amount: " << percent << endl;
        cout << this->newName << " requested to decay her account balance by " << percent << "." << this->newName << "'s current balance is: " << this->balance << "\n" << endl;
    }
    
    else
    {
        cout << "Interest amount: " << percent << endl;
        cout << this->newName << " requested to grow her account balance by " << percent << "." << this->newName << "'s current balance is: " << this->balance << "\n" << endl;
    }
    
    return this->balance;
}

void Account::setName(std::string newName) {
// Your code should ensure that the name of the account has a max of 30 characters.
// If the newName passed to this function is longer than 30 characters, you should
// set the account name to be the first 30 characters of the argument.
// add code here
    if(newName.length() > 30)
        this->newName = newName.substr(0, 30);

    cout << "Your account name is: " << this->newName << endl;
}
// write the transferTo method here -- see below
bool Account::transferTo(double amount, Account & otherAccount) {
// add code here
     
    if(this->balance >= amount)
    {
        this->balance = this->balance - amount;
        otherAccount.setBalance(otherAccount.getBalance() + amount);
        cout << this->newName << " requested to send $" << amount << " to the other Account " << otherAccount.newName << endl;
        cout << this->newName << "'s current balance: " << this->balance << endl;
        cout << otherAccount.newName << "'s current balance: " << otherAccount.balance << endl;
        return true;
    }
    else
        return false;
}


/*Account::Account(const Account& orig) {
}

Account::~Account() {
}*/

