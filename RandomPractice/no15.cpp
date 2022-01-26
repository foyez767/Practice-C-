//***C++ Programs To Create Pyramid and Pattern

//***Example-01***
// #include<iostream>
// using namespace std;

// int main(){
//     int row{0};
//     cout<<"Enter how many row you want in pyramid? ";
//     cin>>row;

//     for(int i {1}; i<=row; i++)
//         {
//             for(int j {1}; j<=i; j++)
//                 {
//                     cout<<"*";
//                 }
//             cout<<endl;
//         }
    
//     return 0;
// }


//***Example-02:Full pyramid
#include<iostream>
using namespace std;

int main(){
    int row{0};
    cout<<"Enter how many row you want in pyramid? ";
    cin>>row;

   for(int i{1}; i<=row ;i++)
    {
        for(int j {row}; j>=i; j--)
            {
                cout<<" ";
                for(int k {1}; k<=(2*i-1); k++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
            }
        
    }
    
    return 0;
}

