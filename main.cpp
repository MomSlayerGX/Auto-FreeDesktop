#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<typeinfo>
#include<fstream>

std::fstream config;


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::clog;
using std::cerr;

bool hasRun(false);

string str;
string path;
int limitWhileLoop{0};

    void checkIsPresent()
    {
        config.open("config.txt", std::ios::in);
        if(config.is_open())
        {
            while(limitWhileLoop <= 3)
            {   config << path;
                limitWhileLoop =+ 1;
            }
        if(path *"desktop=")
        }
    }
    void runOnlyOnce()
        {
        config.open("config.txt",std::ios::app);
        std::string locationDesktopFile;
        if(config.is_open())
            {
            cout << "Hi, where is the location of .desktop files?";
            std::getline(std::cin,locationDesktopFile); 
            config << "location=" << locationDesktopFile << endl;
            }

        else
            {
            clog << "Oh no, something went wrong!";
            cerr << "Error: File not found.";
            }
        config.close();




        }

    int main()
    {   
        if (hasRun == false)
            {
                runOnlyOnce();
            }
        config.open("config.txt",std::ios::in);
        hasRun = true;
        
		config >> str;
			
    
        
        cout << str;    


        return 0;    
    }


    

    
