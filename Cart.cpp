#include "Cart.h"

void addOption(CartItems list[], int &count){
  cin.clear();
  cin.ignore(100, '\n');
	cout << "Name: "; 
	cin.getline(list[count].name, MAX);
	cout << "Cost: $";
	cin >> list[count].cost; 
	while (list[count].cost <= 0 || !cin) {
		cout << "Please enter cost of item" << endl;
		cin.clear();
    cin.ignore(100, '\n');
		cout << "Cost: $"; 
		cin >> list[count].cost;
	}
  cin.clear();
  cin.ignore(100,'\n');
	cout << "Quantity: ";
	cin >> list[count].quantity;
	while (list[count].quantity <= 0 || !cin) {
		cout << "Please enter quantity number greater than 1" << endl;
		cin.clear();
    cin.ignore(100, '\n');
		cout << "Quantity: ";
		cin >> list[count].quantity;
	}
	count++;
}
void removeOption(CartItems list[], int &count){
  int pos;
	cout << fixed << setprecision(2);
  cout << left;
	cout << setw(2) << "#";
  cout << left;
  cout << setw(20) << "ITEM";
  cout << left;
  cout << setw(20) << "PRICE";
  cout << left;
  cout << setw(5) << "QTY";
  cout << left;
  cout << "TOTAL COST" << endl;
	for (int i = 0; i < count; i++) {
    cout << left;
		cout << i+1 << ".";
    cout << left;
		cout << setw(20) << list[i].name;
    cout << left;
		cout << setw(20) << list[i].cost;
    cout << left;
		cout << setw(5) << list[i].quantity;
    cout << left;
		cout << static_cast<float>(list[i].quantity) * list[i].cost << endl;
	}
  for (int i = 0; i < 62; i++) {
    cout << "_";
  }
  cout << endl << endl; 
  
	cout << "Enter item # to remove: ";
  cin.clear();
  cin.ignore(100, '\n');
	cin >> pos;
	for (int i = pos-1; i < count; i++) {
		list[i] = list[i+1];
	}
	count--;
}
void modifyOption(CartItems list[], int &count){
	int pos = 0;
  cout << fixed << setprecision(2);
  cout << left;
	cout << setw(2) << "#";
  cout << left;
  cout << setw(20) << "ITEM";
  cout << left;
  cout << setw(20) << "PRICE";
  cout << left;
  cout << setw(5) << "QTY";
  cout << left;
  cout << "TOTAL COST" << endl;
	for (int i = 0; i < count; i++) {
    cout << left;
		cout << i+1 << ".";
    cout << left;
		cout << setw(20) << list[i].name;
    cout << left;
		cout << setw(20) << list[i].cost;
    cout << left;
		cout << setw(5) << list[i].quantity;
    cout << left;
		cout << static_cast<float>(list[i].quantity) * list[i].cost << endl;
	}
  for (int i = 0; i < 62; i++) {
    cout << "_";
  } 
  cout << endl << endl; 
  cout << "Enter number to modify: ";
  cin.clear();
  cin.ignore(100, '\n');
  cin >> pos;
  cin.clear();
  cin.ignore(100, '\n');
	cout << "Name: "; 
	cin.getline(list[pos-1].name, MAX);
	cout << "Cost: $";
	cin >> list[pos-1].cost; 
	while (list[pos-1].cost <= 0 || !cin) {
		cout << "Please enter cost of item" << endl;
		cin.clear();
    cin.ignore(100, '\n');
		cout << "Cost: $"; 
		cin >> list[pos-1].cost;
	}
	cout << "Quantity: ";
	cin >> list[pos-1].quantity;
	while (list[pos-1].quantity <= 0 || !cin) {
		cout << "Please enter quantity number greater than 1" << endl;
		cin.clear();
    cin.ignore(100, '\n');
		cout << "Quantity: ";
		cin >> list[pos-1].quantity;
	}
}
void printOption(CartItems list[], int count){
	cout << fixed << setprecision(2);
  cout << left;
	cout << setw(2) << "#";
  cout << left;
  cout << setw(20) << "ITEM";
  cout << left;
  cout << setw(20) << "PRICE";
  cout << left;
  cout << setw(5) << "QTY";
  cout << left;
  cout << "TOTAL COST" << endl;
	for (int i = 0; i < count; i++) {
    cout << left;
		cout << i+1 << ".";
    cout << left;
		cout << setw(20) << list[i].name;
    cout << left;
		cout << setw(20) << list[i].cost;
    cout << left;
		cout << setw(5) << list[i].quantity;
    cout << left;
		cout << static_cast<float>(list[i].quantity) * list[i].cost << endl;
	}
  for (int i = 0; i < 62; i++) {
    cout << "_";
  }
  cout << endl << endl; 
}
void checkoutOption(CartItems list[], int count){
  double total = 0;
  cout << fixed << setprecision(2);
  cout << "\nCart contents: " << endl << endl;
  printOption(list, count);
  for (int i = 0; i < count; i++) {
    total += static_cast<float>(list[i].quantity) * list[i].cost;
  }
  cout << "\nPlease pay: $" << total;
}
