#include <iostream>
#include <iomanip>
#include <random>       //necessary library for mersenne twist

std::mt19937 mersenneTwist(static_cast<unsigned int>(time(0)));     //or std::mt19937_64 for int64_t

int32_t getRandomInt(int32_t min, int32_t max);


int main()
{
    for (size_t i = 0; i < 100; ++i)    std::cout << std::setiosflags(std::ios::left) << std::setw(6) << getRandomInt(0, 100)
                                                                                      << std::setw(6) << getRandomInt(0, 100)
                                                                                      << std::setw(6) << getRandomInt(0, 100)
                                                                                      << std::setw(6) << getRandomInt(0, 100)
                                                                                      << std::setw(6) << getRandomInt(0, 100)
                                                                                      << std::endl;


    system("pause>0");
    return 0;
}


int32_t getRandomInt(int32_t min, int32_t max)
{
    return min + mersenneTwist() % (max - min + 1);
}