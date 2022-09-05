#include <iostream>
using namespace std;

//Free Fall Program - part 4
int main() {
    int seconds;
    const int GRAVITY = 32;
    double fall;

    cout << "Enter a time in seconds.\n";
    cin >> seconds;
    fall = seconds * GRAVITY;

    cout << "An object in free fall for " << seconds
         << " seconds will fall " << fall
         << " feet.\n";

    return 0;
}
