#include <iostream>

int main() {
int a[10], i;
for (i = 0; i < 10; ++i)
    std::cin >> a[i];

for (i = 0; i < 10; ++i)
    std::cout << a[i] << " ";;
std::cout << std::endl;

return 0;
}