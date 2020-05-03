#include <iostream>
#include <cstring>
#include "file2.h"
#include <unistd.h>

using namespace std;

void func5()
{
    cout << "node 5 done\n";
}

bool func6()
{
    cout << "This is node 6\nEnter 1 to go to node 7, 0 to pass and go to 8\n";
    int a;
    cin >> a;
    cout << "Introducing new remastered node 6, now with timer\n";
    for(int i=1; i<=5; i++)
    {
        cout << i << endl;
        cout << endl;
        sleep(500);
    }
    return a;
}

void func7()
{
    cout << "Node 7 done; Going to node 6\n";
}

bool func8()
{
    cout << "This is node 8\nEnter 1 to go to node 9, 0 to pass and go to 10\n";
    int a;
    cin >> a;
    cout << "Going to next block\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "but after Timer\n";
    for(int i=1; i<=5; i++)
    {
        cout << i << endl;
        sleep(500);
    }
    return a;
}

void func9()
{
    cout << "Node 9 done\n";
}

int func14()
{
    cout << "This is node 14\nEnd of program\n";
    return 0;
}