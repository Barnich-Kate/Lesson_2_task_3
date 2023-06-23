#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Type coordinate of the point: ";
    cin >> x;
    cout<<"Type coordinate of the point: ";
    cin >> y;
    if (x == 0 && y == 0) {
        cout << "The coodinates is equal 0" << endl;
    } else if (y == 0 && x > 0) {
        cout << "The coordinates is in OY" << endl;
    } else if (x == 0 && y > 0) {
        cout << "The coordinates is in OX" << endl;
    } else {
        cout << "3"<< endl;
    }

    return 0;
}
