# include <stdio.h>
# define MAXN 20
int main(void)
{
    int i, flag, n, x;
    int a[MAXN];
    scanf("%d%d", &n, &x);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    flag = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("%d\n", i);
    }
    return 0;
}
