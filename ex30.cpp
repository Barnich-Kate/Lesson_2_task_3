
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Type number from 1 to 999: ";
    cin >> x;
    if (x < 10 && x%2 == 0) {
        cout << "even one-digit number";
    } else if (x < 10 && x%2 !=0) {
        cout << "odd one-digit number";
    } else if (x >= 10 && x < 100 && x % 2 == 0) {
        cout << "even two-digit number";
    } else if (x >= 10 && x < 100 && x % 2 != 0) {
        cout << "odd two-digit number";
    } else if (x > 99 && x % 2 == 0) {
        cout << "even three-digit number";
    } else if (x > 99 && x % 2 != 0) {
        cout << "odd three-digit number";
    }
    return 0;
}
