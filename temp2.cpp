#include<iostream>
using namespace std;

class name {
    public :
    string name1 = "jignesh";
    string name2 = "ila";
};

int main(){
    name obj;
    name* pointer = &obj;
    cout<< pointer->name2<<endl;
    return 0;
}