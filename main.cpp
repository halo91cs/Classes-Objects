/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hale
 *
 * Created on January 29, 2019, 6:27 AM
 */

#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;


int main(int argc, char** argv) {

    Account hale("HALE");
    Account other("OTHER ACCOUNT NAME WITH MORE THAN THIRTY CHARACTERS LONG BUT IT SHOULD BE LESS THAN 30\n");
    
    other.setName(other.getName());
    hale.setName(hale.getName());
         
    std::cout << "================================================" << endl;

    std::cout << hale.getName() << " has " << hale.getBalance() << " dollar balance at first.\n" << endl;
    std::cout << other.getName() << " has " << other.getBalance() << " dollar balance at first." << endl;

    std::cout << "================================================" << endl;

    hale.deposit(100);
    cout << hale.getName() << "'s current balance after deposit: " << hale.getBalance() << endl;
    
    hale.deposit(-80);
    cout << hale.getName() << "'s current balance after negative deposit: " << hale.getBalance() << endl;
    
    hale.withdraw(-10);
    cout << hale.getName() << "'s current balance after negative withdraw: " << hale.getBalance() << endl;
    
    hale.withdraw(200);
    cout << hale.getName() << "'s current balance after withdraw that does not cover account: " << hale.getBalance() << endl;
    
    hale.withdraw(30);
    cout << hale.getName() << "'s current balance after withdraw: " << hale.getBalance() << endl;
    
    hale.interest(0.1);
    cout << hale.getName() << "'s current balance after positive interest: " << hale.getBalance() << endl;
    
    hale.interest(-0.2);
    cout << hale.getName() << "'s current balance after negative interest: " << hale.getBalance() << endl;
    
    hale.transferTo(50, other);
    cout << hale.getName() << "'s current balance after transfer: " << hale.getBalance() << endl;
    cout << other.getName() << "'s current balance after transfer: " << other.getBalance() << endl;

}

