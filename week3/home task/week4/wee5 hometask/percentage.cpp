#include <iostream>
#include <iomanip>
#include <vector>

int main() 
{
    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> counts(5, 0);
    for (int i = 0; i < n; ++i) 
    {
        int num;
        std::cin >> num;
        if (num < 200) {
            counts[0]++;
        } else if (num >= 200 && num <= 399) {
            counts[1]++;
        } else if (num >= 400 && num <= 599) {
            counts[2]++;
        } else if (num >= 600 && num <= 799) {
            counts[3]++;
        } else {
            counts[4]++;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < 5; ++i) 
    {
        double percentage = (static_cast<double>(counts[i]) / n) * 100.0;
        std::cout << percentage << "%" << std::endl;
    }

    return 0;
}