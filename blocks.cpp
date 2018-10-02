#include <iostream>

using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long  n_numer = n / a;
    long long  m_numer = m / a;

    if (n_numer * a < n)
        n_numer++;
    if (m_numer * a < m)
        m_numer++;
    
    cout << n_numer * m_numer << endl;
    return 0;
}
