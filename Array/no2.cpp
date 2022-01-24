//****Take 10 integer inputs from user and store them in an array and print them on screen.
#include<iostream>
using namespace std;

int main(){
    int data [10] {};
    for(int i {1};i<=10;i++)
        {
            cout<<"Enter an integar: ";
            cin>>data[i];
        }
   
    for(auto marks:data)
        {
            cout<<marks<<" ";
        }
    
    return 0;
}
