#include <iostream>
using namespace std;

int main()
{
    // Create a C string
    char s[] = "C string";
    // print the C at index 2
    cout << s[3] << endl;
    // print the entire string
    int i = 0;
    while (s[i])
        cout << s[i++];
    cout << endl;
    // print again using pointers 
    for (char* cp = s; *cp != '\0'; cout << *cp++);
    cout << endl;
    return 0;
}
