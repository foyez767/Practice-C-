// ***checking an alphabet is VOWEL OR CONSONANT(DEKHTE HOBE)
#include<iostream>
using namespace std;

int main(){
    char selection {};
    cout<<"Enter your alphabet: ";
    cin>>selection;

    switch(selection)
        {
            case 'A':
            case 'a':
                    cout<<"It is a vowel. ";
                    break;
            case 'E':
            case 'e' :
                    cout<<" It is a vowel.";
                     break;
            case 'i':
            case 'I':
                    cout<<" It is a vowel.";
                     break;
            case 'O':
            case 'o':
                    cout<<"It is a vowel. ";
                     break;
            case 'U':
            case 'u':
                    cout<<"It is a vowel. ";
                     break;
            default:
                cout<<"It is a consonant.";
        }
    return 0;
}