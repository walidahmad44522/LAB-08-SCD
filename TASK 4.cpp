#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter first student name, roll number and GPA: ";
    cin >> s1.name >> s1.roll >> s1.gpa;

    cout << "\nEnter second student name, roll number and GPA: ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa) {
        cout << "\nStudent with higher GPA:\n";
        cout << "Name: " << s1.name << endl;
        cout << "Roll Number: " << s1.roll << endl;
        cout << "GPA: " << s1.gpa << endl;
    }
    else if (s2.gpa > s1.gpa) {
        cout << "\nStudent with higher GPA:\n";
        cout << "Name: " << s2.name << endl;
        cout << "Roll Number: " << s2.roll << endl;
        cout << "GPA: " << s2.gpa << endl;
    }
    else {
        cout << "\nBoth students have equal GPA" << endl;
    }

    return 0;
}
