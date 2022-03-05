#include <stdio.h>
#include <stdlib.h>

long long ft_len(long long n, long long len)
{
	while (n / 10)
	{
		len++;
		n = n / 10;
	}
	return (len);   
}

void ft_put_num(int *ret, long long n)
{
	long long i = 0;

	while (n >= 1)
	{
		ret[i] = (int)(n % 10);
		n = n / 10;
		i++;
	}
}

int *solution(long long n) {
    long long    len;

    len = 0;
    len = ft_len(n, 1);
    int *ret = (int *)malloc(sizeof(int) * len);
    ft_put_num(ret, n);
    return (ret);
}