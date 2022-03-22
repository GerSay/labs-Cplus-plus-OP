/*
#include <iostream>
#include <fstream>
#include <ctime>

#define TIME_TEST(testCode, message) {\
    clock_t start_time = clock(); \
    testCode \
    clock_t end_time = clock();       \
    clock_t sort_time = end_time - start_time; \
    std::clog << message << ": " \
              << (double) sort_time / CLOCKS_PER_SEC << std::endl; \
}

int main()
{
    const char *filename = "tmp.txt";
    std::ofstream file(filename);

    TIME_TEST({
        for (size_t i = 0; i < 1000000; i++)
            file << 'a' << std::endl;
    }, "Often buffer reset");

    TIME_TEST({
        for (size_t i = 0; i < 1000000; i++)
            file << 'a' << '\n';
    }, "Buffer opt");

    file.close();
    std::remove(filename);

    return 0;
}*/

#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;

    return 0;
}