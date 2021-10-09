#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A1[n * m];
    int A2[n][m];
    int total = n * m;
    for (int i = 0; i < total; i++)
        scanf("%d", &A1[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            A2[i][j] = A1[(i * m) + j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", A2[i][j]);
    }
    return 0;
}
