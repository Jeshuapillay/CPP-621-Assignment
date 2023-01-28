    #include <iostream>
#include <cmath>

using namespace std;

// Jeshua Leoanrd Pillay, 401914544
class Emp{

    public:
        string getInfo(int Emp_ID) {
        string  Emp_Det;

        switch(Emp_ID) {

            case 1104:
                Emp_Det = "Employee's ID: 1104\nFirstname: Jesh\nSurname: Pillay\nage: 20\n";
                break;

            case 1234:
                Emp_Det = "Employee's ID: 1234\nFirstname: Shai\nSurname: Dooken\nage: 19\n";
                break;

            case 2424:
                Emp_Det = "Employee's ID: 2424\nFirstname:Adin\nSurname: Rikisahedew\nage: 19\n";
                break;

            default:
                Emp_Det = "Invalid input! \a";
        }

        return Emp_Det;
    }

};

// Jeshua Leoanrd Pillay, 401914544
class Salary: public Emp{
        public:
            float GP, hours, days, rate, tax, NP;
            string getSalary(int Emp_ID) {
            string Salary_Det;

            switch(Emp_ID) {

                case 1104:
                    Salary_Det = "Employee's Full Name: Jesh Pillay\nHourly rate: R500";
                    break;

                case 1234:
                    Salary_Det = "Employee's Full Name: Shai Dooken\nHourly rate: R600";
                    break;

                case 2424:
                    Salary_Det = "Employee' Full Name: Adin Rikisahedew\nHourly rate: R700";
                    break;

                default:
                    Salary_Det = "Invalid input! \a";

            }

            return Salary_Det;
        }
// Jeshua Leoanrd Pillay, 401914544
            int calculateNet(int Emp_ID) {

                    switch(Emp_ID) {
                        case 1104:
                            cout << endl << "Employee's Full Name: Jesh Pillay\n";
                            break;

                        case 1234:
                            cout << endl << "Employee's Full Name: Shai Dooken\n";
                            break;

                        case 2424:
                            cout << endl << "Employee's Full Name: Adin Rikisahedew\n";
                            break;
                    }
                            cout << endl << "Enter the rate per hour: R";
                            cin >> rate;
                            cout << endl << "Enter the hours worked: ";
                            cin >> hours;
                            cout << endl << "Enter the number of days worked: ";
                            cin >> days;
                            GP =  rate * hours * days;
                            tax = 0.15;
                            NP = GP - (GP * tax);

                            return NP;
            }
    };

int main() {
// Jeshua Leoanrd Pillay, 401914544
    cout << "Jeshua Leonard Pillay, 401914544" << endl;

    cout << ".............................................................." << endl;

    Emp emp_det;

// Jeshua Leoanrd Pillay, 401914544
    int ID;
    cout << endl << "Enter employee's ID number to view employee's details: ";
    cin >> ID;
    cout << endl << emp_det.getInfo(ID) << endl;

    cout << ".............................................................." << endl;

// Jeshua Leoanrd Pillay, 401914544
    Salary sal_det;

    int ID2;
    cout << endl << "Enter employee's ID number to view salary details: ";
    cin >> ID2;
    cout << endl << sal_det.getSalary(ID2) << endl;

    cout << ".............................................................." << endl;

// Jeshua Leoanrd Pillay, 401914544
    int ID3;
    cout << endl << "Enter employee's ID number to calculate net payment: ";
    cin >> ID3;
    cout << endl << "Employee's net payment (tax included) is : R" << sal_det.calculateNet(ID3) << endl;

    cout << ".............................................................." << endl;

    return 0;

}
