int mod = 0;

int qpow(int a,int n)
{
    int ret=1;
    while(n)
    {
        if(n&1)
        {
            ret=ret*a%mod;
        }
        a=a*a%mod;
        n>>=1;
    }
    return ret;
}

int inv(int num)
{
    return qpow(num,mod-2,mod);
}