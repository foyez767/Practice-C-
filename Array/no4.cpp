/*Take 10 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of zero.  */
#include<iostream>
using namespace std;

int main(){
    int data [10] {};
    int zero {0};
    int positive {0};
    int negative {0};
    int odd {0};
    int even {0};
    for(int i {0}; i<10; i++)
        {
            cout<<"Enter an integar: ";
            cin>>data[i];

            if(data[i] == 0)
               zero++;
            else if(data[i]>0)
                 {
                       positive++;
                       if(data[i] %2 ==0) //if number is positive,then you should check weather it is even or odd
                            even++;
                        else
                            odd++;
                 }
              
            else
               negative++;
        }
    cout<<"In the list,we have "<<zero<<" zero "<<positive<<" positive "<<negative<<" negative "<<odd<<" odd "<<even<<" even."<<endl;
   
    return 0;
}