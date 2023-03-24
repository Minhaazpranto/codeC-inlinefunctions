#include<iostream>
using namespace std;

class NUMBER
{
public:
    int a, b, c;
    int getdata()
    {
        cout<<"Enter three numbers to check: "<<endl;
        cin >> a >> b >> c;
    }

    int print()
    {
        cout << "Maximum number is " << MAX(a, b, c) << endl;
        cout << "Minimum number is " << MIN(a, b, c) << endl;
    }

    inline int MAX(int x, int y, int z)
    {
        return (x > y && x > z) ? x : (y > z ? y : z);
    }
    inline int MIN(int x, int y, int z)
    {
        return (x < y && x < z) ? x : (y < z ? y : z);
    }
};

int main()
{
    NUMBER n;
    n.getdata();
    n.print();

    return 0;
}
