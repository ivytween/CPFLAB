#include <iostream> 
using namespace std;
int main (){

    const double philhealth = 150, SSS = 250, Pagibig = 200, net_pay = 0, tax_rate = 12;

    string name, employee_num, payday, employee_status, tax_D;
    int rate 
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

    if (gross == 0 || rate == 0){
         cout << "You did not put anything!";
    }else if (gross >= 5001 && gross <=10000){
        tax_rate = 12;
        tax_D = gross * 0.12;
        net_pay = gross - tax_D; 
    }else if (gross < 5000){
        tax_rate = 12;
        tax_D = gross * 0.12;
        net_pay = gross - tax_D;
    }else{
        cout << "Invalid input!";
    }

     cout << " You earned " << hour << " at " << rate << "per hour" << endl;
    cout << " Gross Pay                 " << (rate*hour) << "php" << endl;
    cout << " Philhealth                " << (philhealth) << "php" << endl;
    cout << " SSS                       " << (SSS) << "php" <<  endl;
    cout << " Pagibig                   " << (Pagibig) << "php" << endl;
    cout << " Withholding               " << ((rate*hour) * 0.12 ) << "php" << endl; 

    cout << "NET PAY                   " << net_pay << endl;

    return 0;

}