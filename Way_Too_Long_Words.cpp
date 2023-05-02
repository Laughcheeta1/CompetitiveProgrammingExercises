#include <iostream>
#include <cstring>

using namespace std;

const int8_t tooLong = 10;

string makeTheAbreviation(string word, int size)
{
    cout << "starting process";
    cout << word[0] + to_string(size) + word[size - 1];
    cout << "finalized process";
} 

int main()
{
    // Get the number of inputs
    int8_t numberOfLines;
    cout << "enter number of lines: ";
    scanf("%d", &numberOfLines);

    string h;

    for (int i = 0; i < numberOfLines; i++)
    {
        cout << "enter the word: ";
        scanf("%s", &h);

        int size = h.size();

        if (size > tooLong)
        {
            cout << "in the procces";
            //cout << "too large";
            string yes = makeTheAbreviation(h, size);
            printf("%s\n", yes);
            cout << "that is the result";
        }
        else
        {
            //cout << "normal size";
            printf("%s\n", h);
        }
    }

    return 0;
}

