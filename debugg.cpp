#include <iostream>

using namespace std;

struct group_face: public numpunct<char>{
    protected:
        string do_grouping() const{return "\003";}
};

void prompAndWait();

void dollarsToPeso(float rate, unsigned dollars = 1);

void pesoToDollars(float rate, unsigned peso = 1);

int main()
{
    float conversionRate = 50.73;
    unsigned dollarsIn,pesoIn;
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit the Conversion App" << endl;
        cout << "Select Conversion: ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollarsToPeso(conversionRate);

                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn);
                prompAndWait();
                break;
            }
            case 2:{
                cout << "\n Convert Peso to Dollar >>" << endl;
                cout << "Enter a Philippine peso amount (without the dollar sign, commas or a decimal) : [####] ";
                cin >> pesoIn;
                pesoToDollars(conversionRate, pesoIn);
                prompAndWait();
                break;
            }
            case 0:{
                prompAndWait();
                cout << "Conversion App Terminated \nThank you for using the app!";
                return 0;
            }
            option:{
                cout << "Invalid Input!";
                prompAndWait();
            }
        }
    }while(ans == 0);
}

void prompAndWait(){
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to Continue...";
    cin.get();
}

void dollarsToPeso(float rate, unsigned dollar){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_face));
    cout << "\n$" << dollar << " US - " << rate * dollar;
}

void pesoToDollars(float rate, unsigned peso){
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_face));
    cout << "\nPhp " << peso << " - " << peso / rate;
}