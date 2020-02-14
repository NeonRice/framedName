#include <iostream>
#include <string>

std::string getEmpty(const int len)
{
    std::string emptyLine = "";
    emptyLine += "*";
    for(int i = 0; i < len-2; ++i)
    {
        emptyLine += " ";
    }
    emptyLine += "*";

    return emptyLine;
}

inline std::string getHello(const std::string name)
{
    return "* Sveikas, " + name + "! *";
}

std::string getTabbed(int len)
{
    std::string line = "";
    for(int i = 0; i < len; ++i)
    {
        line += "*";
    }

    return line;
}

void printFormattedName(const std::string name)
{
    char c = '*';
    std::string hello = getHello(name);
    int len = hello.length();
    std::cout << len << std::endl;

    std::string empty = getEmpty(len);
    std::string tabbed = getTabbed(len);

    std::cout << tabbed << std::endl << empty << std::endl
    << hello << std::endl << empty << std::endl << tabbed
    << std::endl;

}

int main()
{
    std::string name = "";

    std::cout << "Input your name: " << std::endl;
    std::cin >> name;
    printFormattedName(name);

}