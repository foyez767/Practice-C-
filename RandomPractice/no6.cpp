//***C++ Program to Find Factorial
#include<iostream>
using namespace std;

int main(){
    int num {0};
    int fact {1}; //***minimum value of factorial is 1 because 0!=1 and 1!=1;so I initialize factorial to 1.
    cout<<"Enter the number for which you want to find factorial: ";
    cin>>num;


    if(num>=0)
        {
            for(int i {1}; i<=num ; i++)
                {
                    // fact=fact*i; //4!=4*3*2*1 
                     fact*=i;  
                 }
    cout<<num<<"! = "<<fact;
        }
    else
        cout<<"Factorial of  a negative number doesn't exit."<<endl;
    
    return 0;
}