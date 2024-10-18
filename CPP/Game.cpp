#include <iostream>
using namespace std;
int main()
{
    string a;
    string b;
    string c;

    cout << "Hello! Lets Play A Game! Solve All The Puzzles!" << endl;
    cout << "Type Play To Start! If You Can't Do It, then You Need Help!";
    cin >> a;

    if (a == "Help")
    {
        cout << "What?? You got Past The First Puzzle! Wow!" << endl;
        cout << "Ok Ok, Now Lets Move On! Type Next To Go To The Newx Level! XD" << endl;
        cin >> b;
    }
    else
    {
        "Oops Mistakes! Check Again! bye!";
    }

    if (b == "XD")
    {
        cout << "Wha- Wha- WHAT? HOW? YOUR SOO GOOD!. But Lets Move On! :]. Type Next Again To go!" << endl;
        cin >> c;
    }
    else
    {
        cout << "AHH! GOT U!";
    }
}