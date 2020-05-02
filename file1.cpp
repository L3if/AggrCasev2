#include <iostream>
#include <cstring>
#include <unistd.h>
#include "file1.h"
using namespace std;


int func1()
{
    cout << "enter a\n";
    int a;
    cin >> a;
    return a;
}


bool func2(int b)
{   
    cout << "This is node 2\n";
    return b > 0;
}


int func3()
{
    cout << "You'r in node 3 choose either 4, 5, 8\n";
    int option;
    cin >> option;
    return option%3+1;
}


int func4()
{
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "node 4 done\n";
    for(int i=1; i<=5; i++)
    {
        cout << i << endl;
        sleep(500);
    }
    return 0;
}


void func13()
{
    cout << "Block 13 is here, going to block2\n";
}