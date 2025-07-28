// USING FOR-LOOP
#include <iostream>
using namespace std;
void fibonacci_iterative(int n) {
    int a = 0, b = 1;
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}
int main() {
    int n;
    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> n;

    cout << "First " << n << " Fibonacci numbers are: ";
    fibonacci_iterative(n);

    return 0;
}

// // USING Recursion
// int fib_recursive(int n) {
//     if(n == 0) return 0;
//     if(n == 1) return 1;
//     return fib_recursive(n - 1) + fib_recursive(n - 2);
// }
// int main(){
// int n = 10;
// for(int i = 0; i < n; i++)
//     cout << fib_recursive(i) << " ";

// }
