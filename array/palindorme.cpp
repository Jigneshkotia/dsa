#include<iostream>
using namespace std;
int main(){
    string num;
    cout << "entre the number :"<<endl;
    int palin = 1;
    cin>>num;
    for(int i =0;i<(num.size()/2);i++){
        if(num[i]!=num[num.size()-i-1]){
            palin = 0;
        }
    }
    if(palin == 1){
        cout<< " yeah it is palindrome number ";
    }else{
        cout<< " no its not apalindrome ";
    };
    return 0;
}