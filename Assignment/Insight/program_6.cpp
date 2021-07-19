#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void count(istream& in,int& cs,int& ws,int& ls)
 {
   char current = '\0';
   char last = '\0';
   cs = ws = ls = 0;
   while (in.get(current)) {
      if (current == '\n' || (current == '\f' && last == '\r')){
         ls++;
      }
      else{
        cs++;
      }
      if (!std::isalnum(current) && std::isalnum(last)){     
         ws++;
      }
      last = current;
   }
   if (cs > 0) {               
      if (std::isalnum(last)){     
         ws++;
      }                 
      ls++;
   }
}
int main() 
{
  std::ifstream str;
  str.open("in.txt", std::ifstream::in);
  int cr, wd, ln;
  count(str, cr, wd, ln);
  cout << "characters: " << cr << endl;
  cout << "words: " << wd << endl;
  cout << "lines: " << ln << endl;
  return 0;
}
