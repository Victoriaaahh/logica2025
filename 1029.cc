#include <iostream>
using namespace std;

int fib[40];         
int calls[40];     

void precompute() {
    fib[0] = 0; fib[1] = 1;
    calls[0] = 0; calls[1] = 0; 

    for (int i = 2; i <= 39; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
        calls[i] = calls[i-1] + calls[i-2] + 2; 
    }
}

int main() {
    int N;
    cin >> N;
    precompute();

    while (N--) {
        int x;
        cin >> x;
        cout << "fib(" << x << ") = " << calls[x] << " calls = " << fib[x] << endl;
    }

    return 0;
}
