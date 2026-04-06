#include <iostream>
#include <iomanip>

int main(){ 

    double d;
    std::cin >> d;
    double pi = 3.14159;
    double raio = d/2.0;
    double area = (raio*raio)*pi;
    std::cout << std::fixed << std::setprecision(5)<< area << std::endl;
    return 0;
}