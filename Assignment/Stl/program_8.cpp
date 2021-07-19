#include <iostream>
#include <vector>
using namespace std;
int evalPostfix(string exp)
{
    vector<int> stack;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] >= '0' && exp[i] <= '9') 
        {
            stack.push_back(exp[i] - '0');
        }
        else 
        {
            int x = stack.back();
            stack.pop_back();
            int y = stack.back();
            stack.pop_back();
            if (exp[i] == '+') 
            {
                stack.push_back(y + x);
            }
            else if (exp[i] == '-') 
            {
                stack.push_back(y - x);
            }
            else if (exp[i] == '*') 
            {
                stack.push_back(y * x);
            }
            else if (exp[i] == '/') 
            {
                stack.push_back(y / x);
            }
        }
    }
    return stack.back();
}
int main()
{
    string exp = "235*+";
    cout << evalPostfix(exp)<<endl;
    return 0;
}