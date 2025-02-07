//
// Created by Erika Amastal on 06/02/25.
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

void printString(const char* str) {
    while (*str) {
        putchar_unlocked(*str++);
    }
}

int main(){
    int l1 = readInt();
    int t1 = readInt();
    int l2 = readInt();
    int t2 = readInt();

    if (l1 > l2 && t1 > t2) {
        printString("Hueso 1\n");
        return 0;
    }

    if (l1 < l2 && t1 < t2) {
      printString("Hueso 2\n");
      return 0;
    }

    printString("Perrito confundido :(\n");
    return 0;
}