#include <iostream>
#include <vector>

using namespace std;

/**
 * Problem from: Codeforces Round 715 (Div. 2)
 * 
 * This is a very simple problem. It basically says that given some heights (numbers separated by spaces), print consecutive pairs of numbers, such as each pair should follow
 * the rule that the average of the pair is a whole number ( (n1 + n2) / 2 = integer ).
 * 
 * For the averages of two numbers to be whole, both numbers need to be either even or odd, so basically the problem is just making you print all the odd numbers together
 * and then print the even numbers together (first the odd because in the examples the odds come first, but in the problem it is not specified any order).
*/

int main()
{
    int numberOfCases;
    scanf("%d", &numberOfCases);

    vector<int> evens;

    int councilSize;
    int currentNumber;

    while (numberOfCases--)
    {
        scanf("%d", &councilSize);
        for (int i = 0; i < councilSize; i++)
        {
            scanf("%d", &currentNumber);

            if (currentNumber % 2 == 0)
            {
                evens.push_back(currentNumber);
            }
            else
            {
                printf("%d ", currentNumber);
            }
        }

        for (auto i : evens)
        {
            printf("%d ", i);
        }
        printf("\n");
        evens.clear();
    }

}