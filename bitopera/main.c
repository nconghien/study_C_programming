#include<stdio.h>

int subtractUsingBitwise(int x, int y)
{

    while (y != 0)  // Iterate until carry becomes 0.
    {
        // step 1: get the borrow bit
        int borrow = (~x) & y;

        // step 2: get the difference using XOR
        x = x ^ y;

        // step 3: left shift borrow by 1
        y = borrow << 1;
    }
    return x;
}

int main() {
    int n, p, k=0;
    int a[100], b[100];
    scanf("%d", &n);
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (subtractUsingBitwise(p, a[i]) == a[j])
            {
                b[k] = a[i];
                k += 1;
                b[k] = a[j];
                k += 1;
            }

        }

    }
    for (int i = 0; i < k; i += 2)
    {
        printf("(%d,%d)\n", b[i], b[i + 1]);
    }
    return 0;
}