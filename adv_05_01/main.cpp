#include <iostream>
#include <vector>
#include <algorithm>

#include "templated_sqr.h"

int main()
{
    int int_to_square = 4;
    std::vector<int> vector_to_square {-1, 4, 8};
    
    std::cout << "[IN]: " << int_to_square << std::endl;
    std::cout << "[OUT]: " << templated_sqr(int_to_square) << std::endl;
    
    std::cout << "[IN]:";
    for_each(vector_to_square.begin(), vector_to_square.end(), [](const int& element) {std::cout << " " << element;});
    
    std::vector<int> sqared_vector = templated_sqr(vector_to_square);
    
    std::cout << "\n[OUT]:";
    for_each(sqared_vector.begin(), sqared_vector.end(), [](const int& element) {std::cout << " " << element;});
    
    return 0;
}
