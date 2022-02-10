int sum(int n){
    int ans = 0;
    ans = (n*(n+1))/2;
    return ans;
}

unsigned long long int product(int n){
    unsigned long long int ans = 1;
    const unsigned int m = 1000000007;
    for(int i = 1 ; i <=n ; i++)
    {
        ans = (ans * i)%m;
    }
    return ans;
}

long long int sumOrProduct(long long int n, long long int q)
{

        // Write your code here.
    if (q==1){
	return sum(n);
    }
    else if (q==2)
    {
        return product(n);
    }
}