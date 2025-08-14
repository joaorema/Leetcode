#include <stdio.h>
#include <unistd.h>


#define ROWS 6
#define COLS 5

int min(int a, int b, int c)
{
    int m = 0;

    if(a < b)
        m = a;
    else 
        m = b;
    if(c < m)
        m = c;
    return m;
}


int calc_square(char matrix[ROWS][COLS])
{
    int n_m[ROWS][COLS] = {0};
    int max_side = 0;

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLS; ++j)
        {
            if(matrix[i][j] == '1')
            {
                if(i == 0 || j == 0)
                    n_m[i][j] = 1;
                else
                    n_m[i][j] = 1 + min(n_m[i-1][j], n_m[i][j-1], n_m[j-1][i-1]);
                if(n_m[i][j] > max_side)
                    max_side = n_m[i][j];
            }
        }
    }
    int result = max_side * max_side;
    return result;
}

int main()
{
    char matrix[ROWS][COLS] = {
        {'0','1','1','0','1'},
        {'1','1','0','1','0'},
        {'0','1','1','1','0'},
        {'1','1','1','1','0'},
        {'1','1','1','1','1'},
        {'0','0','0','0','0'}
    };
    printf("%d\n", calc_square(matrix));
    return 0;
}