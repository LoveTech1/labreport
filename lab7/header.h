
int fact(int factor)
{
    int i,factorial = 1,num;
    for(i=1;i<=factor;i++)
    {
        factorial *= i;
    }
    return factorial;
}
