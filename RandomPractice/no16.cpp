//C++ Program to convert days to years, weeks and days
#include<iostream>

int main(){
    int day {};
    int years {};
    int weeks {};
    int days {};

    std::cout<<"Enter number of days: ";
    std::cin>>day;
    years=day/365;          //365 day=1 year
    weeks=day/7;            //7day=1weeks
    days=day-(weeks*7);     //remaining day
    
    std::cout<<"In "<<day<<" day,we have "<<years<<" years "<<weeks<<" weeks "<<days<<" days."<<std::endl;
    return 0;
}