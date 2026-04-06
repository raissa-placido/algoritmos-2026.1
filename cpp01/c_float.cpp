#include <iostream>
#include <iomanip>

int main(){ 

    float d;
    std::cin >> d;
    float pi = 3.14159;
    float raio = d/2.0;
    float area = (raio*raio)*pi;
    std::cout << std::fixed << std::setprecision(5)<< area << std::endl;
    return 0;
}