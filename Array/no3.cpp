//***Take 10 integer inputs from user and store them in an array.
//*** Again ask user to give a number. Now, tell user whether that number is present in array or not.
#include<iostream>
using namespace std;

int main(){
    int data [10] {};
    for(int i {1};i<=10;i++)
        {
            cout<<"Enter an integar: ";
            cin>>data[i];
        }
    cout<<"Array elements are : "<<endl;
    
        for(auto marks:data)
            {
                cout<<marks<<" ";
            }

    cout<<"\nEnter an integar: ";
    int num{0};
    cin>>num;
    for(auto value:data)
        {
            if(num == value)
                {
                     cout<<"It is a duplicate value."<<endl;
                }
        }
 
    return 0;
}