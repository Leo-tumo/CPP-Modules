// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/06 20:50:00 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <string>
#include <iostream>
#include <fstream>

static std::string myReplace(std::string str, const std::string& s1, const std::string& s2)
{
    std::string::size_type start = 0;
    std::string::size_type n;

    while ((n = str.find(s1, start)) != std::string::npos)
    {
        str.erase(n, s1.length());
        str.insert(n, s2);
        start = n + s2.length();
    }
    return (str);
}

int main(int argc, char *argv[])
{
    if (argc != 4){
        std::cerr << "\x1b[31mError: Wrong Arguments!" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream fin(filename);
    if (!fin.is_open()){
        std::cerr << "\x1b[31mError: Wrong filename!" << std::endl;
        return (1);
    }
    std::ofstream fout(filename.append(".replace"));
    if (!fout.is_open()){
        fin.close();
        std::cerr << "\x1b[31mError: file open error" << std::endl;
        return (1);
    }
    if (s1.empty()){
        std::cout << "\x1b[31mError: s1 can not be empty!" << std::endl;
        return (1);
    }
    for (;;) {
        std::string line;
        std::getline(fin, line);

        fout << myReplace(line, s1, s2);
        if (fin.eof())
            break;
        fout << std::endl;
    }
    fin.close();
    fout.close();
    return (0);
}
