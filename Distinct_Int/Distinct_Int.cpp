#include <iostream>
using namespace std;

int main() {
    int N, S, P, Q;
    cin >> N >> S >> P >> Q;
    const long long MOD = (1LL << 31);
    bool visited[MOD] = {false};
    
    long long current = S % MOD;
    int distinctCount = 0;

    for (int i = 0; i < N; ++i) {
        if (!visited[current]) {
            visited[current] = true;
            ++distinctCount;
        } else {
            break; // Cycle detected
        }
        current = (current * P + Q) % MOD;
    }
    cout << distinctCount << endl;
    return 0;
}
