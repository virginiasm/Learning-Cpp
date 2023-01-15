#include <iostream>
using namespace std;

int main()
{
    int n = 11;

    if (n != 10) {
        cout << "Number is different from 10";
        n++;
    }
    cout << n;
    return 0;
}