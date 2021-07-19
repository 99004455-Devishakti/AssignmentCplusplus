#include <iostream>
#include <cstring>
#include <stdio.h>
#include <map>
using namespace std;
int main(){
    int i, count[256] = {0};  
    std::map<char, int> m;
    string inputString="devishakti";
    for(i=0; inputString[i] != '\0'; i++){
        count[inputString[i]]++;
    }
    for(i=0; i < 256; i++){
        if(count[i] != 0){
          m.insert({char(i), count[i]});                   
        }
    }
    for (auto i = m.begin(); i!= m.end(); i++) {
      cout <<"{"<< i->first <<","<< i->second <<"}"<<endl;
   }
    return 0;
}