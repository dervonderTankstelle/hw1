#include <iostream>

using namespace std;

unsigned int fibonacci(unsigned int N) {
    if (N == 0) {
        return 0;
    }
    
    if (N == 1) {
        return 1;
    }
    
    //f(i)=f(i-1)+f(i-2)
    return fibonacci(N-1) + fibonacci(N-2);
    
}

int main() {
    unsigned int N;
    
    cout << " Bitte Wert N eingeben: ";
    cin >> N;
    cout << " Die Fibonaccizahl von " << N << 
    " ist " << fibonacci(N) << endl;
}
