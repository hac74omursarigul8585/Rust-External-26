#include <iostream>
#include "cleaner.h"

// Smart PC Cleaner: Main Engine v1.0.0
int main() {
    std::cout << "Initializing System Scanner..." << std::endl;
    
    SystemCleaner cleaner;
    cleaner.Initialize();
    
    std::cout << "PC Cleaner is ready to optimize your system!" << std::endl;
    return 0;
}