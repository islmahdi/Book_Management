#include <iostream>
#include "book.h"
using namespace std;



int menu() {
	int entry;
	cout << "BOOK MANAGEMENT SYSTEM \n";
	cout << "------------------------\n";
	cout << "1. SEARCH A BOOK" << endl;
	cout << "2. DELETE OR RENT" << endl;
	cout << "3. RENTED BOOK RETURNED\n";
	cout << "4. SEARCH A RENTED INVENTORY" << endl;
	cout << "5. EXIT"<<endl;
	cout << "ENTER A DIGIT: ";
	cin >> entry;
	return entry;

}
int main()
{
	int menu1 = menu();
	while (menu1!= 5) {
		switch (menu1) {
		/*case 1:
			search();
			break;
		case 2:
			delete_rent();
			break;
		case 3:
			return_book();
			break;
		case 4:
			rtinventory();
			break;*/
		default:
			cout << "Wrong Key Entered" << endl << endl;

		}
		menu1 = menu();

	}
	if (menu1 == 5) {
		cout << "Program Terminated With Exit Key\n";
	}
	
	
}