/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 22:37:02 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/17 00:18:01 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "bad number of arguments" << std::endl;
        return (1);
    }

    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1 == "" || s2 == "" || fileName == "")
    {
        std::cout << "a string is empty" << std::endl;
        return (1);
    }
    std::ifstream inFile;
    inFile.open(av[1]);
    if (!inFile)
    {
        std::cout << "Unable to open file : " << av[1] << std::endl;
        return (1);
    }
    std::ofstream outFile;
    std::string outName = av[1];
    outName += ".replace";
    outFile.open(outName);
    if (!outFile)
    {
        std::cout << "Unable to open file" << outName;
        inFile.close();
        return (1);
    }
    std::string line;
    std::size_t found_pos;
    std::string out;
    int i;
    while (getline(inFile, line))
    {
        i = 0;
        found_pos = line.find(s1, i);
        while (found_pos != std::string::npos)
        {
            out.append(line, i, found_pos - i);
            out.append(s2);
            i = found_pos + s1.length();
            found_pos = line.find(s1, i);
        }
        out.append(line, i);
        outFile << out << std::endl;
        out = "";
    }
    outFile.close();
    inFile.close();
}