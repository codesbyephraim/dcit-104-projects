#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;
    int reach;
    cout << "Input your number: ";
    cin >> reach;
    int sum = 0;
    for(num = 2; num <= reach; num++)
    {

        for(i = 2; i <= (num / 2); i++)
        {

            if(num % i == 0)
            {
                i = num;
                break;
            }
        }
        if(i != num)
        {
            sum += num;
        }
    }

    cout << sum << endl;

    return 0;
}
