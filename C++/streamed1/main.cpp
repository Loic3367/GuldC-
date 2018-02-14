#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
    srand(time(NULL));
    std::fstream file;
    file.open("C:/Users/adai103/Documents/test1.txt", std::fstream::in);

    std::vector<string> vec;
    std::string content;

    while(getline(file, content) != NULL)
    {
    cout << content << endl;
    vec.push_back(content);
    }

    int test10 = rand()%10;

    cout << test10 <<endl;

    string myWord = vec.at(test10);

    std::cout << std::endl << "Word : " << myWord << std::endl;

    //Boucler sur le nombre de lettres du mot

    //Le joueur entre un caractère
    char cara;
    std::cout << "Veuillez entrer un charactere\n";

    std::cin >> cara;


    int f;
    //Vérifier si le caractère existe dans le mot
    for(int it = 0; it < myWord.length(); it++)
    {
        if(myWord.at(it) == cara || myWord.at(it) <= myWord.length())
        {
            std::cout << "Le caractere tape correspond au " << myWord.find(myWord.at(it))+1 << "eme caractere" << std::endl;
            //int l = myWord.find(myWord.at(it))+1;

            f = myWord.find(myWord.at(it))+1;

            //assert(f < myWord.size());

            /*if(myWord.at(f) == cara)
            {
                  std::cout << "Le caractère tape correspond au " << myWord.find(myWord.at(it), f)+1 << "eme caractere" << std::endl;
            }
            */
            break;
        }


    }

    //string test = rand()(getline(file,content));

    //cout << test << endl;

    system("pause");
    return 0;
}
