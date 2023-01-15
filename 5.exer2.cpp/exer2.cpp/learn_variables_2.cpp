#include <iostream>
using namespace std;

int main()
{
    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12; 
    cout << "Your mounthly salary is " << monthlySalary;

    // ------------------------------------------------------------

    float annualSalary_1;
    cout << "\nPlease enter your annual salary: ";
    cin >> annualSalary_1;
    float monthlySalary_1 = annualSalary_1 / 12;
    cout << "Your mounthly salary is " << monthlySalary_1 << endl;
    cout << "In 10 years you will eran " << annualSalary_1 * 10;
     
    system("pause>0");
}
