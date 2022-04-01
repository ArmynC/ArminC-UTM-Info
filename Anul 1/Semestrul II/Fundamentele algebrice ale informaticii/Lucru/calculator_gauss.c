/*
 Linear systems solver with step-by-step printing with Montante's method 
 (Bareiss algorithm) for m equations (rows) and n unknowns (columns).

 Copyright (C) Andrei Murariu

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.
 
 via: https://github.com/ArmynC/ArminC-UTM-Info
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

int greek = 0;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void def_RC(int *rows, int *cols)
{

    printf(" Enter number of rows: ");
    scanf("%d", rows);
    printf(" Enter number of columns: ");
    scanf("%d", cols);
}
double **readMatrix(int lin, int col, int ans)
{
    int x;
    int i, j;
    double **mat = (double **)calloc(lin, sizeof(double *));
    for (x = 0; x < lin; x++)
    {
        mat[x] = (double *)calloc((col + 1), sizeof(double));
    }

    for (i = 0; i < 3; i++)
    {
        printf(". ");
        sleep(1);
    }
    system("cls");

    if (ans == 1)
    {
        for (i = 0; i < col; i++)
        {
            printf(" Enter matrix elements | Vector %d:\n", i + 1);
            for (j = 0; j < lin; j++)
            {
                printf("    A[%d][%d] = ", j, i);
                scanf("%lf", &mat[j][i]);
            }
            system("cls");
        }

        i = col;
        printf(" Enter matrix elements | Vector of known terms (The values at the right of the 'equal' sign): \n");
        for (j = 0; j < lin; j++)
        {
            printf("%s", KRED);
            printf("    A[%d][%d] = ", j, i);
            printf("%s", KNRM);
            scanf("%lf", &mat[j][i]);
        }
        system("cls");
    }
    if (ans == 3)
    {
        for (i = 0; i < lin; i++)
        {
            printf(" Enter matrix elements | ROW %d: \n", i + 1);
            for (j = 0; j < (col + 1) / 2; j++)
            {
                printf("    A[%d][%d] = ", j, i);
                scanf("%lf", &mat[j][i]);
            }
            for (j = (col + 1) / 2; j < col + 1; j++)
            {
                mat[i][j] = 0;
            }
            system("cls");
        }
        int k = 0;
        for (i = 0; i < lin; i++)
        {
            mat[i][((col + 1) / 2) + k] = 1;
            k = k + 1;
        }
    }
    if (ans == 4)
    {
        for (i = 0; i < (col + 1) / 2; i++)
        {
            printf("----------You are inserting the vectors of the first Base (B1)----------\n");
            printf(" Enter matrix elements | Vector %d: \n", i + 1);
            for (j = 0; j < lin; j++)
            {
                printf("    A[%d][%d] = ", j, i);
                scanf("%lf", &mat[j][i]);
            }
            system("cls");
        }
        for (i = (col + 1) / 2; i < col + 1; i++)
        {
            printf("----------You are inserting the vectors of the second Base (B2)----------\n");
            printf(" Enter matrix elements | Vector %d: \n", i + 1);
            for (j = 0; j < lin; j++)
            {
                printf("    A[%d][%d] = ", j, i);
                scanf("%lf", &mat[j][i]);
            }
            system("cls");
        }
    }

    return mat;
}
double **readMatrix2(int lin, int col)
{
    int x;
    int i, j;
    double **mat = (double **)calloc(lin, sizeof(double *));
    for (x = 0; x < lin; x++)
    {
        mat[x] = (double *)calloc((col), sizeof(double));
    }
    for (i = 0; i < 3; i++)
    {
        printf(". ");
        sleep(1);
    }
    system("cls");
    for (i = 0; i < lin; i++)
    {
        printf(" Enter matrix elements | ROW %d: \n", i + 1);
        for (j = 0; j < col; j++)
        {
            printf("    A[%d][%d] = ", i, j);
            scanf("%lf", &mat[i][j]);
        }
        system("cls");
    }

    return mat;
}
void printMatrix(double **A, int rows, int cols, int ans)
{

    int i, j;
    // Print elements in the matrix
    if (ans == 1)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j == cols)
                {
                    printf("| ");
                }
                if (j == cols)
                {
                    printf("%s", KRED);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    if (ans == 3)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j == (cols + 1) / 2)
                {
                    printf("| ");
                }
                if (j >= (cols + 1) / 2)
                {
                    printf("%s", KRED);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    if (ans == 4)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j == (cols + 1) / 2)
                {
                    printf("| ");
                }
                if (j >= (cols + 1) / 2)
                {
                    printf("%s", KRED);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%s", KYEL);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
            }
            printf("\n");
        }
    }
}
void printMatrix7(double **A, int rows, int cols, int end)
{

    int i, j;
    // Print elements in the matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j && end == 1 && A[i][j] != 0)
            {
                printf("%s", KYEL);
                printf("%8.2f ", *(*(A + i) + j));
                printf("%s", KNRM);
            }
            else
            {
                printf("%8.2f ", *(*(A + i) + j));
            }
        }
        printf("\n");
    }
}
void printMatrix2(double **A, int rows, int cols, int line, int ans)
{

    int i, j;
    // Print elements in the matrix
    if (ans == 2 || ans == 5)
    {
        for (i = 0; i < rows; i++)
        {
            if (i == line)
            {
                printf("%s", KCYN);
                for (j = 0; j < cols; j++)
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else
            {
                for (j = 0; j < cols; j++)
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }

            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            if (i == line)
            {
                printf("%s", KCYN);
                for (j = 0; j < cols + 1; j++)
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else
            {
                for (j = 0; j < cols + 1; j++)
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }

            printf("\n");
        }
    }
    // printf("\n");
}
void printMatrix3(double **A, int rows, int cols, int line, int line2, int ans)
{

    int i, j;
    // Print elements in the matrix
    if (ans == 2 || ans == 5)
    {
        for (i = 0; i < rows; i++)
        {
            if (i == line)
            {
                printf("%s", KYEL);
                for (j = 0; j < cols; j++)
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else if (i == line2)
            {
                printf("%s", KGRN);
                for (j = 0; j < cols; j++)
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else
            {
                for (j = 0; j < cols; j++)
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }

            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            if (i == line)
            {
                printf("%s", KYEL);
                for (j = 0; j < cols + 1; j++)
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else if (i == line2)
            {
                printf("%s", KGRN);
                for (j = 0; j < cols + 1; j++)
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
                printf("%s", KNRM);
            }
            else
            {
                for (j = 0; j < cols + 1; j++)
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans == 3)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }

            printf("\n");
        }
    }
    // printf("\n");
}
void printMatrix6(double **A, int rows, int cols, int line, int line2, int ans)
{

    int i, j;
    if (ans == 2 || ans == 5)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (j == line)
                {
                    printf("%s", KYEL);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else if (j == line2)
                {
                    printf("%s", KGRN);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j == line)
                {
                    printf("%s", KYEL);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else if (j == line2)
                {
                    printf("%s", KGRN);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
}
void printMatrix4(double **A, int rows, int cols, int column, int ans)
{

    int i, j;
    // Print elements in the matrix
    if (ans == 2 || ans == 5)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (j == column)
                {
                    printf("%s", KMAG);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j == column)
                {
                    printf("%s", KMAG);
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    // printf("\n");
}
void printMatrix5(double **A, int rows, int cols, int column, int line, int ans)
{

    int i, j;
    // Print elements in the matrix
    if (ans == 2 || ans == 5)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (j != column && i != line)
                {
                    printf("%s", KBLU);
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols + 1; j++)
            {
                if (j != column && i != line)
                {
                    printf("%s", KBLU);
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                    printf("%s", KNRM);
                }
                else
                {
                    if (j == cols && ans == 1)
                    {
                        printf("| ");
                    }
                    if (j == (cols + 1) / 2 && ans != 1)
                    {
                        printf("| ");
                    }
                    printf("%8.2f ", *(*(A + i) + j));
                }
            }
            printf("\n");
        }
    }
    // printf("\n");
}
void printMatrix8(double **A, int rows, int cols)
{

    int i, j;
    // Print elements in the matrix
    for (i = 0; i < rows; i++)
    {
        for (j = (cols + 1) / 2; j < cols + 1; j++)
        {
            printf("%s", KGRN);
            printf("%8.2f ", *(*(A + i) + j));
            printf("%s", KNRM);
        }
        printf("\n");
    }
}
void gcd_function(double **A, int rows, int cols, int cond1, int ans)
{

    int i, j;
    int gcd1;

    for (i = 0; i < rows; i++)
    {
        gcd1 = (int)A[i][0];
        for (j = 0; j < cols + 1; j++)
        {
            gcd1 = gcd((int)A[i][j], gcd1);
        }
        if (gcd1 != 0 && gcd1 != 1)
        {
            for (j = 0; j < cols + 1; j++)
            {
                A[i][j] = A[i][j] / gcd1;
            }
            printf("\n");
            printf("I'm dividing the row nr. %d by %d.\n", i + 1, gcd1);
            printMatrix2(A, rows, cols, i, ans);
        }
    }
}
void pivot_checker(double **A, int rows, int cols, int i, int count1, int ans, int *num_cols)
{
    int j, k, l, y_sr = 0;
    double swap;

    if (A[i][i] == 0.0)
    {
        for (l = i + 1; l < rows; l++)
        {
            if ((A[l][i] != 0) && count1 == 0)
            {
                printf("\n");
                printf("I swap the (Green) row nr. %d with the (Yellow) row nr. %d.\n", i + 1, l + 1);
                if (A[l][l] != 0)
                {
                    for (k = 0; k < cols + 1; k++)
                    {
                        swap = A[i][k];
                        A[i][k] = A[l][k];
                        A[l][k] = swap;
                        y_sr = 1;
                    }
                }
                if (y_sr == 1)
                {
                    count1 = 1;
                    printMatrix3(A, rows, cols, i, l, ans);
                }
            }
        }
    }
    count1 = 0;
    if (y_sr == 0 && A[i][i] == 0.0)
    {
        for (j = i + 1; j < cols; j++)
        {
            if (A[i][j] != 0 && count1 == 0)
            {
                printf("\n");
                printf("I swap the (Green) column nr. %d with the (Yellow) column nr. %d.\n", i + 1, j + 1);
                for (k = 0; k < rows; k++)
                {
                    swap = A[k][j];
                    A[k][j] = A[k][i];
                    A[k][i] = swap;
                }
                swap = num_cols[i];
                num_cols[i] = num_cols[j];
                num_cols[j] = (int)swap;
                count1 = 1;
                printMatrix6(A, rows, cols, i, j, ans);
            }
        }
    }
}
void zero_replacement(double **A, int rows, int cols, int i, int count2, int cond1, int ans)
{
    if (((rows < cols && i < rows) || (rows > cols && i < cols)) || rows == cols)
    {
        int j;
        printf("\n");
        printf("I'm replacing the cells of the column nr. %d with zeroes [Except the PIVOT]\n", i + 1);
        for (j = 0; j < rows; j++)
        {
            if (cond1 == 0)
            {
                if (j == rows)
                {
                    count2 = 1;
                }
                if (i != j && count2 == 0)
                {
                    A[j][i] = 0;
                }
            }
        }
        printMatrix4(A, rows, cols, i, ans);
    }
}
void rectangle_clc(double **A, int rows, int cols, int cond1, int i, int ans)
{
    int j, k, answer, nr1 = 0, imp1 = 0;
    double rez;
    if (A[i][i] != 0 && (((rows < cols && i < rows) || (rows > cols && i < cols)) || rows == cols))
    {
        printf("\n");
        printf("I'm calculating the rest of the matrix's cells with the rectangular method!\n", j);
        if (i > 0 && cond1 == 0)
        {
            for (j = i; j > 0; j--)
            {
                for (k = 0; k < rows; k++)
                {
                    if (k != i)
                    {
                        rez = (A[i][i] * A[k][i - j]) - (A[i][i - j] * A[k][i]);
                        A[k][i - j] = rez;
                    }
                }
            }
        }
        for (j = i; j < cols + 1; j++)
        {
            for (k = 0; k < rows; k++)
            {
                if (k != i && cond1 == 0)
                {
                    rez = (A[i][i] * A[k][j + 1]) - (A[i][j + 1] * A[k][i]);
                    A[k][j + 1] = rez;
                }
            }
        }
        printMatrix5(A, rows, cols, i, i, ans);
    }
}
int rank_calculator(double **A, int rows, int cols)
{
    int i, j, rank = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols + 1; j++)
        {
            if (A[i][j] != 0 && i == j)
            {
                rank = rank + 1;
            }
        }
    }
    return rank;
}
int rank_calculator2(double **A, int rows, int cols)
{
    int i, j, rank = 0;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols + 1; j++)
        {
            if (A[i][j] != 0 && i == j)
            {
                rank = rank + 1;
            }
            if (i != j)
            {
                A[i][j] = 0;
            }
        }
    }
    return rank;
}
void destroyMatrix(double **A, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        free(A[i]);
    }
    free(A);
}
void final_division(double **A, int rows, int cols, int ans)
{
    int i, j;
    if (ans == 3)
    {
        for (i = 0; i < rows; i++)
        {
            if (A[i][i] != 0.0)
            {
                for (j = (cols + 1) / 2; j < cols + 1; j++)
                {
                    A[i][j] = A[i][j] / A[i][i];
                }
                A[i][i] = A[i][i] / A[i][i];
            }
        }
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            if (A[i][i] != 0.0)
            {
                for (j = i + 1; j < cols + 1; j++)
                {
                    A[i][j] = A[i][j] / A[i][i];
                }
                A[i][i] = A[i][i] / A[i][i];
            }
        }
    }
}
void resultPrint(double **A, double *x, int rows, int cols, int rank, int *num_cols)
{
    char variables[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', '/0'};
    int i, j;

    if (rank == rows)
    {
        printf("The solution vector of the given matrix is: ");
        printf("%s", KCYN);
        printf("[ ");
        for (i = 0; i < rows - 1; i++)
        {
            printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
        }
        printf("x(%d): %4.2f ]", num_cols[rows - 1], *(x + (rows - 1)));
        printf("%s", KGRN);
        printf("\n--------------------------------------");
        printf("\n#### <THE MATRIX IS DETERMINATE!> ####");
        printf("\n--------------------------------------");
        printf("%s\n", KNRM);
    }
    else
    {
        int inc = 0;
        for (i = rank; i < rows; i++)
        {
            if (A[i][i] == 0 && A[i][cols] != 0)
            {
                printf("%s", KRED);
                printf("---------------------------------------");
                printf("\n#### <THE MATRIX IS INCOMPATIBLE!> ####", cols - rank);
                printf("\n---------------------------------------");
                printf("%s\n", KNRM);
                inc = 1;
                break;
            }
        }
        if (inc == 0)
        {
            printf("The solution vector of the given matrix is: ");
            printf("%s", KCYN);
            printf("[ ");
            int found = 0;
            double vars[cols - rank];
            int u = 0;
            for (i = 0; i < rank - 1; i++)
            {
                for (j = i + 1; j < cols; j++)
                {
                    if (A[i][j] != 0)
                    {
                        vars[u] = A[i][j];
                        u++;
                        found = 1;
                    }
                }
                if (found == 0)
                    printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
                if (found == 1)
                {
                    if (*(x + i) != 0)
                    {
                        printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("+ %.2f%c ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                printf("- %.2f%c ", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        printf("| ");
                    }
                    else
                    {
                        printf("x(%d): ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank - 1; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("%.2f%c + ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                if (j == 0)
                                {
                                    printf("-");
                                }
                                printf("%.2f%c -", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        j = cols - rank - 1;
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                        printf("| ");
                    }
                }
                greek = 0;
                u = 0;
                found = 0;
            }
            i = rank - 1;
            for (j = i + 1; j < cols; j++)
            {

                if (A[i][j] != 0)
                {
                    vars[u] = A[i][j];
                    u++;
                    found = 1;
                }
            }
            if (found == 0)
                printf("x(%d): %4.2f ", num_cols[i], *(x + i));
            if (found == 1)
            {
                if (*(x + i) != 0)
                {
                    printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("+ %.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            printf("- %.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                }
                else
                {
                    printf("x(%d): ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank - 1; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c + ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c -", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    j = cols - rank - 1;
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                }
            }
            greek = 0;
            printf("]\n");
            printf("%s", KNRM);
            printf("The vector of variables in x is: ");
            printf("%s", KGRN);
            printf("[");
            for (i = rank; i < cols - 1; i++)
            {
                printf(" x(%d): %c | ", num_cols[i], variables[greek]);
                greek++;
            }
            printf("x(%d): %c", num_cols[i], variables[greek]);
            printf(" ]");

            printf("%s", KYEL);
            printf("\n-------------------------------------------------");
            printf("\n#### <THE MATRIX IS LEVEL %d INDETERMINATE!> ####", cols - rank);
            printf("\n-------------------------------------------------");
            printf("%s\n", KNRM);
        }
    }
}
void resultPrint2(double **A, double *x, int rows, int cols, int rank, int *num_cols)
{
    char variables[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', '/0'};
    int i, j;

    if (rank == rows)
    {
        printf("The solution vector of the given matrix is: ");
        printf("%s", KCYN);
        printf("[ ");
        int found = 0;
        double vars[cols - rank];
        int u = 0;
        for (i = 0; i < rank - 1; i++)
        {
            for (j = i + 1; j < cols; j++)
            {
                if (A[i][j] != 0)
                {
                    vars[u] = A[i][j];
                    u++;
                    found = 1;
                }
            }
            if (found == 0)
                printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
            if (found == 1)
            {
                if (*(x + i) != 0)
                {
                    printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("+ %.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            printf("- %.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    printf("| ");
                }
                else
                {
                    printf("x(%d): ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank - 1; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c + ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c -", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    j = cols - rank - 1;
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                    printf("| ");
                }
            }
            greek = 0;
            u = 0;
            found = 0;
        }
        i = rank - 1;
        for (j = i + 1; j < cols; j++)
        {
            if (A[i][j] != 0)
            {
                vars[u] = A[i][j];
                u++;
                found = 1;
            }
        }
        if (found == 0)
            printf("x(%d): %4.2f ", num_cols[i], *(x + i));
        if (found == 1)
        {
            if (*(x + i) != 0)
            {
                printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                for (j = 0; j < cols - rank; j++)
                {
                    if (-vars[j] > 0)
                    {
                        printf("+ %.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        printf("- %.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                }
            }
            else
            {
                printf("x(%d): ", num_cols[i], *(x + i));
                for (j = 0; j < cols - rank - 1; j++)
                {
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c + ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c -", vars[j], variables[greek]);
                    }
                    greek++;
                }
                j = cols - rank - 1;
                if (-vars[j] > 0)
                {
                    printf("%.2f%c ", -vars[j], variables[greek]);
                }
                else
                {
                    if (j == 0)
                    {
                        printf("-");
                    }
                    printf("%.2f%c ", vars[j], variables[greek]);
                }
                greek++;
            }
        }
        greek = 0;
        printf("]\n");
        printf("%s", KNRM);
        printf("The vector of variables in x is: ");
        printf("%s", KGRN);
        printf("[");
        for (i = rank; i < cols - 1; i++)
        {
            printf(" x(%d): %c | ", num_cols[i], variables[greek]);
            greek++;
        }
        printf("x(%d): %c", num_cols[i], variables[greek]);
        printf(" ]");

        printf("%s", KYEL);
        printf("\n-------------------------------------------------");
        printf("\n#### <THE MATRIX IS LEVEL %d INDETERMINATE!> ####", cols - rank);
        printf("\n-------------------------------------------------");
        printf("%s\n", KNRM);
    }
    else
    {
        int inc = 0;
        for (i = rank; i < rows; i++)
        {
            if (A[i][i] == 0 && A[i][cols] != 0)
            {
                printf("%s", KRED);
                printf("---------------------------------------");
                printf("\n#### <THE MATRIX IS INCOMPATIBLE!> ####", cols - rank);
                printf("\n---------------------------------------");
                printf("%s\n", KNRM);
                inc = 1;
                break;
            }
        }
        if (inc == 0)
        {
            printf("The solution vector of the given matrix is: ");
            printf("%s", KCYN);
            printf("[ ");
            int found = 0;
            double vars[cols - rank];
            int u = 0;
            for (i = 0; i < rank - 1; i++)
            {
                for (j = i + 1; j < cols; j++)
                {
                    if (A[i][j] != 0)
                    {
                        vars[u] = A[i][j];
                        u++;
                        found = 1;
                    }
                }
                if (found == 0)
                    printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
                if (found == 1)
                {
                    if (*(x + i) != 0)
                    {
                        printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("+ %.2f%c ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                printf("- %.2f%c ", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        printf("| ");
                    }
                    else
                    {
                        printf("x(%d): ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank - 1; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("%.2f%c + ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                if (j == 0)
                                {
                                    printf("-");
                                }
                                printf("%.2f%c -", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        j = cols - rank - 1;
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                        printf("| ");
                    }
                }
                greek = 0;
                u = 0;
                found = 0;
            }
            i = rank - 1;
            for (j = i + 1; j < cols; j++)
            {

                if (A[i][j] != 0)
                {
                    vars[u] = A[i][j];
                    u++;
                    found = 1;
                }
            }
            if (found == 0)
                printf("x(%d): %4.2f ", num_cols[i], *(x + i));
            if (found == 1)
            {
                if (*(x + i) != 0)
                {
                    printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("+ %.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            printf("- %.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                }
                else
                {
                    printf("x(%d): ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank - 1; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c + ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c -", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    j = cols - rank - 1;
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                }
            }
            greek = 0;
            printf("]\n");
            printf("%s", KNRM);
            printf("The vector of variables in x is: ");
            printf("%s", KGRN);
            printf("[");
            for (i = rank; i < cols - 1; i++)
            {
                printf(" x(%d): %c | ", num_cols[i], variables[greek]);
                greek++;
            }
            printf("x(%d): %c", num_cols[i], variables[greek]);
            printf(" ]");

            printf("%s", KYEL);
            printf("\n-------------------------------------------------");
            printf("\n#### <THE MATRIX IS LEVEL %d INDETERMINATE!> ####", cols - rank);
            printf("\n-------------------------------------------------");
            printf("%s\n", KNRM);
        }
    }
}
void resultPrint3(double **A, double *x, int rows, int cols, int rank, int *num_cols)
{
    char variables[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', '/0'};
    int i, j;

    if (rank == cols)
    {
        int inc = 0;
        for (i = rank; i < rows; i++)
        {
            if (A[i][cols] != 0)
            {
                printf("%s", KRED);
                printf("---------------------------------------");
                printf("\n#### <THE MATRIX IS INCOMPATIBLE!> ####", cols - rank);
                printf("\n---------------------------------------");
                printf("%s\n", KNRM);
                inc = 1;
                break;
            }
        }
        if (inc == 0)
        {
            printf("The solution vector of the given matrix is: ");
            printf("%s", KCYN);
            printf("[ ");
            int found = 0;
            double vars[cols - rank];
            int u = 0;
            for (i = 0; i < rank - 1; i++)
            {
                for (j = i + 1; j < cols; j++)
                {
                    if (A[i][j] != 0)
                    {
                        vars[u] = A[i][j];
                        u++;
                        found = 1;
                    }
                }
                if (found == 0)
                    printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
                if (found == 1)
                {
                    if (*(x + i) != 0)
                    {
                        printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("+ %.2f%c ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                printf("- %.2f%c ", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        printf("| ");
                    }
                    else
                    {
                        printf("x(%d): ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank - 1; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("%.2f%c + ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                if (j == 0)
                                {
                                    printf("-");
                                }
                                printf("%.2f%c -", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        j = cols - rank - 1;
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                        printf("| ");
                    }
                }
                greek = 0;
                u = 0;
                found = 0;
            }
            i = rank - 1;
            for (j = i + 1; j < cols; j++)
            {
                if (A[i][j] != 0)
                {
                    vars[u] = A[i][j];
                    u++;
                    found = 1;
                }
            }
            if (found == 0)
                printf("x(%d): %4.2f ", num_cols[i], *(x + i));
            if (found == 1)
            {
                if (*(x + i) != 0)
                {
                    printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("+ %.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            printf("- %.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                }
                else
                {
                    printf("x(%d): ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank - 1; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c + ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c -", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    j = cols - rank - 1;
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                }
            }
            greek = 0;
            printf("]");
            printf("%s", KNRM);
            printf("%s", KGRN);
            printf("\n-------------------------------------------------");
            printf("\n#### <THE MATRIX IS DETERMINATE!> ####", cols - rank);
            printf("\n-------------------------------------------------");
            printf("%s\n", KNRM);
        }
    }
    else
    {
        int inc = 0;
        for (i = rank; i < rows; i++)
        {
            if (A[i][cols] != 0)
            {
                printf("%s", KRED);
                printf("---------------------------------------");
                printf("\n#### <THE MATRIX IS INCOMPATIBLE!> ####", cols - rank);
                printf("\n---------------------------------------");
                printf("%s\n", KNRM);
                inc = 1;
                break;
            }
        }
        if (inc == 0)
        {
            printf("The solution vector of the givn matrix is: ");
            printf("%s", KCYN);
            printf("[ ");
            int found = 0;
            double vars[cols - rank];
            int u = 0;
            for (i = 0; i < rank; i++)
            {
                for (j = rank - 1; j < cols; j++)
                {
                    if (A[i][j] != 0)
                    {
                        vars[u] = A[i][j];
                        u++;
                        found = 1;
                    }
                }
                if (found == 0)
                    printf("x(%d): %4.2f | ", num_cols[i], *(x + i));
                if (found == 1)
                {
                    if (*(x + i) != 0)
                    {
                        printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("+ %.2f%c ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                printf("- %.2f%c ", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        printf("| ");
                    }
                    else
                    {
                        printf("x(%d): ", num_cols[i], *(x + i));
                        for (j = 0; j < cols - rank; j++)
                        {
                            if (-vars[j] > 0)
                            {
                                printf("%.2f%c + ", -vars[j], variables[greek]);
                            }
                            else
                            {
                                if (j == 0)
                                {
                                    printf("-");
                                }
                                printf("%.2f%c -", vars[j], variables[greek]);
                            }
                            greek++;
                        }
                        j = cols - rank;
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                        printf("| ");
                    }
                }
                greek = 0;
                u = 0;
                found = 0;
            }
            i = rank - 1;
            for (j = i + 1; j < cols; j++)
            {

                if (A[i][j] != 0)
                {
                    vars[u] = A[i][j];
                    u++;
                    found = 1;
                }
            }
            if (found == 0)
                printf("x(%d): %4.2f ", num_cols[i], *(x + i));
            if (found == 1)
            {
                if (*(x + i) != 0)
                {
                    printf("x(%d): %4.2f ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("+ %.2f%c ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            printf("- %.2f%c ", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                }
                else
                {
                    printf("x(%d): ", num_cols[i], *(x + i));
                    for (j = 0; j < cols - rank - 1; j++)
                    {
                        if (-vars[j] > 0)
                        {
                            printf("%.2f%c + ", -vars[j], variables[greek]);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                printf("-");
                            }
                            printf("%.2f%c -", vars[j], variables[greek]);
                        }
                        greek++;
                    }
                    j = cols - rank - 1;
                    if (-vars[j] > 0)
                    {
                        printf("%.2f%c ", -vars[j], variables[greek]);
                    }
                    else
                    {
                        if (j == 0)
                        {
                            printf("-");
                        }
                        printf("%.2f%c ", vars[j], variables[greek]);
                    }
                    greek++;
                }
            }
            greek = 0;
            printf("]\n");
            printf("%s", KNRM);
            printf("The vector of variables in x is: ");
            printf("%s", KGRN);
            printf("[");
            for (i = rank; i < cols - 1; i++)
            {
                printf(" x(%d): %c | ", num_cols[i], variables[greek]);
                greek++;
            }
            printf("x(%d): %c", num_cols[i], variables[greek]);
            printf(" ]");

            printf("%s", KYEL);
            printf("\n-------------------------------------------------");
            printf("\n#### <THE MATRIX IS LEVEL %d INDETERMINATE!> ####", cols - rank);
            printf("\n-------------------------------------------------");
            printf("%s\n", KNRM);
        }
    }
}
void algorithm(double **A, int rows, int cols, int ans, int *num_cols)
{
    int j, cond1 = 0, count1 = 0, count2 = 0, i;
    for (i = 0; i < rows; i++)
    {
        pivot_checker(A, rows, cols, i, count1, ans, num_cols);
        gcd_function(A, rows, cols, cond1, ans);
        rectangle_clc(A, rows, cols, cond1, i, ans);
        gcd_function(A, rows, cols, cond1, ans);
        if (A[i][i] != 0)
        {
            zero_replacement(A, rows, cols, i, count2, cond1, ans);
        }
    }
    int no = 0;
    for (i = 0; i < rows; i++)
    {
        if (A[i][i] != 0)
        {
            pivot_checker(A, rows, cols, i, count1, ans, num_cols);
        }
        else
        {
            no = 1;
        }
    }
    gcd_function(A, rows, cols, cond1, ans);
    if (no == 0)
    {
        final_division(A, rows, cols, ans);
    }
    /*-------------------*/
}
void algorithm2(double **A, int rows, int cols, int ans, int *num_cols)
{
    int j, cond1 = 0, count1 = 0, count2 = 0, i;
    for (i = 0; i < rows; i++)
    {
        pivot_checker(A, rows, cols, i, count1, ans, num_cols);
        gcd_function(A, rows, cols, cond1, ans);
        rectangle_clc(A, rows, cols, cond1, i, ans);
        gcd_function(A, rows, cols, cond1, ans);
        if (A[i][i] != 0)
        {
            zero_replacement(A, rows, cols, i, count2, cond1, ans);
        }
    }
    for (i = 0; i < rows; i++)
    {
        if (A[i][i] != 0)
        {
            pivot_checker(A, rows, cols, i, count1, ans, num_cols);
        }
    }
    gcd_function(A, rows, cols, cond1, ans);
    /*-------------------*/
}
double **copySwapMatrix(double **A, int rows, int cols)
{
    int i, j, x;
    double **B = (double **)calloc(rows, sizeof(double *));
    for (x = 0; x < rows; x++)
    {
        B[x] = (double *)calloc((cols + 1), sizeof(double));
    }
    int k;
    for (i = 0; i < rows; i++)
    {
        k = 0;
        for (j = (cols + 1) / 2; j < cols + 1; j++)
        {
            B[i][k] = A[i][j];
            k++;
        }
    }
    for (i = 0; i < rows; i++)
    {
        k = (cols + 1) / 2;
        for (j = 0; j < (cols + 1) / 2; j++)
        {
            B[i][k] = A[i][j];
            k++;
        }
    }

    return B;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
void micro1(int ans)
{
    int rows, cols;
    /*Defining Rows and Columns*/
    def_RC(&rows, &cols);
    /*-------------------------*/
    /*Inserting the values into the Matrix*/
    double **A = readMatrix(rows, cols, ans);
    /*------------------------------------*/

    /*Printing the matrix*/
    printf("The matrix's elements are: \n");
    printMatrix(A, rows, cols, ans);
    /*-------------------*/

    double *x;
    x = (double *)malloc((cols + 1) * sizeof(double));

    int *num_cols;
    num_cols = (int *)malloc((cols) * sizeof(int));

    int i, j;

    for (i = 0; i < cols + 1; i++)
    {
        num_cols[i] = i + 1;
    }

    printf("################################################");
    int rank;

    /*Central part of the program*/
    gcd_function(A, rows, cols, 0, ans);
    if (rows == cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator(A, rows, cols);
        /*---------------*/

        /*Swapping the resolution to the vector x*/
        for (i = 0; i < rows; i++)
        {
            for (j = i + 1; j < cols + 1; j++)
            {
                if (A[i][i] != 0)
                {
                    A[i][j] = A[i][j] / A[i][i];
                }
            }
            if (A[i][i] != 0)
                A[i][i] = A[i][i] / A[i][i];
            x[i] = A[i][cols];
        }
        /*----------------------------------------*/
    }
    if (rows > cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator(A, cols, cols);
        /*---------------*/

        /*Swapping the resolution to the vector x*/
        for (i = 0; i < rows; i++)
        {
            for (j = i + 1; j < cols + 1; j++)
            {
                if (A[i][i] != 0)
                {
                    A[i][j] = A[i][j] / A[i][i];
                }
            }
            if (A[i][i] != 0)
                A[i][i] = A[i][i] / A[i][i];
            x[i] = A[i][cols];
        }
        /*----------------------------------------*/
    }
    if (rows < cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator(A, rows, cols);
        /*---------------*/

        /*Swapping the resolution to the vector x*/
        for (i = 0; i < rows; i++)
        {
            for (j = i + 1; j < cols + 1; j++)
            {
                if (A[i][i] != 0)
                {
                    A[i][j] = A[i][j] / A[i][i];
                }
            }
            if (A[i][i] != 0)
                A[i][i] = A[i][i] / A[i][i];
            x[i] = A[i][cols];
        }
        /*----------------------------------------*/
    }

    /*Printing the matrix result of the program*/
    printf("################################################\n");
    printMatrix(A, rows, cols, ans);
    printf("------------------------------------------------\n");
    /*-----------------------------------------*/

    /*Printing the rank of the matrix*/
    printf("The rank of the given matrix is: ");
    printf("%s", KYEL);
    printf("%d", rank);
    printf("%s\n", KNRM);
    /*-------------------------------*/

    /*Printing solution vector elements*/
    if (cols == rows)
    {
        resultPrint(A, x, rows, cols, rank, num_cols);
    }
    else if (rows < cols)
    {
        resultPrint2(A, x, rows, cols, rank, num_cols);
    }
    else
    {
        resultPrint3(A, x, rows, cols, rank, num_cols);
    }
    /*-------------------------------------------*/

    /*Dellocating memory of matrix*/
    destroyMatrix(A, rows, cols);
    /*----------------------------*/
}

void micro2(int ans)
{
    int rows, cols;
    /*Defining Rows and Columns*/
    system("cls");
    def_RC(&rows, &cols);
    /*-------------------------*/
    /*Inserting the values into the Matrix*/
    double **A = readMatrix2(rows, cols);
    /*------------------------------------*/

    /*Printing the matrix*/
    printf("The matrix's elements are: \n");
    printMatrix7(A, rows, cols, 0);
    /*-------------------*/

    double *x;
    x = (double *)malloc((cols + 1) * sizeof(double));

    int *num_cols;
    num_cols = (int *)malloc(cols * sizeof(int));

    printf("################################################\n");
    int i, j, cond1 = 0, rank;

    /*Central part of the program*/
    gcd_function(A, rows, cols, cond1, ans);
    if (rows == cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator2(A, rows, cols);
        /*---------------*/
    }
    if (rows > cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator2(A, cols, cols);
        /*---------------*/
    }
    if (rows < cols)
    {
        algorithm(A, rows, cols, ans, num_cols);
        /*Rank Calculator*/
        rank = rank_calculator2(A, rows, cols);
        /*---------------*/
    }

    /*Printing the matrix result of the program*/
    printf("################################################\n");
    printMatrix7(A, rows, cols, 1);
    if (rows == cols)
    {
        printf("------------------------------------------------\n");
        double determinant = 1;
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (i == j)
                {
                    determinant = determinant * A[i][j];
                }
            }
        }
        if (determinant != 0)
        {
            printf("The determinant is non-zero: ");
            printf("%s", KGRN);
            printf("%.2f ", determinant);
            printf("%s\n", KNRM);
        }
        else
        {
            printf("%s", KRED);
            printf("The determinant is equal to 0!");
            printf("%s\n", KNRM);
        }
    }
    /*-----------------------------------------*/

    printf("------------------------------------------------\n");
    /*Printing the rank of the matrix*/
    printf("The rank of the given matrix is: ");
    printf("%s", KYEL);
    printf("%d", rank);
    printf("%s\n", KNRM);
    /*-------------------------------*/

    /*Dellocating memory of matrix*/
    destroyMatrix(A, rows, cols);
    /*----------------------------*/
}

