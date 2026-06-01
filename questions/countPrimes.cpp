#include<iostream>
using namespace std;

int countPrimes(int n) {
    int count = 0;

    for(int i = 2; i <= n; i++) {
        bool isPrime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            count++;
        }
    }

    return count;
}

int main(){
    cout << countPrimes(16) << endl;
}