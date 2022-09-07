#ifndef CART_H
#define CART_H
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int MAX = 101;

struct CartItems {
	char name[MAX];
	float cost;
	int quantity; 
};

//prototypes
void addOption(CartItems list[], int &count);
void removeOption(CartItems list[], int &count);
void modifyOption(CartItems list[], int &count);
void printOption(CartItems list[], int count);
void checkoutOption(CartItems list[], int count);

#endif