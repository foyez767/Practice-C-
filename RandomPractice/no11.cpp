//C++ Program to Find LCM(lowest common multiple)
#include<iostream>
using namespace std;

int main(){
    int a{0},b{0},max{0};
    cout<<"Enter two numbers separated by space: ";
    cin>>a>>b;

    max=(a>b) ? a:b;

    do 
    {
        if(max % a==0 && max % b==0)
            {
                max;
                break;
            }
           
        else
            max++;
    }while(true);

    cout<<"LCM is : "<<max;

    return 0;
}