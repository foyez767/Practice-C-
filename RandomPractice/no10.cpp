//***C++ Program to Find GCD/HCF
//1.দুইটি সংখ্যার গসাগু হচ্ছে সংখ্যা দুটিকে [সবচেয়ে বড়] তৃতীয় যে সংখ্যাটি দ্বারা ভাগ করলে উভয়ের  ক্ষেত্রে ভাগশেষ  শূন্য হয়  সেই তৃতীয় সংখ্যা
//2.*দুটি সংখ্যার গসাগু কখনো ছোট সংখ্যাটি অপেক্ষা বেশি হতে পারে না
#include<iostream>
using namespace std;

int main(){
    int a {0},b{0},gcd{0};
    cout<<"Enter two number separated by space: ";
    cin>>a>>b;

    if(a>b)
        {
            for(int i {1}; i<=b; i++)
                {
                    if(a % i==0 && b%i==0)
                        gcd=i;
                }
        }
    else
        {
            for(int i {1}; i<=a; i++)
                {
                    if(a % i==0 && b%i==0)
                        gcd=i;
                }
        }
    cout<<"GCD is : "<<gcd;
    return 0;
}
