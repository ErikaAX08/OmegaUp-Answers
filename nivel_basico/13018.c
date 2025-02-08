//
// Created by Erika Amastal on 08/02/25.
// GitHub: https://github.com/ErikaAX08
// Web: https://erikaax.dev/
// LinkedIn: https://www.linkedin.com/in/erikaax/
//

#include <stdio.h>

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

double readDouble() {
    double num = 0.0;
    int sign = 1;
    char c = getchar_unlocked();

    while (c != '-' && (c < '0' || c > '9') && c != '.') {
        c = getchar_unlocked();
    }

    if (c == '-') {
        sign = -1;
        c = getchar_unlocked();
    }

    while (c >= '0' && c <= '9') {
        num = num * 10.0 + (c - '0');
        c = getchar_unlocked();
    }

    if (c == '.') {
        c = getchar_unlocked();
        double fraction = 1.0;
        while (c >= '0' && c <= '9') {
            fraction /= 10.0;
            num += (c - '0') * fraction;
            c = getchar_unlocked();
        }
    }

    return num * sign;
}

void printString(const char* str) {
    while (*str) {
        putchar_unlocked(*str++);
    }
}

int main(){
    register double exam = readDouble() + readDouble() + readDouble();
    exam = ((exam / 3.0) * 0.75);
    exam += readDouble() * 0.10;
    exam += readDouble() * 0.15;
    printf("%.3lf\n", exam);
    return 0;
}