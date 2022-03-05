#include <stdlib.h>

int get_ans(int n) {
    int len;
    char c;
    char* arr;
    int ans;
    int nbr;
    
    ans = 0;
    len = 0;
    nbr = n;
    while (nbr)
    {
        nbr /= 3;
        len += 1;
    }
    arr = (char *)malloc(sizeof(char) * len + 1);
    len = 0;
    while (n)
    {
        c = n % 3 + '0';
        arr[len] = c;
        n /= 3;
        len++;
    }
    arr[len] = 0;
    while (*arr)
    {
        ans = ans * 3 + *arr- '0';
        ++arr;
    }
    return (ans);
}
int solution(int n) {
    int res = 0;
    
    res = get_ans(n);
    return res;
}