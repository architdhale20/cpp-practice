#include <iostream>
using namespace std;

int main() {
    double physics, chemistry, maths, total, percentage;

    cout << "Enter Physics marks: ";
    cin >> physics;

    cout << "Enter Chemistry marks: ";
    cin >> chemistry;

    cout << "Enter Maths marks: ";
    cin >> maths;

    total = physics + chemistry + maths;
    percentage = (total / 300) * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 75) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}