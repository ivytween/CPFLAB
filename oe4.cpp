#include <iostream>
using namespace std;
int main (){

    int i,v,y,rows;
    cout << "Number of Rows : ";
    cin >> rows; 

    for (i=1; i<=rows; i++)
    {
        for (y=i; y<rows; y++)
        cout << " ";
        for (v=1; v<=(2*rows-1); v++)
        {
            if (v==1 || v==2*i-1 || i==rows)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
        for (i=1; i<=rows; i++)
    {
        for (y=i; y<rows; y++)
        cout << " ";
        for (v=1; v<=(2*rows-1); v++)
        {
            if (v==1 || v==2*i-1 || i==rows)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
        for (i=1; i<=rows; i++)
    {
        for (y=i; y<rows; y++)
        cout << " ";
        for (v=1; v<=(2*rows-1); v++)
        {
            if (v==1 || v==2*i-1 || i==rows)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl                                                                                           ;
    }

    return 0;
}