void micro3(int ans)
{
    int rows, cols;
    /*Defining Rows and Columns*/
    printf("Insert the dimension of your 'nxn' matrix: ");
    scanf("%d", &rows);
    cols = rows;
    /*-------------------------*/
    cols = cols + (rows - 1);
    /*Inserting the values into the Matrix*/
    double **A = readMatrix(rows, cols, ans);
    /*------------------------------------*/

    int *num_cols;
    num_cols = (int *)malloc(cols * sizeof(int));

    /*Printing the matrix*/
    printf("The matrix's elements are: \n");
    printMatrix(A, rows, cols, ans);
    /*-------------------*/

    printf("################################################\n");
    int i, j, cond1 = 0, rank;

    /*Central part of the program*/
    gcd_function(A, rows, cols, cond1, ans);
    algorithm(A, rows, cols, ans, num_cols);

    /*Rank Calculator*/
    rank = rank_calculator(A, rows, cols);
    /*---------------*/

    /*Printing the matrix result of the program*/
    printf("################################################\n");
    printMatrix(A, rows, cols, ans);
    printf("------------------------------------------------\n");
    /*-----------------------------------------*/

    /*Dellocating memory of matrix*/
    destroyMatrix(A, rows, cols);
    /*----------------------------*/
}

void micro4(int ans)
{
    int rows, cols, x, i, j;
    /*Defining Rows and Columns*/
    printf("Insert the dimension of your 'nxn' matrix bases: ");
    scanf("%d", &rows);
    cols = rows;
    /*-------------------------*/
    cols = cols + (rows - 1);
    /*Inserting the values into the Matrix*/
    double **A = readMatrix(rows, cols, ans);
    /*------------------------------------*/

    double **B = copySwapMatrix(A, rows, cols);

    int *num_cols;
    num_cols = (int *)malloc(cols * sizeof(int));

    /*Printing the matrix*/
    printf("The A matrix's elements are: \n");
    printMatrix(A, rows, cols, ans);
    printf("------------------------------------------------\n");
    printf("The B matrix's elements are: \n");
    printMatrix(B, rows, cols, ans);
    /*-------------------*/

    printf("################################################");
    int cond1 = 0, rank;

    /*Central part of the program*/
    gcd_function(A, rows, cols, cond1, ans);
    printf("\nMATRIX A\n");
    algorithm(A, rows, cols, ans, num_cols);
    rank = rank_calculator(A, rows, cols);
    printf("################################################");
    printf("\nMATRIX B\n");
    algorithm(B, rows, cols, ans, num_cols);
    rank = rank_calculator(B, rows, cols);

    /*Printing the matrix result of the program*/
    printf("################################################\n");
    printf("Matricea T este urmatoarea:\n");
    printMatrix8(A, rows, cols);
    printf("------------------------------------------------\n");
    printf("Matricea S (T^-1) este urmatoarea:\n");
    printMatrix8(B, rows, cols);

    /*-----------------------------------------*/

    /*Dellocating memory of matrix*/
    free(num_cols);
    destroyMatrix(A, rows, cols);
    destroyMatrix(B, rows, cols);
    /*----------------------------*/
}

