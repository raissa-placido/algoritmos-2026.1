#include <iostream>
#include <chrono>

bool alg4(long long n){
     if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n % 2 ==0){
        return false;
    }
    bool p = true;
    int d = 3;
    
    while (p && d <= n/2){
        if(n % d ==0){
            p = false;
        } 
        d = d+2;
    }
    return p;
}


int main()
{
    long long n;
    std::cin >> n;
    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = alg4(n);
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