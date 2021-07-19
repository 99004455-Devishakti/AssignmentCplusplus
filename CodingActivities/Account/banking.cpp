#include "banking.h"

void Banking::addAccount(std::string id, std::string name, double bal, std::string phone){
        acc.emplace_back(id, name, bal, phone);
}

void Banking::addAccount(const Account& ref){
    acc.push_back(ref);
}

void Banking::removeAccountByID(std::string id){
    std::list<Account>::iterator iter;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        if (iter->m_id == id){
            acc.erase(iter);
            break;
        }
    }
}

void Banking::displayAll(){
    std::list<Account>::iterator iter;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        iter->display();
        std::cout<<std::endl;
        std::cout<<"---------"<<std::endl;
    }
}

bool Banking::IsAccountFoundByID(std::string id){
    std::list<Account>::iterator iter;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        if (iter->m_id == id){
            return true;
        }
    }
    return false;
}

double Banking::findAverageBalance(){
    std::list<Account>::iterator iter;
    double sum = 0;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        double price =  iter->Balance();
        sum += price;
    }
    return sum/acc.size();
}

Account& Banking::findAccountWithMaxPrice(){
    double maxPrice=0;
    std::list<Account>::iterator iter;
    std::list<Account>::iterator maxIter;
    for(iter=acc.begin(); iter!=acc.end(); ++iter)
        if(iter->Balance()>maxPrice) {
            maxPrice = iter->Balance();
            maxIter = iter;
        }
  return *maxIter;
}

Account* Banking::findAccountByID(std::string id){
    std::list<Account>::iterator iter;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        if (iter->Id() == id){
            break;
        }
    }
    return &(*iter);
}

Account* Banking::findAccountByName(std::string name){
    std::list<Account>::iterator iter;
    for(iter = acc.begin(); iter != acc.end(); iter ++){
        if (iter->Name() == name){
            break;
        }
    }
    return &(*iter);
}

int Banking::countInRange(double amount1,double amount2)
{
    std::list<Account>::iterator iter;
    int count=0;
    for(iter=acc.begin(); iter!=acc.end(); ++iter)
    {
        if(iter->Balance()>amount1 && iter->Balance()<amount2)
        {
             count++;
        }
    }
    return count;
}
int Banking::countInLessThanAmount(double limit)
{
    std::list<Account>::iterator iter;
    int count=0;
    for(iter=acc.begin(); iter!=acc.end(); ++iter)
    {
        if(iter->Balance()<limit)
        {
             count++;
        }
    }
    return count;
}
