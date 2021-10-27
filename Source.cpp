#include <iostream>

using namespace std;

int nsd(int n, int m)
{
    if (m == 0)
        return n;
    else
    {
        int r = n % m;
        return nsd(m, r);
    }
}
int main()
{
    int n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    cout << "NSD = " << nsd(n, m) << endl;

}