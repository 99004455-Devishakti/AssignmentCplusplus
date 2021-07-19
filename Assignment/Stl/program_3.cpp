#include <iostream>
#include <vector>
#include <cstdlib>
#include<numeric>
using namespace std;
/*double calculation(double a,double b,double c, double d)
{
    return abs((d-b)/(c-a));
}*/
vector<double> vect3={0};
double avgDistance(vector<double> vect1, vector<double> vect2)
{
    
    if(vect1.size()==vect2.size())
    {
        for(int i=0;i<vect1.size()-1;i++)
        {
            double temp= abs(((vect2[i+1]-vect2[i])/(vect1[i+1]-vect1[i])));    
            vect3[i]={temp};                    
        }        
    } 
    double sum = (std::accumulate(vect3.begin(), vect3.end(), 0.0));
    double avg_speed= (sum / vect3.size());
    return avg_speed;
}
int main()
{
    vector<double> vect1={0,7,6};
    vector<double> vect2={0,0.5,0.7};
    double avg_speed=avgDistance(vect1,vect2);
    cout<<avg_speed<<endl;
    return 0;
}