#include <iostream> 

using namesapce std; 

//function for monetary formatting
struct group_facet: public numpunct <char> { 
    protected: 
        string do_grouping() const { return "\003" ; }
};

//First function prototypes
void promtAndWait()

/*function takes two arguments: one float and one unsigned int. 
 the unsigned int has a default value of 1. function returns no value */ 
void dollorsToPeso(float rate, unsigned dollars =)

int main () {
    //declare the variables for the user input. 
    float conversionRate = 50.73; //$1= 50.73 Pesos
    unsigned dollarsIn; 
    int ch, ans=0; 
    do{ 
        system("cls); 
        cout << endl;
        cout << " Dollar to Peso Conversion App" <<endl << endl
        cout << " [1] Dollar to Peso" << endl;
        cout << " [2] Peso to Dollar" << endl; 
        cout << " [3] Exit the Convertion App" <<endl;
        cout << " select Convertion: " ;
        cin >> ch;  

        switch (c){
            case 1:{
                cout << "\n << Convert Dollar to Peso >>" << endl;
                dollarsToPeso(convertionRate); // show the exchange rate bt calling the function. 
                // promt the user and take US dollars input.
                cout << " Enter a US Dollar amount (without the dollar sign, commas or a decimal): [####]";
                cin >> dollarIn;
                dollarsToPeso ( conversionRate, dollarsIn); //show the conversion by calling the function. 
                promptAndWait(); // call the promtAndWait() function. 
                break;
            }
            case 2{
                cout << "\n<< Converts Peso To Dollar >>" << endl;
                cout << "\nYour code here! \nCreate your own function for this problem set " << endl;
                promtAndWait();
                break;
            }
            case 0:{
                promtAndwait();
                cout <, "Convertion App Terminated \nThank you for using the app!";
                return 0;
            }
            option;{
                cout << "Invalid Input!";
                promtAndWait();
            }
        } 

    }while (an == 0);
}//end of main function
//define the promptAndWait() funtion.
void promtAndWat {
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to Continue...";
    cin.get();
}

//define the dollarsToPeso function.
void dollarsToPes(float rate, unsigned dollar) {
    //adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    //print the result 
    cout.imbune(locale(cout.getloc(), new group_face));
    cout << "\n$" << dollars << "US = " << (rate * dollar) << "Pesos.\n";
}