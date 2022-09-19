#include <stdio.h>

/*Function prototypes*/
int add(int a,int b);
int divide(int a,int b);
int subtract(int a, int b);
int square(int a);

/*The main function*/
int main()
{
    char a;
    int x,y,ans;

    printf("Select your operation\n");
    printf("........................\n");
    printf("X or x, for square\n");
    printf("A or a, for sum\n");
    printf("S or s, for subtraction\n");
    printf("D of d, for division\n");
    printf("------------------------\n");
    printf("Waiting for the selection...");
    scanf("%c",&a);


    if (a =='a' || a == 'A')
    {
        int ans = add(x,y);
        printf("Adding the number to itself gives %i.",ans);
    }
    else if (a == 'd' || a == 'D')
    {
        printf("Key in the number to divide : ");
        scanf("%i",&x);
        printf("Key in the sdivider : ");
        scanf("%i",&y);
        int ans = divide(x,y);
        printf("Dividing the number %d by %i gives %i",x,y,ans);
    }
    else if (a == 'x' || a == 'X')
    {
        printf("Key in the number : ");
        scanf("%i",&x);
        int ans = square(x);
        printf("The square of %i is %i.",x,ans);
    }
    else if (a =='s' || a == 'S')
    {
        printf("Key in the first number : ");
        scanf("%i",&x);
        printf("Key in the second number : ");
        scanf("%i",&y);
        ans = subtract(x,y);
        printf("Subtracting %d from %d gives %i.",y,x,ans);
    }
    else
    {
        printf("Invalid entry\n");
    }
    return (0);
}

/*Gets the sum two numbers*/
int add(int a,int b)
{
    int ans = a + b;
    return ans;
}

/*Gets the division two numbers*/
int divide(int a,int b)
{
    int ans = a / b;
    return ans;
}

/*Gets the difference in two numbers*/
int subtract(int a, int b)
{
    int ans = a - b;
    return ans;
}

/*Gets the square of two numbers*/
int square(int a)
{
    int ans = a * a;
    return ans;
}

