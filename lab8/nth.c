#include <stdio.h>
void prime(int a);
int fibonacii(int n);
int main()
{
    int n;
    printf("Enter the n term: ");
    scanf("%d", &n);
    printf("The %d term of fibonacii series is %d And \n", n, fibonacii(n));
    prime(fibonacii(n));
    return 0;
}
int fibonacii(int n)
{
    if (n == 2 || n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacii(n - 1) + fibonacii(n - 2));
    }
}
void prime(int n)
{
    int a = n;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("The number %d is Prime", a);
    }
    else
    {
        printf("The number %d is not Prime", a);
    }
}