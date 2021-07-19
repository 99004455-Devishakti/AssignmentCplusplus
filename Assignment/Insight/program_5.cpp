#include<bits/stdc++.h>
using namespace std;

class Customer
{
    public:
        string m_id, m_name, m_phone, m_price;
        /* Constructors */
        Customer() : m_id(""), m_name(""), m_phone(""), m_price(" ") {}
        Customer(string id, string name, string phone, string price) : m_id(id), m_name(name), m_phone(phone), m_price(price) {}
        Customer(const Customer& ref) : m_id(ref.m_id), m_name(ref.m_name),m_phone(ref.m_phone), m_price(ref.m_price) {}
};

int main(){
    fstream fptr;
    string temp;
    fptr.open("devi.csv", ios::in);
    string word="";
    Customer c[2];
    int index = 0;
    getline(fptr,temp);
    while(fptr)
    {
        stringstream s(temp);
        getline(s, word, ',');
        c[index].m_id = word;
        getline(s, word, ',');
        c[index].m_name = word;
        getline(s, word, ',');
        c[index].m_phone = word;
        getline(s, word, ',');
        c[index].m_price = word;
        index++;
        getline(fptr, temp);
    }
    for(int i = 0; i < 2; i++){
        cout<<"Customer "<<index+1<<" information:"<<endl;
        cout<<"ID is: "<<c[i].m_id<<endl;
        cout<<"Name is: "<<c[i].m_name<<endl;
        cout<<"Phone is: "<<c[i].m_phone<<endl;
        cout<<"Price is: "<<c[i].m_price<<endl;
    }

}
