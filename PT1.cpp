#include <iostream>
using namespace std;
int main (){

    int range , consecutive; 

    cout << " Range of Numbers  : ";
    cin >> range;
    cout <<  " Enter " << range << " consecutive number  : ";
    cin >> consecutive; 

    if (consecutive%2==0)
    {
        cout << consecutive << " is Even " << endl;
    }
    else 
    {
        cout << consecutive << " is Odd " << endl;
    }

    while (consecutive != range)
    {
        cin >> consecutive;

        if (consecutive%2==0)
        {
            cout << consecutive << " is Even " << endl;
        }
        else 
        {
            cout << consecutive << " is Odd " << endl; 
        }
    }
    

    return 0;
}