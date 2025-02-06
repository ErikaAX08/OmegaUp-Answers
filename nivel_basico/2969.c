//
// Created by Erika Amastal on 06/02/25.
//

#include <stdio.h>
#define MAX 1001

int readInt() {
    int num = 0, sign = 1;
    char c = getchar_unlocked();

    // Ignorar espacios y saltos de línea
    while (c < '0' || c > '9') {
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

    char buffer[12]; // Hasta 10^9 (máximo para enteros)
    int i = 0;

    while (n > 0) {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }

    while (i > 0) {
        putchar_unlocked(buffer[--i]);
    }

    putchar_unlocked(' ');
}


int main(void) {
    int n = readInt();
    int m[MAX] = {0};
    for (int j = n - 1; j >= 0; j--) {
        m[j] = readInt();
    }

    for(int i = 0; i < n; i++) {
        printInt(m[i]);
    }

    return 0;
}