//***C++ Program to Reverse a Number

#include<iostream>
using namespace std;

int main(){
    int num{0},rev_num {0};
    int remainder {0};

    cout<<"Enter the number you want to reverse: ";
    cin>>num;

    while(num != 0)
        {
            remainder=num % 10;
            rev_num=rev_num*10+remainder;
            num=num/10;   //actually i want to reduce the size of number by "1 ekok".....1000/10=100 ,see ,1000=4 ekok and 100 is 3 ekok
        }
    cout<<"Reverse number is: "<<rev_num;
    return 0;
}