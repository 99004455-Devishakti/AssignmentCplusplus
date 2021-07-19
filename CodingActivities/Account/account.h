#define __ACCOUNT_H__
#ifdef __ACCOUNT_H__
#include<bits/stdc++.h>
class Account
{
    public:
        /* Data members*/
        std::string m_id;
        std::string m_name;
        double m_balance;
        std::string m_phone;

        /*Constructors*/
        Account(std::string id,std::string name,double bal,std::string phone);
        /* Getter Functions*/
        std::string Id();
        std::string Name();
        double Balance();
        std::string Mobile();
        /* Display function to show the deatils*/
        void display();

};

#endif