// Learning Functions in C++
//

#include <iostream>

using namespace std;

bool par(int num);
void message();

bool par(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}

void message() {
    cout << "Learning Functions in C++" << endl;
}

int main()
{
    int n;
    message();

    cout << "Enter a number: " << endl;
    cin >> n;

    if (par(n))
    {
        cout << "The number " << n << " is even." << endl;
    }
    else
    {
        cout << "The number " << n << " is odd." << endl;
    }

}



