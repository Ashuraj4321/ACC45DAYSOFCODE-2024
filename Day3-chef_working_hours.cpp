#include <iostream>
using namespace std;

int calculateWeeklyHours(int X, int Y) {

    //from Monday to Thursday
    int weekdaysHours = X * 4;
    // on Friday (Chill Day)
    int fridayHours = Y;
    // Total hours 
    return weekdaysHours + fridayHours;
}

int main() {
    int X, Y;
    cout << "Enter hours worked from Monday to Thursday (X): ";
    cin >> X;
    cout << "Enter hours worked on Friday (Y): ";
    cin >> Y;

    if (Y >= X) {
        cout << "Error: Y must be less than X." << endl;
    }
    int totalWorkHours = calculateWeeklyHours(X, Y);
    cout << "Total work hours in a week: " << totalWorkHours << endl;

    return 0;
}
