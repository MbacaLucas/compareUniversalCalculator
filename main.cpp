#include <iostream>

template <typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
T getMin(T x, T y)
{
    return (x < y) ? x : y;
}

template <typename T>
auto equalOrNot(T x, T y)
{
    return (x == y) ? "equals" : "Not Equals";
}

int main()
{
    while (true)
    {
        char selecTypeNumber{};
        std::cout << "\t(1)Integer | (2)Floats | (q)Exit \n";
        std::cout << "------------------------------------\n";
        std::cout << "Enter the data Type to compare: ";
        std::cin >> selecTypeNumber;

        switch (selecTypeNumber)
        {
        case '1':
        {
            int x{}, y{};
            std::cout << "Enter two integer(ex: 1 4): ";
            std::cin >> x >> y;

            std::cout << "Max: " << getMax(x, y) << "\n";
            std::cout << "Min: " << getMin(x, y) << "\n";
            break;
        }
        case '2':
        {
            double x{}, y{};
            std::cout << "Enter two integer(ex: 1.23423 1.23237842): ";
            std::cin >> x >> y;
            std::cout << "Max: " << getMax(x, y) << "\n";
            std::cout << "Min: " << getMin(x, y) << "\n";
            break;
        }
        case 'q':
        {
            std::cout << "Exiting...\n";
            return 0;
        }
        }
        std::cout << "program finished";
    }
    return 0;
}