#include <iostream>
#include <string>
#include <fstream>

int main()
{   
    int count = 0, aimcount = 0;
    const std::string looked_for = "If";
    std::ifstream fin;
    fin.open("if.txt");
    std::string a[300];
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> a[count];
            count++;
         }
        for (int i = 0; i <=count; i++)
        {
            if (a[i] == looked_for)
            {
                aimcount++;
            }
        }
        fin.close();
    }
    else
    {
        std::cout << "some problem";
    }
    std::cout << aimcount;
}