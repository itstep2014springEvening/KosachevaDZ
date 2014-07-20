int lcm (int a, int b)
{
    int lcm=a*b;
    while (a!=b)
    {
        (a>b?(a-=b):(b-=a));
    }
    return lcm/a;
}

int gcd (int a, int b)
{
    while (a>0 && b>0)
    {
        (a>b? (a%=b):(b%=a));
    }
    return a+b;
}
