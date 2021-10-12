// Chelsie Ivy U. Dela Cruz
// Prelim Exam 
// September 06, 2021



#include <iostream> 
using namespace std;
int main (){

    const double tax_rate = 0.12, philhealth = 150, SSS = 250, Pagibig = 200; 

    string name, employee_num, payday, employee_status;
    int rate; 
    int hour;
    double gross;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
   
    cout << " Enter Your Name         : ";
    getline(cin,name);  

    cout << " Emplyoyee Number        : ";
    getline(cin,employee_num);

    cout << " Date of Payday          : ";
    getline(cin,payday);

    cout << "\n===============================================\n";

    cout << " Hourly pay rate         : ";
    cin >> rate;

    cout << " Hours worked            : ";
    cin >> hour;


    cout << "\n===============================================\n";

    cout << " Payroll summary for     : " << name << endl;

    cout << " Employee Number         : " << employee_num << endl;

    cout << " Payroll date            : " << payday << endl;

    cout << "\n===============================================\n";


    cout << " You earned " << hour << " at " << rate << " per hour" << endl;
    cout << " Gross Pay                 " << (rate*hour) << "php" << endl;
    cout << " Philhealth                " << (philhealth) << "php" << endl;
    cout << " SSS                       " << (SSS) << "php" <<  endl;
    cout << " Pagibig                   " << (Pagibig) << "php" << endl;
    cout << " Withholding               " << ((rate*hour) * 0.12 ) << "php" << endl;
    cout << "\n===============================================\n";
    cout << " NET PAY                   " << ((rate * hour) - (( rate * hour ) * 0.12) - SSS - philhealth - Pagibig ) << "php" << endl; 
    cout << " Employee status           ";
    cin >> employee_status; 


    return 0;
}