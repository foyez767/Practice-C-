//***C++ Program to Display Prime Numbers Between Two Intervals
#include<iostream>
using namespace std;

int main(){
   int count{0};
    int low_limit{0},high_limit {0};
    cout<<"Enter lower limit: ";
    cin>>low_limit;
    cout<<"Enter upper limit: ";
    cin>>high_limit;

    while(low_limit<=high_limit)   
        {
            for(int j{2}; j<low_limit; j++)
                {
                    if(low_limit % j ==0)
                    {
                        count=1;
                        break;
                    }
                }
           
            low_limit++;
        } 
         if(count == 0)
                cout<<low_limit<<" ";
    
    return 0;
}