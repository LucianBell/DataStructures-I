#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

struct team
{
    string country;
    int gold_medals;
    int silver_medals;
    int bronze_medals;
};

bool ordena(const team &d1, const team &d2)
{
    return (d1.gold_medals > d2.gold_medals) ||
           (d1.gold_medals == d2.gold_medals && d1.silver_medals > d2.silver_medals) ||
           (d1.gold_medals == d2.gold_medals && d1.silver_medals == d2.silver_medals && d1.bronze_medals > d2.bronze_medals) ||
           (d1.gold_medals == d2.gold_medals && d1.silver_medals == d2.silver_medals && d1.bronze_medals == d2.bronze_medals && d1.country < d2.country);
}

main()
{
    int num_teams;

    cin >> num_teams;
    team array[num_teams] = {};

    for (int i = 0; i < num_teams; i++)
    {
        cin >> array[i].country >> array[i].gold_medals >> array[i].silver_medals >> array[i].bronze_medals;
    }

    sort(array, array + num_teams, ordena);

    for (int i = 0; i < num_teams; i++)
    {
        cout << array[i].country << " " << array[i].gold_medals << " " << array[i].silver_medals << " " << array[i].bronze_medals << endl;
    }

    return 0;
}
