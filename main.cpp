#include "kaprekar_constant.h"

int main() {
    int number;
    std::cin>>number;
    int steps = findStepsForKaprekarConstant(number);

    if (steps != -1) {
        std::cout << "In " << steps <<" iterations "<<number<<" is converted to kaprekar's constant "<< std::endl;
    }else {
        std::cout << "This "<< number <<" does not reach kaprekar's constant" << std::endl;
    }    
    return 0;
}