/*Created by Joe Rivera 02/21/2018
For my teams first project in COSC 2336

Recreation of a Deque*/

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