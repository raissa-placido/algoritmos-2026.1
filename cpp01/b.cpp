#include <iostream>
#include <iomanip> 

double perimetro_retangulo(double l1, double l2){
    double per = 2 * (l1 + l2);
    return per;
}

int main(){
    double l1, l2;
    std::cin >> l1 >> l2;
    double r = perimetro_retangulo(l1, l2);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << r << std::endl;
    return 0;
}