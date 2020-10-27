//C:
//Limites do Tipo de dados INT
#include <stdio.h>
#include <limits.h>
const int min_int = INT_MIN;
const int max_int = INT_MAX;
int main()
{
    printf(" %d\n",min_int);
    printf(" %d\n",max_int);
}


//C++:
//Limites do Tipo de dados INT
//
//#include <iostream>
//#include <limits>
//int main() {
//    // Change the template parameter to the various different types.
//    std::cout << std::numeric_limits<int>::min() << std::endl;
//    std::cout << "\n";
//    std::cout << std::numeric_limits<int>::max() << std::endl;
//}
