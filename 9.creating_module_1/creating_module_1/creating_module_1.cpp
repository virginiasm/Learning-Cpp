// learn: creating module
//

#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int n = 5;
    cout << "Factorial " << n << ": " << factorial(5) << endl;
    cout << "Area of square with side " << n << ": " << area_square(5) << endl;
    cout << "Area rectangle " << n << ": " << area_rectangle(5, 5) << endl;
    return 0;
}

