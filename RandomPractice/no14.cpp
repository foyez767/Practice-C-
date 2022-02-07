// //***C++ Program to Display Prime Numbers Between Two Intervals using function
// #include<iostream>
// using namespace std;

// bool prime_number(int j){
//         for(int i {2}; i<j; i++)
//         {
//             if(j % i ==0)
//                 return false;
//         }
//         return true;
//     }

// int main(){

//     int low_limit{0},high_limit {0};
//     bool isPrime {true};
//     cout<<"Enter lower limit: ";
//     cin>>low_limit;
//     cout<<"Enter upper limit: ";
//     cin>>high_limit;

//     if(low_limit ==1)   //we know that 1 is not a prime number,so we set lower limit to 2
//         low_limit=2;
    
//         for(int j {low_limit};j<high_limit;j++)
//             {
//                  isPrime = prime_number(j);     //here i call prime number function and passing the value of j

//                  if(isPrime==true)
//                     cout<<j<<" ";
                 
//             }

//     return 0;
// }


//***C++ program to find prime numbers between two interval
#include<iostream>

int main(){
    int low_limit{0},high_limit {0};
    std::cout<<"Enter lower limit: ";
    std::cin>>low_limit;
    std::cout<<"Enter upper limit: ";
    std::cin>>high_limit;
    

    std::cout<<"Prime numbers between "<<low_limit<<" and "<<high_limit<<" : ";

    if(low_limit==0||low_limit==1)              //we know that 0,1 is not a prime number,so we set lower limit to 2
        low_limit=2;

    for(int i {low_limit};i<=high_limit;i++)  //i is increasing by 1 from low limit to high limit because we need to check every number between this boundary
        {
            bool isPrime {true};
            for(int j {2}; j<i;j++)             //j is for dividing i;it increased from 2 to less than i
                {
                    if(i % j ==0)
                        {
                            isPrime=false;
                            break;
                        }           
                }
            if(isPrime==true)
                std::cout<<i<<" ";           
        }
    
    return 0;
}