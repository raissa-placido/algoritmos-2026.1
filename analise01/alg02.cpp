#include <iostream>
#include <chrono>

bool primo_div2(long long n){
    int divs=0;
    for (int i=1; i<= n/2; i++){
        if(n % i == 0){
            divs+=1;
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
    bool p = primo_div2(n);
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