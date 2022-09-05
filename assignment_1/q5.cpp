#include <iostream>
using namespace std;

int main()
{
    double guess,r,n;
    int i = 0;


    cout << "Please input a positive number:\n";
    cin >> n;
    guess = n/2;

    while(i < 5)
    {
        r = n/guess;
        guess = (guess+r)/2;
        i++;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "This is an approximation of that number's square root:  "
         << guess << "\n";

    return 0;
}
