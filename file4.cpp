#include <iostream>
#include <cstring>
#include <unistd.h>
#include "file4.h"

using namespace std;

void func15()
{
    cout << "Block 15 is here, going to block10\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "but after Timer\n";
    for(int i=1; i<=5; i++)
    {
        cout << i << endl;
        sleep(1);
    }
}