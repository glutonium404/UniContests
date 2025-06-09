#include <iostream>
#include <string>

using namespace std;

string reverse_string(string &s) {
    string reversed;

    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }

    return reversed;
}

string dec_to_bin(int dec) {
    string bin;

    while (dec > 0) {
        bin += dec % 2 == 1 ? '1' : '0';
        dec /= 2;
    }

    return reverse_string(bin);
}

int do_xor(string &bin_string) {
    int result = bin_string[0] == '1' ? 1 : 0;

    for (int i = 1; i < bin_string.length(); i++) {
        int curr_bit = bin_string[i] == '1' ? 1 : 0;
        result ^= curr_bit;
    }

    return result;
}

int find_smallest_x(int &input, int x = 0) {
    int _or = (input | x);
    string bin = dec_to_bin(_or);

    if (do_xor(bin)) {
        return x;
    }

    return find_smallest_x(input, x + 1);
}

int main() {
    while (1) {

        int input;
        cin >> input;

        string bin = dec_to_bin(input);

        if (do_xor(bin)) {
            cout << 0 << endl;
        } else {
            cout << find_smallest_x(input) << endl;
        }
    }
}
