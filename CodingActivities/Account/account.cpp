#include "account.h"

/*Parametersized Constructor*/
Account::Account(std::string id, std::string name, double bal, std::string phone): m_id(id), m_name(name),m_balance(bal),m_phone(phone){}
/* Copy constructors*/
Account::Account(const Account& ref): m_id(ref.m_id), m_name(ref.m_name), m_balance(ref.m_balance),m_phone(ref.m_phone){}

/*Id getter method*/
std::string Account::Id(){
    return m_id;
}
/*Name getter method*/
std::string Account::Name(){
    return m_name;
}
/*Balance getter method*/
double Account::Balance(){
    return m_balance;
}
/*Mobile Number getter method*/
std::string Account::Mobile(){
    return m_phone;
}

/*Display all the mebers of book class*/
void Account::display(){
    std::cout<<"Id is: "<<m_id<<std::endl;
    std::cout<<"Name is: "<<m_name<<std::endl;
    std::cout<<"Phone is: "<<m_phone<<std::endl;
    std::cout<<"Balance is: "<<m_balance<<std::endl;

}