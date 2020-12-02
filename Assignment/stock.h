#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct StockRecord 
{
	int id;
	int amount;
	int category; //1-7 as category option, 0 for termination
	double price;
	int soldby; // 1 sold by weight; 0 sold by number
	char name[21];
};

struct SalesRecord
{   
	int amount;
	int category;
	double price;
	double byweight;
	char name[21];
};

int readStockItems(struct StockRecord record[], int entries, int stock);

void centreText(int num, char symbol, char string[]);

void printStockReport(struct StockRecord stock[], int num);

int readSale(struct StockRecord stock[], int num, struct SaleRecord record[]);

int printSalesReport(struct StockRecord stock[], struct SalesRecord items[], int num);

int getTopSellers(struct StockRecord stock[], int num, struct SalesRecord topsellers[], int num2, int num3);

int printTopSellers(struct StockRecord stock[], struct SalesRecord topsellers[], int num);