int main()
{
    system("cls");
    printf("To use with small/medium matrixes, with high dimension you can incur in some bugs!\n");
    sleep(3);
    system("cls");
    int ans, ans2;
restart:
    printf(" What do you want to do?\n");
    printf("    1. Solve system of linear equations with 'Gauss-Montante (Bareiss Algorithm)'\n");
    printf("    2. Calculate the determinant and the rank of the matrix\n");
    printf("    3. Inverse of a Matrix\n");
    printf("    4. Calculate the 'base change' T and S matrixes of two bases\n");
    printf(" Please, Insert you answer: ");
    scanf("%d", &ans);
    switch (ans)
    {
    case 1:
        system("cls");
        micro1(ans);
        break;
    case 2:
        system("cls");
        micro2(ans);
        break;
    case 3:
        system("cls");
        micro3(ans);
        break;
    case 4:
        system("cls");
        micro4(ans);
        break;
    default:
        system("cls");
        printf("%s", KRED);
        printf(" You typed a wrong answer!");
        printf("%s", KNRM);
        exit(70);
    }
    greek = 0;
    printf(" Do you want to re-use the program? [1 = yes | !1 = no] ");
    scanf("%d", &ans2);
    if (ans2 == 1)
    {
        system("cls");
        goto restart;
    }
    else
    {
        getchar;
        return 0;
    }
}
