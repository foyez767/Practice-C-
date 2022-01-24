//*****Write a C++ program to find the largest element of a given array of integers
// #include<iostream>
// using namespace std;

// int main(){
//     int data_collect [] {10,7,9,11,100,120,15,-16,9};
//     int container {data_collect[0]};
//     int length {0};
//     // length=sizeof(data_collect)/sizeof(int); //**To determine an array size
//     length=sizeof(data_collect)/sizeof(data_collect [0]);
    
//     for(int i {1}; i<length; i++)
//         {
//             if(data_collect [i]>container)
//                 {
//                     container=data_collect[i];
//                 }
//             else
//                 {
//                     ; //***if my condition is false ,then do nothing and again start the loop***
//                 }
//         }
//     cout<<"The largest element in array is : "<<container;

//     return 0;
// }


//******Write a C++ program to find the largest THREE elements in an array.
#include<iostream>
using namespace std;

int main(){
    int data_collect [] {10,7,9,10,100,120,150,-16,9};
    int container {data_collect [0]};
    int length {sizeof(data_collect)/sizeof(data_collect [0])};
    int first {0},second {0};

    if(length>=3)
        {
            for(int i {1}; i<length; i++)
                {
                   if(data_collect[i] == container)
                    {
                        container;
                    }
                    else if(data_collect [i]> container)
                        {
                            second=first;
                            first=container; 
                            container=data_collect[i];
                        }
                    else 
                    {
                       container ;
                    }

                }
            cout<<"Largest three elements are : ";
            cout<<container<<" ";
            cout<<first<<" ";
            cout<<second<<endl;
        }
    else
        {
            cout<<"Invalid!First add numbers in collection."<<endl;
        }

    return 0;
}