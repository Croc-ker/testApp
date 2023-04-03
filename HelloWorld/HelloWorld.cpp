// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 

    int iVal = -1;
    short sVal = 3;
    long lVal = 123456789;
    int iVal2 = 323;
    float fVal = 2.1;
    char cVal = 'a';
    std::cout << "\niVal = ";
    std::cout << iVal;

    // Heap Memory
    char* chTemp = NULL;
    chTemp = (char*)malloc(20);
    memset(chTemp, '\0', 20);
    //Do stuff, then
    free(chTemp);
    chTemp = NULL; //good practice
    std::cout << '\n\nend of program';
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
