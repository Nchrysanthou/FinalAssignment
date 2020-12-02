#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include "stock.h"

int readStockItems(struct StockRecord record[], int entries, int stock)
{

}

void centreText(int num, char symbol, char string[])
{
    int charnum, len, i;

    len = strlen(string);

    if (len == 0) {
        for (i = 0; i < num; i++)
        {
            printf("%c", symbol);
        }
    }

    else if (len % 2 == 0)
    {
        charnum = ((num - len) / 2);

        for (i = 0; i < charnum; i++)
        {
            printf("%c", symbol);
        }

        printf("%s", string);

        for (i = 0; i < charnum; i++)
        {
            printf("%c", symbol);
        }
    }
    else
    {
        charnum = ((num - len) / 2);

        for (i = 0; i < charnum; i++)
        {
            printf("%c", symbol);
        }

        printf("%s", string);

        for (i = 0; i < charnum + 1; i++)
        {
            printf("%c", symbol);
        }
    }
    printf("\n");
}

void printStockReport(struct StockRecord stock[], int num)
{

}

int readSale(struct StockRecord stock[], int num, struct SaleRecord record[])
{
    
}

int printSalesReport(struct StockRecord stock[], struct SalesRecord items[], int num)
{

}

int getTopSellers(struct StockRecord stock[], int num, struct SalesRecord topsellers[], int num2, int num3)
{

}

int printTopSellers(struct StockRecord stock[], struct SalesRecord topsellers[], int num)
{

}
