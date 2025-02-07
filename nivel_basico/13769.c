//
// Created by Erika Amastal on 06/02/25.
//

#include <stdio.h>
#include <limits.h>

int readInt() {
    int num = 0, sign = 1;
    char c = getchar_unlocked();

    while (c != '-' && (c < '0' || c > '9')) {
        c = getchar_unlocked();
    }

    if (c == '-') {
        sign = -1;
        c = getchar_unlocked();
    }

    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar_unlocked();
    }

    return num * sign;
}

void printInt(int n) {
    if (n == 0) {
        putchar_unlocked('0');
        putchar_unlocked('\n');
        return;
    }

    char buffer[12];
    int i = 0;

    if (n < 0) {
        putchar_unlocked('-');
        n = -n;
    }

    while (n > 0) {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i > 0) {
        putchar_unlocked(buffer[--i]);
    }

    putchar_unlocked('\n');
}

int main() {
    int n = readInt();
    int diversiones[n];
    int suma_total = 0;
    int min_diversion = INT_MAX;

    for (int i = 0; i < n; i++) {
        diversiones[i] = readInt();
        suma_total += diversiones[i];
        if (diversiones[i] < min_diversion) {
            min_diversion = diversiones[i];
        }
    }

    int maxima_diversion = suma_total - min_diversion;

    printInt(maxima_diversion);

    return 0;
}