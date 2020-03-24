#include <iostream>
#include <math.h>
#define PI 3.14159265

int main()
{
    for(int i = 0; i < 360; i++) {
        std::cout << i << " degrees:" << "\n";
        std::cout << "Sin => " << sin(PI*i/180) << "\n";
        std::cout << "Cos => " << cos(PI*i/180) << "\n";
        std::cout << "Tan => " << tan(PI*i/180) << std::endl;
    }
}