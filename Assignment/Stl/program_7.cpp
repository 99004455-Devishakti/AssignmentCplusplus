#include <iostream>
#include<string.h>
#include<vector>
#include<cstdlib>
#include<numeric>
using namespace std;
int differenceOfSmallAndLarge(vector<int> vect)
{
    int large=0,small=0;
    double sum = std::accumulate(vect.begin(), vect.end(), 0.0);
    double mean = sum / vect.size();
    for(int i=1;i<=vect.size();i++)
    {
        if(vect[i]<mean)
        {
            small++;
        }
        else if(vect[i]>mean)
        {
            large++;
        }
    }
    return abs(large-small); 
}
int main()
{
    vector<int> vect={2,4,3,5,6,1,7,8,9,99};
    cout<<differenceOfSmallAndLarge(vect)<<endl;
    return 0;
}