#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;
int main () 
{
    std::map<std::string, int> m;
    std::map<std::string, int>::iterator it;
    vector<string> result;
    string s="Welcome to the proper subset of the superset";
    boost::split(result,s, boost::is_any_of(" "));
    for(int i=0;i<result.size();i++)
    {
        m[result[i]]++;
    }
    cout<<"Elements of Map"<<endl;
    for (auto i = m.begin(); i != m.end(); i++)
        cout <<"{"<< i->first <<","<< i->second <<"}"<<endl;
    return 0;
}