#include<iostream>
using namespace std;
class Currency
{
private:
    int m_amount;
public:
    Currency() : m_amount{ 0 } {};
    explicit Currency(int amount) : m_amount{ amount } {};
    explicit operator int() const { return m_amount; }
    int getAmount();
    void convert(Currency const &obj)
    {
        double rup=obj.m_amount/100;
        double paisa=obj.m_amount%100;
        cout<<"Rupees is:"<<rup<<endl;
        cout<<"Paisa is:"<<paisa<<endl;
    }
};

void display_balance(const Currency balance)
{
    std::cout << "The balance is: " << int(balance) << std::endl;
}
int main()
{
    Currency m{876};
    display_balance(m);
    m.convert(m);
    return 0;
}

/*
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }
*/