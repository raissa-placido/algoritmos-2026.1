#include <iostream>
#include <chrono>

bool primo_new(long long n){
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    int divs = 1;
    for (int i=3; i<= n/2; i=i+2){
        if(n % i == 0){
            divs +=1;
        }
    }
    if(divs == 1){
        return true;
    }
    return false;
}


int main()
{
    long long n;
    std::cin >> n;
    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = primo_new(n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();
    if (p)
        std::cout <<"is prime" << std::endl;
    else
        std::cout << "is not prime" << std::endl;
    auto dur = end -beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cout << duration.count() << std::endl; 
    return 0;
}