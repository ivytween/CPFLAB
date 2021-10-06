#include <iostream> 
using namespace std;
int main (){

    const double tax= ;

    string Name,employee_num,payday; 
    int rate; 
    int hour;
    double gross;
    int SSS;
    int Philhealth;
    int Pagibig;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << " Enter Your Name  : ";
    getline(cin,Name);

    cout << " Emplyoyee Number : ";
    getline(cin,employee_num);

    cout << " Date of Payday   :";
    getline(cin,payday);

    cout << "\n===================================\n";

    cout << " Hourly pay rate : ";
    cin >> rate;

    cout << " Hours worked    :";
    cin >> hour;

    cout << "\n===================================\n";

    cout << " Payroll summary for : " << Name << endl;

    cout << " Employee Number     : " << employee_num << endl;

    cout << " Payroll date        : " << payday << endl;

    cout << "\n===================================\n";

    cout << " You earned " << hour << " at " << rate << "per hour" << endl;
    cout << " Gross Pay  :        " << (rate*hour) << "php" << endl;
    //cout << " W";




    return 0;
}