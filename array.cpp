#include <iostream>
#include <vector>
#include <conio.h>
void addarr(int** darr, int X, int Y)
{
    for (auto i = 0; i < X; ++i)
    {
        for (int j = 0; j < Y; ++j)
            darr[i][j] = 0;
    }
}

