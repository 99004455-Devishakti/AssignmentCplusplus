#define __BANKING_H__
#ifdef __BANKING_H__

#include"account.h"
#include<bits/stdc++.h>

class Banking{
    std::list<Account> acc;
    public:
        void addAccount(std::string id, std::string name, double bal, std::string phone);
        void addAccount(const Account& ref);
        void removeAccountByID(std::string id);
        void displayAll();
        bool IsAccountFoundByID(std::string id);
        Account* findAccountByID(std::string id);   
        Account* findAccountByName(std::string name);
        double findAverageBalance();     
        Account& findAccountWithMaxPrice();
        int countInRange(double amount1,double amount2);
        int countInLessThanAmount(double limit);      
};

#endif