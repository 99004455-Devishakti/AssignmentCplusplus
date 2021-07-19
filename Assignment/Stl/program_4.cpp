#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void findMissing(vector<string> vect1, vector<string> vect2)
{
    for (int i = 0; i < vect1.size(); i++)
    {
        int j;
        for (j = 0; j < vect2.size(); j++)
            if (vect1[i] == vect2[j])
                break;
        if (j == vect2.size())
            cout << vect1[i] << endl;
    }
}
int main()
{
    vector<string> vect1{"litun","kitun","mithun","rinku"};
    vector<string> vect2{"litun","kitun","mithun"};
    findMissing(vect1,vect2);
    return 0;
}