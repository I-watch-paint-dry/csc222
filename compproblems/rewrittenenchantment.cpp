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

	// if there are matches between two sequences
	for (i=0; i < elen; i++){
		for (j=0; i<blen; j++){
			if (enchant[i] == book[j])
				rpmatch[i][j] = 'x';
		}
	}

	// matches of 3 or more
	for (i=0; i<elen-2; i++){
		for (j=0; j<blen-2; j++){
			if(rpmatch[i][j] != '.'){
				rpmatch[i][j] = 'Q';
				rpmatch[i+1][j+1] = 'Q';
				rpmatch[i+2][j+2] = 'Q';
			}	
		}
	}
	// output
	cout << " " << book << endl;
	cout << " ";
	for (i=0; i < blen; i++){
		cout << "-";}
	cout << endl;

	for (i=0; i<elen; i++){
		cout << enchant[i] << "|";
		for (j=0; j<blen; j++){
			cout << rpmatch[i][j];
		}
		cout << endl;
	}
	return 0;
}
