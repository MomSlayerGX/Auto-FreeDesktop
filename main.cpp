#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<typeinfo>
#include<fstream>

std::ofstream config;


using namespace std;

bool hasRun(false);

    void runOnlyOnce()
        {
        config.open("config.txt");
        std::string locationDesktopFile;

        cout << "Hi, where is the location of .desktop files?";
        std::getline(std::cin,locationDesktopFile); 
        config << "location=" << locationDesktopFile;
        if(!config)
            {
                clog << "Oh no, something went wrong!";
                cerr << "Error: File not found.";
            }
        config.close();




        }

    int main()
    {   
        runOnlyOnce();
        hasRun = true;
        cout << 

        return 0;    
    }


    

    
