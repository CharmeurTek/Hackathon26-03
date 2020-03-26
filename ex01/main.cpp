/*
** EPITECH PROJECT, 2020
** Hackathon1
** File description:
** main
*/

#include "main.hpp"

theclass::theclass(/* args */)
{
}

theclass::~theclass()
{
}

void theclass::check_color(string value)
{
    if (!value.compare("rose"))
        this->rose++;
    else if (!value.compare("jaune"))
        this->jaune++;
    else if (!value.compare("violet"))
        this->violet++;
    else if (!value.compare("bleu"))
        this->bleu++;
    else if (!value.compare("vert"))
        this->vert++;
    else if (!value.compare("rouge"))
        this->rouge++;
}

string theclass::firstcolor(void)
{
    int thevalue = 0;
    string first;

    if (thevalue < rose) {
        thevalue = this->rose;
        first = "rose";
    }
    if (thevalue < jaune) {
        thevalue = jaune;
        first = "jaune";
    }
    if (thevalue < violet) {
        thevalue = violet;
        first = "violet";
    }
    if (thevalue < bleu) {
        thevalue = bleu;
        first = "bleu";
    }
    if (thevalue < vert) {
        thevalue = vert;
        first = "vert";
    }
    if (thevalue < rouge) {
        thevalue = rouge;
        first = "rouge";
    }
    return (first);
}

string theclass::secondcolor(string first)
{
    int thevalue = 0;
    string second;

    if (thevalue < rose && first.compare("rose")) {
        thevalue = this->rose;
        second = "rose";
    }
    if (thevalue < jaune && first.compare("jaune")) {
        thevalue = jaune;
        second = "jaune";
    }
    if (thevalue < violet && first.compare("violet")) {
        thevalue = violet;
        second = "violet";
    }
    if (thevalue < bleu && first.compare("bleu")) {
        thevalue = bleu;
        second = "bleu";
    }
    if (thevalue < vert && first.compare("vert")) {
        thevalue = vert;
        second = "vert";
    }
    if (thevalue < rouge && first.compare("rouge")) {
        thevalue = rouge;
        second = "rouge";
    }
    return (second);
}

int theclass::algo(int argc, char **argv)
{
    string line;
    ifstream myfile(argv[1]);
    vector<string> value;
    string first;
    string second;
    int people = 0;
    int index = 1;

    if (argc != 2) {
        cout << "use like this -->   ./program [file]" << endl;
        return (84);
    }
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            value.push_back(line);
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";
    people = stoi(value[0]);

    while (index != people + 1)
    {
        check_color(value[index]);
        index = index + 1;
    }
    first = firstcolor();
    second = secondcolor(first);

    cout << first << " " << second <<  endl;

    return 0;
}

int main(int argc, char **argv)
{
    theclass temp;
    temp.algo(argc, argv);
}