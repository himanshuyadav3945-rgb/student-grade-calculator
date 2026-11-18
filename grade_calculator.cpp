#include <iostream>
using namespace std;

int main() {
    int subjects;
    float marks, total = 0, percentage;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Enter marks of subject " << i << ": ";
        cin >> marks;
        total = total + marks;
    }

    percentage = total / subjects;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 40) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
