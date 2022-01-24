//***C++ program to REVERSE an array elements entered by user
#include<iostream>
using namespace std;

int main(){
    int data [5] {};
  
    for(int i {0}; i<5; i++)
        {
            cout<<"Enter an integar: ";
            cin>>data[i];
        }
    cout<<"Array elements : [ ";
    for(int i {0}; i<5; i++)
        {
            cout<<data[i]<<" ";
        }
    cout<<" ]"<<endl;

    //***reversing array elements

    cout<<"Reversed array elements : [ ";
    for(int i{4}; i>=0; i--)
        {
            cout<<data[i]<<" ";
        }
    cout<<" ]"<<endl;

    return 0;
}