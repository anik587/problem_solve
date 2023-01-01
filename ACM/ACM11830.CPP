#include<stdio.h>

#include<string.h>


int main()

{
    int i;
    char a, b;
    while (1) {
        i = 2;
        scanf("%c", & a);
        if (a == 48)
            break;
        getchar();
        while (1) {
            scanf("%c", & b);
            if (b == '\n') break;

            if (a != b)
                if (b != '0' || i == 0) {
                    printf("%c", b);
                    i = 0;
                }

        }
        if (i == 2)
            printf("0");
        printf("\n");
    }

}