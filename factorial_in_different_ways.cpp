#include <iostream>
using namespace std;

int func_factorial(int n) {
    int num_fact = 1;
    for (int i = 1; i <= n; ++i) {
      // n = 5... it means it will iterate 5 times
      
           num_fact = num_fact * i;
      //num_fact <-1 =   1  *    1;
      //num_fact <-2 =   1  *    2;
      //num_fact <-6 =   2  *    3;
      //num_fact <-24 =  6  *    4;
      //num_fact <-120 = 24 *    5;
      
      // updated value of num_fact is 120
    }
    return num_fact; // it will return 120
}

int main() {
    int number;
    cout << "Enter a number ";
    cin >> number;
    if (number < 0) //if number is negative then then execute if statement
                    // otherwise else statement
    { 
        cout << "Factorial is not defined for negative numbers\n";
    } 
    else {
        int result = func_factorial(number); // function calling;
        cout << "Factorial of " << number << " is: " << result << endl;
    }
}
/*
output:-
Enter a number 5
Factorial of 5 is: 120
*/

//**************************************************************************************************************


#include <iostream>
using namespace std;

int fact(int n){
     if (n <= 0 )
         return 1;
     else
         return n * fact(n-1); // function calling itself (recursive function)
            // 5 * fact(4) -> 5 * (24) = 120
              // 4 * fact(3) -> 4 * (6) = 24
              // 3 * fact(2) -> 3 * (2) = 6
              // 2 * fact(1) -> 2 * (1) = 2
              // 1 * fact(0) -> 1 * (1) = 1 
            /* this fact(0) will hit base 
            condition where the n = 0 will 
            return 1 and it will be 1 * 1; */
 }
 int main(){
     int number;

     cout<< "enter the number "<<endl;
     cin>>number; // number = 5

     int factorial =  fact(number); // function calling 

     cout<< "Factorial of number " << number << " is "<<factorial<<endl;
 }
// /*
// output
// enter the number 
// 5
// Factorial of number 5 is 120
// */

// //**************************************************************************************************************

// ternary operators
#include <iostream>
using namespace std;

int fact(int n){
    // function calling itself (recursive function)
    return (n <= 0 ) ? 1 : n * fact(n-1); 
            // 5 * fact(4) -> 5 * (24) = 120
            // 4 * fact(3) -> 4 * (6) = 24
            // 3 * fact(2) -> 3 * (2) = 6
            // 2 * fact(1) -> 2 * (1) = 2
            // 1 * fact(0) -> 1 * (1) = 1 
            /* this fact(0) will hit base 
            condition where the n = 0 will 
            return 1 and it will be 1 * 1; */
}
int main(){
    int number;

    cout<< "enter the number "<<endl;
    cin>>number; // number = 5

    int factorial =  fact(number); // function calling 

    cout<< "Factorial of number " << number << " is "<<factorial<<endl;
}
/*
output
enter the number 
5
Factorial of number 5 is 120
*/