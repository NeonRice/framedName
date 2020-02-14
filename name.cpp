#include <iostream>
#include <string>

inline std::string getEmpty(const int len)
{
    return "*" + std::string(len-2, ' ') + "*" + "\n";
}

inline std::string printEmptyTimes(const int len, const int times)
{
    for(int i = 0; i < times; ++i)
        std::cout << getEmpty(len);
}

inline std::string getHello(const std::string name)
{
    return name.back() == 's' ? "* Sveikas, " + name + "! *" : "* Sveika, " + name + "! *";
}

inline std::string getTabbed(int len)
{
    return std::string(len, '*') + "\n";
}

void printFormattedName(const std::string name, const int emptyLines)
{
    char c = '*';
    int len = getHello(name).length();

    std::cout << getTabbed(len);
    printEmptyTimes(len, emptyLines);
    std::cout << getHello(name) << std::endl;
    printEmptyTimes(len, emptyLines);
    std::cout << getTabbed(len);

}

int main()
{
    std::string name = "";
    int width = 0;

    std::cout << "Input your name: ";
    std::cin >> name;
    std::cout << "Input the width of the frame: ";
    std::cin >> width;

    int emptyLines = (width - 3) / 2;
    printFormattedName(name, emptyLines);

}