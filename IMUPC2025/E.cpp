#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int a, b;

    cin >> a >> b;

    int largest = a > b ? a : b;
    int sum = 0;

    for(int i=1; i<largest/2; i++) {
        if(a % i == 0 && b % i == 0) {
            sum += i;
        }
    }

    if(is_prime(sum)) {
        cout << "Lucky" << endl;
    } else if(is_prime(sum + 1) || is_prime(sum - 1)) {
        cout << "Luckiest Unlucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
}
