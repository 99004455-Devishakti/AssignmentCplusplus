#include<iostream>
#include<cstring>
using namespace std;

class MyString{
    public:
        string str;
        MyString(string m_str): str(m_str) {}

        MyString operator+(MyString& ref){
            string tstr = str + ref.str;
            return MyString(tstr);
        }

        MyString operator*(int val){
            string temp_str="";
            for(int i=0;i<val;i++){
                temp_str+=str;
            }
            return MyString(temp_str);
        }

        void operator+=(string m_str){
            str += m_str;
        }

        void operator*=(int val){
            string temp_str="";
            for(int i=0;i<val;i++){
                temp_str+=str;
            }
            str=temp_str;
        }

        MyString operator+(string m_str){
            string temp_str=str + m_str;
            return MyString(temp_str);
        }
};

int main(){
   MyString s1("abcd");
   MyString s2("xyz");
   MyString s3 = s1 + s2;   
   MyString s4 = s1 * 3; 
   s3 += "hello"; 
   s2 *= 5;       
   MyString s5 = s1 * 2 + "hello" ; 
   cout<<s1.str<<endl;
   cout<<s2.str<<endl;
   cout<<s3.str<<endl;
   cout<<s4.str<<endl;
   cout<<s5.str<<endl;
   
}