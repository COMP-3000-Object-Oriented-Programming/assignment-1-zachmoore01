#include <iostream>
using namespace std;

int main() {
    int var,dbl,sqr;
    cout << "Please enter a number:";
    cin >> var;

    dbl = var*2;
    sqr = var*var;

    cout << "\nYour number doubled is " <<dbl;
    cout << "\nSquaring your number equals " <<sqr;
    return 0;
}
