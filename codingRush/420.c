//
// Created by Erika Amastal on 15/02/25.
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

float readFloat() {
    float num = 0;
    int ch;
    int sign = 1;
    int decimal = 0;
    float fraction = 1.0f;

    while ((ch = getchar()) == ' ' || ch == '\n' || ch == '\t');

    if (ch == '-') {
        sign = -1;
        ch = getchar();
    } else if (ch == '+') {
        ch = getchar();
    }

    while (ch >= '0' && ch <= '9') {
        num = num * 10 + (ch - '0');
        ch = getchar();
    }

    if (ch == '.') {
        ch = getchar();
        while (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0');
            fraction *= 10.0f;
            ch = getchar();
        }
    }

    if (ch == ' ') {
        ungetc(ch, stdin);
    }

    return sign * num / fraction;
}

void readString(char *str) {
    int ch;
    int i = 0;
    while ((ch = getchar_unlocked()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';
}

void printString(const char* str) {
    while (*str) {
        putchar_unlocked(*str++);
    }
}

int main() {
    int m = readInt();
    getchar_unlocked();

    for (int i = 0; i < m; i++) {
        int count = 0;
        char ch;

        while (1) {
            ch = getchar_unlocked();
            if (ch == '\n' || ch == EOF)
                break;
            if (ch == ' ')
                count++;
        }

        printInt(count);
    }

    return 0;
}