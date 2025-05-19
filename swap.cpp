#include<iostream>
using namespace std;

int main(){
    int a =5;
    int b =6;
    int temp;
    cout << "Before Swap"<<endl <<a <<endl <<b <<endl;
    temp = a;
    a = b;
    b = temp;

    cout << "After Swap"<<endl <<a <<endl <<b <<endl;
    return 0;
} 