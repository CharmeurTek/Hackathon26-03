/*
** EPITECH PROJECT, 2020
** Hackathon1
** File description:
** theclass
*/

#ifndef theclass_HPP_
#define theclass_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class theclass
{
private:
    int rose = 0;
    int jaune = 0;
    int violet = 0;
    int bleu = 0;
    int vert = 0;
    int rouge = 0;
public:
    theclass();
    ~theclass();
    int algo(int argc, char **argv);
    void check_color(string value);
    string firstcolor(void);
    string secondcolor(string);
};

#endif /* !theclass_HPP_ */
