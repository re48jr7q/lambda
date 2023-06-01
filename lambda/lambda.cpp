#include <iostream>
#include <functional>

int main()
{
    //a regular function pointer, works only with empty capture clause.
    double(*addNumbers1)(double, double) {
        [](double a, double b) {
            return (a + b);
        }
    };

    std::cout << addNumbers1(1, 2) << ' ';

    //std::function, the lambda could have a non-empty capture clause.
    std::function addNumbers2 {
        [](double a, double b) {
            return (a + b);
        }
    };

    std::cout << addNumbers2(3, 4) << ' ';

    //auto, stores the lambda with his real type.
    auto addNumbers3{
        [](double a, double b) {
            return (a + b);
        }
    };

    std::cout << addNumbers3(5, 6) << ' ';
    return 0;
}




