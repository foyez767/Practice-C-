//***C++ Program to Check Leap Year
#include<iostream>
using namespace std;

int main(){
    int year {0};
    cout<<"Enter the year you want to check: ";
    cin>>year;
    
    if(year % 4==0)
        {
            if(year % 100==0)
                {
                    if(year % 400==0)
                        cout<<year<<" is a leap year."<<endl;
                    else    
                        cout<<year<<" is NOT a leap year."<<endl;
                }
            else
                cout<<year<<" is a leap year."<<endl;
        }
    else
        cout<<year<<" is NOT a leap year."<<endl;
    return 0;
}