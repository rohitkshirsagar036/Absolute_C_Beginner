#include <stdio.h>
int main()
{
    int i,j,k;
	
	printf("\n");
    printf("~~~ Pattern No: 1 ~~~");
	printf("\n\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 2 ~~~");
	printf("\n\n");
	for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d  ",j);
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 3 ~~~");
	printf("\n\n");
	for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d  ",i);
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 4 ~~~");
	printf("\n\n");
	for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(i+64));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 5 ~~~");
	printf("\n\n");
	for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(j+64));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 6 ~~~");
	printf("\n\n");
	for(i=6;i>1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 7 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d  ",i);
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 8 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(j+64));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 9 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(70-j));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 10 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(70-i));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 11 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d  ",j);
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 12 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c  ",(64+i));
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 13 ~~~");
	printf("\n\n");
	for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" %d  ",5-j);
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 14 ~~~");
	printf("\n\n");
	for(i=5,k=0;i>0;i--,k++)
    {
        for(j=0;j<i;j++)
        {
            if(j==k)
				printf(" \\ ");
			else if(k<j)
				printf(" # ");
			else
				printf(" $ ");
        }
        printf("\n");
    }
	
	printf("\n");
    printf("~~~ Pattern No: 15 ~~~");
	printf("\n\n");
	for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i+j)==4)
				printf(" / ");
			else if((i+j)>4)
				printf(" - ");
			else
				printf(" | ");
        }
        printf("\n");
    }
	return (0);
}