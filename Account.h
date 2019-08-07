/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.h
 * Author: hale
 *
 * Created on January 29, 2019, 6:28 AM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

using namespace std;

class Account {
public:
    Account(string const& name) : newName(name){}
    double getBalance() const {return balance;};
    void setBalance(double balance);
    
    double deposit(double depositAmount);
    
    double withdraw(double withdrawalAmount);
    
    double interest(double percent);
    
    string getName() {return newName;};
    void setName(string newName);
    
    bool transferTo(double amount, Account & otherAccount);
    /*Account(const Account& orig);
    virtual ~Account();*/
    
private:
    double balance = 0;
    string newName;
};



#endif /* ACCOUNT_H */

