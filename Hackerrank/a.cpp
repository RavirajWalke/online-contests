#include<stdio.h>
int size;
void combinations(int n, int c, int combs[])
{
    if(c == 0)
    {
        int i;
        for(i = 0; i < size; i++)
            printf("%d ", combs[i]);
        printf("\n");
        return;
    }
    if(n == 0)
        return;

    combs[c-1] = n;
    combinations(n-1, c-1, combs);
    combinations(n-1, c, combs);
}

int main()
{
    int n;
    int c;
    scanf("%d%d", &n, &c);
    int arr[c];
    size = c;
    combinations(n, c, arr);
}
