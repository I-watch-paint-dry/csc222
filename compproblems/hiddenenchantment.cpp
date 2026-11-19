//-----------------------------------------------------------------------
//	File:		prob.cpp
//	Description:	hidden enchantment
//	Author:		Chau-Wen Tseng (tseng@cs.umd.edu)
//-----------------------------------------------------------------------

#include <stdlib.h>
#include <iostream.h>
#include <assert.h>

// Uncomment the following lines if using APCS classes
// #include "apvector.h"
// #include "apmatrix.h"
// #include "apstack.h"
// #include "apqueue.h"

#include "apstring.cpp"

//-----------------------------------------------------------------------
//  main
//-----------------------------------------------------------------------

int main()
{
	const int MAXLEN = 100;  // largest size allowed

	apstring book;
	apstring enchant;

	char match[MAXLEN][MAXLEN];    // matrix of matches / mismatches
	int i,j,blen,elen;

	// initialize matrix

	for (i = 0; i < MAXLEN; i++) {
		for (j = 0; j < MAXLEN; j++) {
			match[i][j] = '.';
		}
	}

	// read in text of book passage & enchantment

	cin >> book;
	cin >> enchant;

	blen = book.length();
	elen = enchant.length();

	if ((blen > MAXLEN) || (elen > MAXLEN)) {
		cout << "Error, string longer than " << MAXLEN << endl;
	}


	/////////// BEGIN your code /////////////////

	// find matches between two sequences

		// match[i][j] = 'x';

	// emphasize matches of length 3 or greater

		// match[i][j] = 'Q';

	/////////// END your code /////////////////

	// output plot

	cout << "  " << book << endl;
	cout << "  ";
	for (i = 0; i < blen; i++) {
		cout << "-";
	}
	cout << endl;

	for (i = 0; i < elen; i++) {
		cout << enchant[i] << "|" ;
		for (j = 0; j < blen; j++) {
			cout << match[i][j];
		}
		cout << endl;
	}

	return 0;
}


