#include <iostream>

// Generic function to find the maximum of two values
template <typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

// Generic function to find the minimum of two values
template <typename T>
T getMin(T x, T y)
{
    return (x < y) ? x : y;
}

// Returns a string literal based on value equality
template <typename T>
auto equalOrNot(T x, T y)
{
    return (x == y) ? "equals" : "not equals";
}

int main()
{
    // Flag to control the main game loop execution
    bool keepRunning{true};

    while (keepRunning)
    {
        char selecTypeNumber{};
        std::cout << "\t(1)Integer | (2)Floats | (q)Exit \n";
        std::cout << "------------------------------------\n";
        std::cout << "Enter the data Type to compare: ";
        std::cin >> selecTypeNumber;

        switch (selecTypeNumber)
        {
        case '1': // Integer comparison case
        {
            int x{}, y{};
            std::cout << "Enter two integers (ex: 1 4): ";
            std::cin >> x >> y;
            std::cout << '\n';

            // Calls the template function with 'int' types
            std::cout << "The numbers are " << equalOrNot(x, y) << " " << x << "\n\n";

            // Only show Max/Min if numbers are different to avoid redundancy
            if (x != y)
            {
                std::cout << "Max: " << getMax(x, y) << "\n";
                std::cout << "Min: " << getMin(x, y) << "\n\n";
            }
            break;
        }
        case '2': // Floating point comparison case
        {
            double x{}, y{};
            std::cout << "Enter two doubles (ex: 1.23 4.56): ";
            std::cin >> x >> y;
            std::cout << '\n';

            // Calls the same template functions but with 'double' types
            std::cout << "The numbers are " << equalOrNot(x, y) << " " << x << '\n';
            if (x != y)
            {
                std::cout << "Max: " << getMax(x, y) << "\n";
                std::cout << "Min: " << getMin(x, y) << "\n\n";
            }
            break;
        }
        case 'q': // Exit case
        {
            std::cout << "Exiting...\n";
            // Set flag to false to break the 'while' loop on next evaluation
            keepRunning = false;
            break;
        }
        default: // Handling invalid inputs
            std::cout << "Invalid selection. Please try again.\n";
            break;
        }
    }

    // This line is now reachable because we used a flag instead of 'return 0'
    std::cout << "Program finished\n";
    return 0;
}
