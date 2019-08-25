#if defined (__GNUC__) || defined (__clang__) || defined (__MINGW32__) || defined (__MINGW64__)
#define __INPUTPATH__ "../input.txt"
#elif defined (_MSC_VER)
#define __INPUTPATH__ "input.txt"
#else
#define __INPUTPATH__ "input.txt"
#endif

#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    freopen(__INPUTPATH__, "r", stdin); // only for clion
    int TC;
    //ios::sync_with_stdio(false);cin.tie(0);cin >> TC;
    scanf(" %d", &TC);
    for(int tc = 1; tc <= TC; tc++){

    }
    return 0;
}