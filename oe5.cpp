#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void reverseString(string& word){
    reverse(word.begin(), word.end());
}

void reverseInt(int& numbers, int& reversedNumber){
    int remainder;
    while(numbers != 0) {
        remainder = numbers%10;
        reversedNumber = reversedNumber*10 + remainder;
        numbers /= 10;
    }
}

void getword(string& word){

}

int main()
{
    int choice, reversedNumber,unsignedInteger = 0;
    string word;
    bool repeat=true;



    do{
        cout << "[1] Reverse String" << endl;
        cout << "[2] Reverse Unsigned Integer" << endl;
        cout << "[3] Exit" << endl;
        cout << "Select function: ";
        cin >> choice;
        cout << endl;

         switch(choice){
            case 1:
                cout << "Reverse a string: ";
                cin.ignore();
                getline(cin,word);
                reverseString(word);
                cout<<"\nReverse word: "<<word << endl;
                cout << endl;
                break;
            case 2:
                cout << "Reverse Unsigned Integer: ";
                cin >> unsignedInteger;
                reverseInt(unsignedInteger, reversedNumber);
                cout<<"\nReverse Integer: "<<reversedNumber << endl;
                cout << endl;
                break;
            case 3:
                repeat = false;
                break;
        }



    }while(repeat);

    return 0;
}