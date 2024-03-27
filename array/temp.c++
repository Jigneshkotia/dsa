#include<iostream>
using namespace std ;
string gcdOfStrings(string str1, string str2) {
        if(str1.length()>str2.length()){
        //    string x = str2;
           string temp = str2;
           while(!temp.empty()){
           string x = "";
           for(int i =0;i<str1.length()/temp.length();i++){
               x += str2;
           }
           if(x==str1){
               return temp;
           }
           size_t midpoint = temp.length();
           temp = temp.substr(midpoint) ;
           }
        return "";
        }else{
           string temp = str1;
           while(!temp.empty()){
           string x = "";
           for(int i =0;i<str2.length()/temp.length();i++){
               x += str1;
           }
           if(x==str2){
               return temp;
           }
         size_t midpoint = temp.length();
           temp = temp.substr(midpoint) ;
           }
        return "";
        }
    }
    
int main(){
    string ans = "yoyoyo";
    string ans2 =  "yoyo";
    cout<< gcdOfStrings(ans, ans2);
    return 0;
}