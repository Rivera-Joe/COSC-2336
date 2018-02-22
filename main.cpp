#include<iostream>
#include"dec.h"

using namespace std;

int main() {

	deque cards;

	cout << "Results of deque: "  << cards.deck();

	cout << "\nenter any character to exit";

	char exit;
	cin >> exit;

	return 0;
}