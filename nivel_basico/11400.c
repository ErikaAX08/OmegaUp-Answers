//
// Created by Erika Amastal on 09/02/25.
// GitHub: https://github.com/ErikaAX08
// Web: https://erikaax.dev/
// LinkedIn: https://www.linkedin.com/in/erikaax/
//

#include <stdio.h>
#define MAX 11

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

    putchar_unlocked(' ');
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
    while ((ch = getchar_unlocked()) != '\n' && ch != EOF && ch != ' ') {
        str[i++] = ch;
    }
    str[i] = '\0';
}

void printString(const char* str) {
    while (*str) {
        putchar_unlocked(*str++);
    }
}

int compareStrings(const char *a, const char *b) {
    while (*a && *b && *a == *b) {
        a++, b++;
    }
    return (*a - *b);
}

void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printInt(mat[i][j]);
        }
        putchar('\n');
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int Ax, Ay, Bx, By;

    Ax = readInt();
    Ay = readInt();

    for (int i = 0; i < Ax; i++) {
        for (int j = 0; j < Ay; j++) {
            A[i][j] = readInt();
        }
    }

    Bx = readInt();
    By = readInt();

    for (int i = 0; i < Bx; i++) {
        for (int j = 0; j < By; j++) {
            B[i][j] = readInt();
        }
    }

    char operation[20];
    while (1) {
        readString(operation);

        if (compareStrings(operation, "SALIR") == 0) {
            break;
        } else if (operation[0] == 'T') {
            for (int i = 0; i < Ay; i++)
                for (int j = 0; j < Ax; j++)
                    result[i][j] = A[j][i];

            printMatrix(result, Ay, Ax);
        } else if (operation[0] == 'S') {
            if (Ax == Bx && Ay == By) {
                for (int i = 0; i < Ax; i++)
                    for (int j = 0; j < Ay; j++)
                        result[i][j] = A[i][j] + B[i][j];

                printMatrix(result, Ax, Ay);
            } else {
                putchar_unlocked('X');
                putchar_unlocked('\n');
            }
        } else if (operation[0] == 'R') {
            if (Ax == Bx && Ay == By) {
                for (int i = 0; i < Ax; i++)
                    for (int j = 0; j < Ay; j++)
                        result[i][j] = A[i][j] - B[i][j];

                printMatrix(result, Ax, Ay);
            } else {
                putchar_unlocked('X');
                putchar_unlocked('\n');
            }
        } else if (operation[0] == 'M') {
            if (Ay == Bx) {
                for (int i = 0; i < Ax; i++)
                    for (int j = 0; j < By; j++) {
                        int sum = 0;
                        for (int k = 0; k < Ay; k++)
                            sum += A[i][k] * B[k][j];
                        result[i][j] = sum;
                    }

                printMatrix(result, Ax, By);
            } else {
                putchar_unlocked('X');
                putchar_unlocked('\n');
            }
        } else {
            putchar_unlocked('X');
            putchar_unlocked('\n');
        }
    }

    return 0;
}