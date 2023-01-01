#include<stdio.h>

#include<string.h>

char s[25];
int main() {
    long i, sl, ind, su1, su2, su3, su4, su5, su6;

    while (gets(s)) {
        ind = 0;
        su1 = su2 = su3 = su4 = su5 = su6 = 0;
        sl = strlen(s);
        for (i = 0; i < sl; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'H' || s[i] == 'W' || s[i] == 'Y') {
                su1 = 0;
                su2 = 0;
                su3 = 0;
                su4 = 0;
                su5 = 0;
                su6 = 0;
            } else if (s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V') {
                if (su1 == 0) {

                    su1 = 1;
                    printf("1");
                    su2 = 0;
                    su3 = 0;
                    su4 = 0;
                    su5 = 0;
                    su6 = 0;
                }

            } else if (s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z') {
                if (su2 == 0) {

                    su2 = 1;
                    printf("2");
                    su1 = 0;
                    su3 = 0;
                    su4 = 0;
                    su5 = 0;
                    su6 = 0;
                }

            } else if (s[i] == 'D' || s[i] == 'T')

            {
                if (su3 == 0) {

                    su3 = 3;
                    printf("3");
                    su1 = 0;
                    su2 = 0;
                    su4 = 0;
                    su5 = 0;
                    su6 = 0;
                }

            } else if (s[i] == 'L')

            {
                if (su4 == 0) {

                    su4 = 4;
                    printf("4");
                    su1 = 0;
                    su2 = 0;
                    su3 = 0;
                    su5 = 0;
                    su6 = 0;
                }

            } else if (s[i] == 'M' || s[i] == 'N')

            {
                if (su5 == 0) {

                    su5 = 5;
                    printf("5");
                    su1 = 0;
                    su2 = 0;
                    su3 = 0;
                    su4 = 0;
                    su6 = 0;
                }

            } else if (s[i] == 'R')

            {
                if (su6 == 0) {

                    su6 = 6;
                    printf("6");
                    su1 = 0;
                    su2 = 0;
                    su3 = 0;
                    su4 = 0;
                    su5 = 0;
                }

            }
        }

        printf("\n");

        memset(s, 0, sizeof(s));
    }
    return 0;
}