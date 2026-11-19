#include <stdlib.h>
#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

int main(){
	int MAXLEN = 100;
	string book;
	string enchant;
	char rpmatch[MAXLEN][MAXLEN]; // make matrix of matches and mismatches
	int i,j,blen,elen;

	// Making the matrix
	for (i = 0; i < MAXLEN; i++) {
		for (j=0; j<MAXLEN, j++;){
			rpmatch[i][j]='.';
		}
	}

	// inputting the books to enchant
	cin >> book;
	cin >> enchant;

	// setting up blen and elen
	blen = book.length();
	elen = enchant.length();

	// if book length or enchantment length are less than MAXLEN (aka 100)
	if ((blen > MAXLEN) || (elen > MAXLEN)){
		cout << "Error, string longer than" << MAXLEN << endl;
	}
}
