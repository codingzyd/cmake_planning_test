#include <iostream>
#include "process.h"

int main()
{
    std::cout << "planning start." << std::endl;
    Process proc;
    proc.planProcess();
    std::cout << "planning end." << std::endl;
    std::cout << "hello world!!" << std::endl;
    return 0;
}