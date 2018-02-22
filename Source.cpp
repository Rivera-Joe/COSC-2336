#include<iostream>
#include"dec.h"

using namespace std;

int deque::deck() {
		
		int mydeck[4] = { 4, 5, 6, 7 };

		int top = mydeck[0];
		int bot = mydeck[4];


		cout << "the top number of the deck is " << top << endl;
		top = 20;
		cout << "changing top number\n\n"
			 << "top number is now " << top << endl;
		cout << "the bottom number of the deck is " << bot << endl;
		bot = 29;
		cout << "changing bottom number\n\n"
			 << "bottom number is now " << bot << endl;

		for (int x = 0; x < 4; x++) {
			mydeck[x];
			cout << "The deck is now " << mydeck[x] << endl;
		}


		return 0;
}

