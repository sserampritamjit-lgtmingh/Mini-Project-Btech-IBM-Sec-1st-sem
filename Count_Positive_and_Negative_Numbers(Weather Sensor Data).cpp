/*Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
?? Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

??? Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1*/


#include <iostream>
using namespace std;

int main() {
    int n, x, pos = 0, neg = 0, zero = 0;					// [n = how many readings will be entered]
															// [x = each reading (one number)]

    cout << "Enter number of readings: ";
    cin >> n;

    cout << "Enter the readings: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > 0) pos++;
        else if(x < 0) neg++;
        else zero++;
    }

    cout << "\nPositive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero;

    return 0;
}
