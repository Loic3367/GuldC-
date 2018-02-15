#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    std::fstream file;
    file.open("C:/Users/adai103/Documents/test2.txt", std::fstream::in | std::fstream::out | std::fstream::app | std::fstream::binary);
    string cara;
    std::cin >> cara;
    file << cara << endl;
    /*
    file.seekg (0);
    int length = file.tellg();
    file.seekg(0,file.beg);
    //Allocate memory
    char * buffer = new char [length];
    file.close();
    */
    file.clear();
    string content;
    //std::fstream file1;
    //file1.open("C:/Users/adai103/Documents/test2.txt", std::fstream::in | std::fstream::out | std::fstream::app);

    while (getline(file, cara) != NULL)
    {
        cout << cara << endl;
    }


    file.close();
    return 0;
}
