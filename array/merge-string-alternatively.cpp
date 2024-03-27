#include<iostream>
using namespace std;
 
string mergealternate(string word1, string word2){
     string ans;
     int i=0;
     int j=0;
     int n1 = word1.length();
     int n2 = word2.length();
     while(i != n1 || j != n2){
        if(i != n1){
            ans += word1[i];
            i++;
        }
        if(j != n2){
            ans += word2[j];
            j++;
        }
     }
     return ans;
}
int main(){
    string word1,word2;
    string ans;

    cin>>word1>>word2;

    ans = mergealternate(word1, word2);
    cout << ans;
    return 0;
}
