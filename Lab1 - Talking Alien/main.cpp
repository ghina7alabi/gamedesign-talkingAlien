#include <iostream>
#include <string>

using namespace std;

string alienName = "Vluatha";
int alienAge = 1532;

int main()
{
    cout << "My name is " << alienName << endl;
    cout << "I think I'm " << alienAge << " years old." << endl;
    cout << "Well, at least that's what the stars say when I count them." << endl;
    cout << "" << endl;
    cout << "Wait, look, I can prove I can count." << endl;

    for (int n = 1; n < 11; n++)
    {
        cout << n << endl;
    }

    cout << "See, I told you!" << endl;
    cout << "" << endl;
    cout << "You're probably wondering if I count the stars one by one right?" << endl;
    cout << "Well, I don't, I can count even numbers duh! It makes the work easier to count 'em." << endl;
    cout << "" << endl;
    cout << "Come on, admit it! I'm smart." << endl;

    for (int n = 0; n < 15; n += 2)
    {
        cout << n << endl;
        if (n == 0)
        {

            cout << "Smarter than you.." << endl;
        }
        if (n == 2)
        {
            cout << "you stupid lil' human.." << endl;
        }
        if (n == 4)
        {
            cout << "you watch the stars admiringly.." << endl;
        }
        if (n == 6)
        {
            cout << "WELL, THEY ARE OUR EVIL CREATIONS!" << endl;
        }
        if (n == 8)
        {
            cout << "AND WE WILL LL DESTROY YOU WITH THEM!!" << endl;
        }
        if (n == 10)
        {
            cout << "MUA" << endl;
        }
        if (n == 12)
        {
            cout << "HAAA" << endl;
        }
        if (n == 14)
        {
            cout << "HAAAAAA!!" << endl;
        }
    }



    return 0;
}
