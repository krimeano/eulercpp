#include <iostream>
#include "solution1.h"

int main() {
    std::cout << "euler Problem 1" << std::endl;
    std::cout << "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23." << std::endl;
    std::cout << "Find the sum of all the multiples of 3 or 5 below 1000." << std::endl;

    std::cout << "testing solution" << std::endl;
    
    const int expectedTest = 23;

    Solution1 testProblem = Solution1(10);
    int testResult = testProblem.solve();

    if (testResult != expectedTest)  {
        std::cout << "task is not solved, expected " << expectedTest << ", received " << testResult << std::endl;
        return 1;
    }

    std::cout << "test passed, solving" << std::endl;
    
    Solution1 problem = Solution1(1000);
    int result = problem.solve();

    std::cout << "----------" << std::endl << result << std::endl;
    return 0;
};
