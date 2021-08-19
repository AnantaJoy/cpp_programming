#include "header.hpp"

void printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printProduct(m1, m2, product);
    return 0;
}