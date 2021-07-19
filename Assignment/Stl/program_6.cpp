#include <iostream>
#include<string.h>
#include<vector>
#include<numeric>
using namespace std;
int eleSmallerThanMean(vector<int> vect)
{
    int count=0;
    double sum = std::accumulate(vect.begin(), vect.end(), 0.0);
    double mean = sum / vect.size();
    for(int i=1;i<=vect.size();i++)
    {
        if(vect[i]<mean)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> vect={2,4,3,5,6,1,7,8,9};
    cout<<eleSmallerThanMean(vect)<<endl;
    return 0;
}