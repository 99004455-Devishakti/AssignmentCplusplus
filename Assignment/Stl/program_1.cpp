#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
std::pair<int,int> checkingSum(vector<int> vect,int num)
{
    int l, r, m, n; 
    sort(vect.begin(), vect.end());
    l = 0; 
    r = vect.size() - 1; 
    while (l < r) { 
        if (vect[l] + vect[r] == num) 
            return std::pair<int,int>(l,r);
        else if (vect[l] + vect[r] < num) 
            l++; 
        else 
            r--; 
    } 
    return std::pair<int,int>(-1,-1);
}
int main () 
{
    vector<int> v={10,20,30,40,50};
    int num=30;
    std::pair<int,int> p=checkingSum(v,num);
    cout<<"{"<<p.first<<","<<p.second<<"}"<<endl;
    return 0;
}