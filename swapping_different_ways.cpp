// swapping of two numbers with temporary variable
#include<iostream>
using namespace std;
int main()
{
    int num1 = 22, num2 = 33, temp;

    cout << "Before swapping." << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    temp = num1; // num1 = 22 and temp will be 22
    num1 = num2; //num2 = 33 and variable num1 will be 33
    num2 = temp; // temp was 22 and variable num2 will be 22

    cout << "\nAfter swapping." << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
/* 
Output
Before swapping.
num1 = 22, num2 = 33

After swapping.
num1 = 33, num2 = 22
*/

//***************************************************************************************************************************

// swapping of two numbers without temporary variable
// swapping of two numbers plus-minus operator
#include <iostream>
using namespace std;

int main()
{
    
    int a = 3, b = 6;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b; // a = 9
    b = a - b; // b = 3
    a = a - b; // a = 6

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
/* 
Output
Before swapping.
a = 3, b = 6

After swapping.
a = 6, b = 3
*/

//***************************************************************************************************************************

// swapping of two numbers without temporary variable
// swapping of two numbers multiplication-division operator 
#include <iostream>
using namespace std;

int main()
{
    
    int a = 3, b = 6;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

// using multiplication and division for swapping
a = a * b;    // a = 18
b = a / b;    // b = 3
a = a / b;    // a = 6


    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
/* 
Output
Before swapping.
a = 3, b = 6

After swapping.
a = 6, b = 3
*/

// //***************************************************************************************************************************

// swapping of two numbers without temporary variable
// swapping of two numbers Xor bitwise operator 
#include <iostream>
using namespace std;

int main()
{
    
    int x = 3, y = 6;

    cout << "Before swapping." << endl;
    cout << "x = " <<  y<< ", x = " << y << endl;

// using multiplication and division for swapping
  //swapping using bitwise operator
  x = x^y; //0000 0011 xor 0000 0110 -> x = 0000 0101 -> 5
  y = x^y; // 0000 0101 xor 0000 0110 -> y = 0000 0011 -> 3
  x = x^y; // 0000 0101 xor 0000 0011 -> x = 0000 0110 - > 6


    cout << "\nAfter swapping." << endl;
    cout << "x = " <<  y<< ", x = " << y << endl;

    return 0;
}
/* 
Output
Before swapping.
a = 3, b = 6

After swapping.
a = 6, b = 3
*/

//***************************************************************************************************************************
