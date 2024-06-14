// GoodbyeConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\GoodbyeWorldLibrary\GoodbyeWorldPrinter.h"

int main()
{
    // Initialize the DLL (if needed)
    // ...

    // Call the function from the DLL
    GoodbyeWorldPrinter goodbyeWorldPrinter;
    goodbyeWorldPrinter.PrintGoodbyeWorld();

    // Clean up (if needed)
    // ...

    return 0;
}
