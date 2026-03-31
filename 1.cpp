#include <iostream>
using namespace std;



int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}
