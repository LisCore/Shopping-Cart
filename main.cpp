#include "Cart.h"

const int NUM = 20;

//prototype
void welcome();
void displayPrompt();

int main(){
	CartItems list[NUM];
	int count = 0;
	int option = 0 ;
	welcome();
  do {
		displayPrompt();
		cin >> option;
		switch (option) {
			case 1:
				addOption(list, count);
				break;
			case 2:
				removeOption(list, count);
				break;
			case 3: 
				modifyOption(list, count);
				break;
			case 4:
				printOption(list, count);
				break;
			case 5:
				checkoutOption(list, count);
				exit(0);
				break;
			default: 
				cout << "Invalid choice, please choose again" << endl;
        cin.clear(); 
        cin.ignore(100, '\n');
        break;
    }
	} while (!(option == 5));

	return 0;
}
void welcome() {
	cout << "Welcome to my Online Shopping Program!\n" << endl;
}
void displayPrompt() {
	cout << "1.  Add item" << endl;
	cout << "2.  Remove item" << endl;
	cout << "3.  Modify item" << endl;
	cout << "4.  Print cart" << endl;
	cout << "5.  Checkout\n" << endl;
	cout << "What would you like to do?" << endl;
}
