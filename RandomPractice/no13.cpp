//***C++ Program to Check Whether a Number is Prime or Not

#include<iostream>
using namespace std;

int main(){
    int num {0};
    int count{0};
    cout<<"Enter the number you want to check: ";
    cin>>num;

    if(num==0 || num==1)
        cout<<"It is NOT a prime number."<<endl;
    else 
        {
            for (int i {2}; i<=num;i++)
                {
                    if(num % i ==0)
                        count++;
                }
            if(count==1)
                cout<<num<<" is a prime number."<<endl;
            else
                cout<<num<<" is NOT a prime numbers."<<endl;
        }
    
    return 0;
}