#include <iostream>
#include <map>

using namespace std;

map <tuple <int, int, int>, int> results;

int count_combinations(int n, int k, int m);

int main()
{
    int n, k, m;

    scanf("%d %d %d", &n, &k, &m);

    while (n != EOF)
    {
        // Minus 1 because we shall not count the 1 that always is on the left
        printf("%d\n", count_combinations(n - 1, k, m));

        scanf("%d %d %d", &n, &k, &m);
    }

    return 0;
}

int count_combinations(int n, int k, int m)
{
    if (n < k || (k == 0 && n > 0))
    {
        return 0;
    }
    else if (n == k)
    {
        return 1;
    }

    // Plusm 1 to account for the 1 in the left
    tuple <int, int, int> currentCombination = make_tuple(n + 1, k, m);

    if (results.count(currentCombination) != 0)
    {
        return results[currentCombination];
    }

    int numberOfCombs = 0;

    for (int i = 1; i <= m; i++)
    {
        numberOfCombs += count_combinations(n - i, k - 1, m);
    }

    results[currentCombination] = numberOfCombs;
    return numberOfCombs;
    
}