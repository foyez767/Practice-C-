// //***C++ Program to Display Fibonacci Series (number of term= n)
// #include<iostream>
// using namespace std;

// int main(){
//     int n {0};
//     int first {0},second {1};  //***fibonacci series always start with 0,1
//     int fibo {0};
//     cout<<"Enter how many terms you want to see from fibonacci series? ";
//     cin>>n;
//     cout<<"Fibonacci series are : ";

//     for(int i {1}; i<=n; i++)
//         {
//             if(i==1)
//                 cout<<first<<" ";
//             else if(i==2)
//                 cout<<second<<" ";
//             else
//                 {
//                     fibo=first+second;
//                     first=second;
//                     second=fibo;
//                     cout<<fibo<<" ";
//                 }
//         }

//     return 0;
// }


////*****fibonacci series using while loop
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int first =0;
//     int second= 1;
//     int count=1;
//     int fibo;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"The fibonacci series is here: "<<first<<" "<<second<<" ";

//     while(count<n)
//     {
        
//             fibo=first+second;
//             first=second;
//             second=fibo;
//             cout<<fibo<<" ";

//     }

//     return 0;
// }


//***Program to Generate Fibonacci Sequence Up to a Certain Number
#include<iostream>
using namespace std;

int main(){
    int range{0},next_term {0};
    int first {0};
    int second {1};

    cout<<"You want to see the fibonacci series up to which number? ";
    cin>>range;
    cout<<"Fibonacci series is here: "<<first<<" "<<second<<" ";
    
    next_term=first+second;

    while(next_term<=range)
        {
            cout<<next_term<<" ";
            first=second;
            second=next_term;
            next_term=first+second;

        }

    return 0;
}
