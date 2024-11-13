/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:59:19 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/13 02:13:26 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong arguments!" << std::endl;
        std::cerr << "Usage: ./ex04 <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be an empty string." << std::endl;
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inFile, line))
    {
        content += line;
        if (!inFile.eof())
            content += "\n";
    }
    inFile.close();

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return 1;
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    outFile << content;
    outFile.close();

    return 0;
}
