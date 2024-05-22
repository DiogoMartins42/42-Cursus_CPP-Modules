#include <iostream>
#include <fstream>
#include <cstring>


int main(int argc, char **argv)
{
    std::fstream Input;
    std::fstream Output;

    if(argc == 4)
    {
        Input.open(argv[1], std::ios::in);
        if (!Input)
        {
            std::cerr << "File not able to be Opened" << std::endl;
            return 1;
        }
        std::string sOut = argv[1];
        sOut += ".replace";
        Output.open(sOut.c_str(), std::ios::out);
        if (!Output)
        {
            std::cerr << "Error making replacement file" << std::endl;
            return 1;
        }
        std::string line;
        std::size_t strPos;
        while (std::getline(Input, line))
        {
            strPos = line.find(argv[2], 0);
            if (strPos != std::string::npos)
            {
                line.erase(strPos, strlen(argv[2]));
                line.insert(strPos, argv[3]);
            }
            Output << line << std::endl;
        }
    }
    else{
        std::cout << "Type: ./sed <file> <s1> <s2>";
    }
    return 0;
}