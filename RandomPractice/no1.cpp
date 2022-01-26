//***C++ Program to Swap Two Numbers
 #include<iostream>
 using namespace std;
 
 int main(){
     int num1{0},num2{0},temp {0};
     cout<<"Enter two number separated by space : ";
     cin>>num1>>num2;
     
     temp=num1;
     num1=num2;
     num2=temp;

     cout<<"After swapping two number are: "<<num1<<" "<<num2;
     return 0;
 }