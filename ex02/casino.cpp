/*
** EPITECH PROJECT, 2020
** Hackathon1
** File description:
** casino
*/

#include "casino.hpp"

casino::casino(/* args */)
{
}

casino::~casino()
{
}

int thevalue(vector<int> value, int people)
{
    int index = 0;
    int comp = 0;
    int result = 0;
    while (index != people)
    {
        if (value[index] == value[index + 1])
            comp++;
        if (value[index] != value[index + 1] && result < comp) {
            result = comp + 1;
            comp = 0;
        }
        index++;
    }
    return result;
}

int casino::algo(int argc, char **argv)
{

    string line;
    ifstream myfile(argv[1]);
    vector<int> value;
    int people = 0;

    if (argc != 2)
    {
        cout << "use like this -->   ./program [file]" << endl;
        return (84);
    }
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            value.push_back(stoi(line));
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";

    people = value[0];
    cout << thevalue(value, people) << endl;

    return 0;
}

int main(int argc, char **argv)
{
    casino temp;
    temp.algo(argc, argv);
}