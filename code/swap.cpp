#include <iostream>
#include <string>
using namespace std;


void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void main {

int i = 7;
int j = 9;
swap(i, j);
cout << i << j << endl;

}
