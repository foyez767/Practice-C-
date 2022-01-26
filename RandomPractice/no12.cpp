//***C++ Program to Check Whether a Number is PALINDROME or Not
#include<iostream>
using namespace std;

int main(){
    int num {0},remainder {0};
    int rev_num {0};
    cout<<"Enter the number you want to check: ";
    cin>>num;

    while(num != 0)
        {
            remainder=num % 10;
            rev_num=(rev_num*10)+remainder;
            num=num/10;

        }
    cout<<"The reverse of the number is : "<<rev_num<<endl;
    
    if(num==rev_num)
        cout<<"It is a palindrome."<<endl;
    else
        cout<<"It is NOT a palindrome number."<<endl;
    return 0;
}