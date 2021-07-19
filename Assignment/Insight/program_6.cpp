#include <iostream>
#include <fstream>
//#include <cstdlib>
#include <cctype>
using namespace std;
void countStuff(istream& in,int& chars,int& words,int& lines)
 {
   char cur = '\0';
   char last = '\0';
   chars = words = lines = 0;
   while (in.get(cur)) {
      if (cur == '\n' ||
          (cur == '\f' && last == '\r'))
         lines++;
      else
        chars++;
      if (!std::isalnum(cur) && std::isalnum(last))     
         words++;
      last = cur;
   }
   if (chars > 0) {               
      if (std::isalnum(last))     
         words++;                 
      lines++;
   }
}
int main() 
{
  std::ifstream ifs;
  ifs.open("in.txt", std::ifstream::in);
  int c, w, l;
  countStuff(ifs, c, w, l);
   cout << "characters are: " << c << '\n';
   cout << "words are: " << w << '\n';
   cout << "lines are: " << l << '\n';
   return 0;
}