#include <stdio.h>

int main()
{
    int i, j;
    int ch = 65;
	
	printf("\n");
    printf("~~~ Pattern No: 1 ~~~");
	printf("\n\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf(" * ");
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 2 ~~~");
	printf("\n\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf(" %c ", ch);
        }
        printf("\n");
        ch++;
    }
	printf("\n");
    printf("~~~ Pattern No: 3 ~~~");
	printf("\n\n");
    for (i = 0; i < 5; i++) {
        ch = 69;
        for (j = 0; j < 5; j++) {
            printf(" %c ", ch);
            ch--;
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 4 ~~~");
	printf("\n\n");
    for (i = 0; i < 5; i++) {
        ch = 65;
        for (j = 0; j < 5; j++) {
            printf(" %c ", ch);
            ch++;
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 5 ~~~");
	printf("\n\n");
    ch = 69;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf(" %c ", ch);  
        }
        printf("\n");
        ch--;
    }
    printf("\n");
    printf("~~~ Pattern No: 6 ~~~");
	printf("\n\n");
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf(" %d ", i);
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 7 ~~~");
	printf("\n\n");
    for (i = 5; i > 0; i--) {
        for (j = 5; j > 0; j--) {
            printf(" %d ", j);
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 8 ~~~");
	printf("\n\n");
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            printf(" %d ", j);
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 9 ~~~");
	printf("\n\n");
    for (i = 5; i > 0; i--) {
        for (j = 5; j > 0; j--) {
            printf(" %d ", i);
        }
        printf("\n");
    }
	printf("\n");
    printf("~~~ Pattern No: 10 ~~~");
	printf("\n\n");
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            if (i == 1) 
                printf(" %d ", i);
            if(i==2)
                printf(" %c ", 64 + j);
            if(i==3)
                printf(" * ");
            if (i == 4)
                printf(" %c ", 64 + j);
            if (i == 5)
                printf(" 1 ");
            
        }
        printf("\n");
    }
    return 0;
}
