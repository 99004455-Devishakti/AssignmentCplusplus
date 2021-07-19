#include<iostream>
#include <vector>
#include <iterator>
using namespace std;
std::string findStrayWord(vector<std::string> words)
{
    string first,second,third;
    first= words[0];
    second=words[1];
    if(first!=second)
    {
        third=words[2];
        if(third==second)
        {
            return first;
        }
        else{
            return second;
        }
    }
    for(int i=0;i<words.size();i++)
    {
        if(words[i]!=first)
           return words[i];
    }

}
int main()
{
    vector<string> vect{"litun","litun","litun","litun","litun","litun","kitun"};
    std::string s=findStrayWord(vect);
    cout<<s<<endl;
    return 0;
}
