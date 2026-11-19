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
// #include "apstring.cpp"

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

	// find matches between two sequences

	for (i = 0; i < elen; i++) {
		for (j = 0; j < blen; j++) {
			if (enchant[i] == book[j])
				match[i][j] = 'x';
		}
	}

	// emphasize matches of length 3 or greater

	for (i = 0; i < elen-2; i++) {
		for (j = 0; j < blen-2; j++) {
			if (match[i][j] != '.') {
				if (match[i+1][j+1] != '.' && match[i+2][j+2] != '.') {
						match[i][j] = 'Q';
						match[i+1][j+1] = 'Q';
						match[i+2][j+2] = 'Q';
				}
			}
		}
	}

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

