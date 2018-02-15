#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    std::stack<int> pile;
    std::queue<int> file;

    for (int i=1; i<= 10; i++)
    {
        pile.push(i);
    }
    cout << "Pop";
    while(!pile.empty())//Tant que pas la file est vide == tant que la file n'est pas vide
    {
        std::cout << ' ' << pile.top();
        pile.pop();
    }
    std::cout << "\n";

    for (int i=1; i<= 10; i++)
    {
        file.push(i);
    }
    cout << "Pop";
    while(!file.empty())
    {
        std::cout << ' ' << file.front();
        file.pop();
    }
    std::cout << "\n";

    std::list<int> myNumbers;

    srand(time(NULL));
    for (int i=1; i<= 10; i++)
    {
        myNumbers.push_back(rand()%100);
    }
       while(!myNumbers.empty())
    {
        std::cout << ' ' << myNumbers.front();
        myNumbers.pop_front();
    }

    for (std::list<int>::iterator it = myNumbers.begin(); it!=myNumbers.end(); ++it)
    {

        cout << *it << endl;
    }



    return 0;
}
