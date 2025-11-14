#include <iostream>
#include <fstream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks[5];
    float percentage;
    char grade;
    string result;

public:
    void inputDetails() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        srand(time(0) + rollNo); // random seed
        cout << "\nGenerating marks for 5 subjects automatically...\n";

        int total = 0;
        for (int i = 0; i < 5; i++) {
            marks[i] = 50 + rand() % 51; // random marks between 50–100
            total += marks[i];
        }

        percentage = total / 5.0;

        // Grade
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 45)
            grade = 'D';
        else
            grade = 'F';

        // Pass/Fail
        result = (percentage >= 45) ? "Pass" : "Fail";
    }

    void displayMarksheet() {
        cout << "\n================ STUDENT MARKSHEET ================\n";
        cout << left << setw(15) << "Subject" << setw(10) << "Marks" << endl;
        cout << "------------------------------------------\n";
        for (int i = 0; i < 5; i++) {
            cout << left << setw(15) << ("Subject " + to_string(i + 1))
                 << setw(10) << marks[i] << endl;
        }
        cout << "------------------------------------------\n";
        cout << "Name        : " << name << endl;
        cout << "Roll No     : " << rollNo << endl;
        cout << "Percentage  : " << fixed << setprecision(2) << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
        cout << "Result      : " << result << endl;
        cout << "===================================================\n";

        ofstream file("result.txt");
        file << "================ STUDENT MARKSHEET ================\n";
        for (int i = 0; i < 5; i++)
            file << "Subject " << i + 1 << ": " << marks[i] << endl;
        file << "------------------------------------------\n";
        file << "Name        : " << name << endl;
        file << "Roll No     : " << rollNo << endl;
        file << "Percentage  : " << fixed << setprecision(2) << percentage << "%" << endl;
        file << "Grade       : " << grade << endl;
        file << "Result      : " << result << endl;
        file << "===================================================\n";
        file.close();
        cout << "\nMarksheet saved to 'result.txt' successfully!\n";
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayMarksheet();
    cout << "\nThank you for using Student Result System!\n";
    return 0;
}
