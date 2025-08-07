#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Your homework is bad. Really bad.");
    int a;
    while ( s.find("bad") != string::npos)
        s.replace(s.find("bad"), 3, "good");
    cout << s << endl;

    return 0;
}
/*class Solution {
public:
    static bool closeStrings(const string &word1, const string &word2) {
        constexpr uint8_t ASIZE = 26, CMASK = 0x1Fu;
        constexpr uint64_t BIAS64 = 0x6161616161616161ull;
        const unsigned n = word1.length(), n64 = n >> 3;
        const char *const w1 = word1.c_str(), *const w2 = word2.c_str();
        const uint64_t *const w1q = reinterpret_cast<const uint64_t*>(w1),
                       *const w2q = reinterpret_cast<const uint64_t*>(w2);
        if (n != word2.length()) return false;
        unsigned freqs1[ASIZE] = {}, freqs2[ASIZE] = {};
        for (unsigned i64 = 0; i64 < n64; i64++) {
            const uint64_t v1 = w1q[i64] - BIAS64;
            freqs1[v1 & CMASK]++;
            freqs1[(v1 >> 8) & CMASK]++;
            freqs1[(v1 >> 16) & CMASK]++;
            freqs1[(v1 >> 24) & CMASK]++;
            freqs1[(v1 >> 32) & CMASK]++;
            freqs1[(v1 >> 40) & CMASK]++;
            freqs1[(v1 >> 48) & CMASK]++;
            freqs1[v1 >> 56]++;
            const uint64_t v2 = w2q[i64] - BIAS64;
            freqs2[v2 & CMASK]++;
            freqs2[(v2 >> 8) & CMASK]++;
            freqs2[(v2 >> 16) & CMASK]++;
            freqs2[(v2 >> 24) & CMASK]++;
            freqs2[(v2 >> 32) & CMASK]++;
            freqs2[(v2 >> 40) & CMASK]++;
            freqs2[(v2 >> 48) & CMASK]++;
            freqs2[v2 >> 56]++;
        }
        for (unsigned i = n64 << 3; i < n; i++) {
            freqs1[w1[i]-'a']++;
            freqs2[w2[i]-'a']++;
        }
        for (uint8_t c = 0; c < ASIZE; c++) {
            const auto f1 = freqs1[c];
            auto &f2 = freqs2[c];
            if (f1 == f2) continue;
            if (f1 == 0 || f2 == 0) return false;
            auto fw = f2;
            uint8_t d;
            for (d = c + 1u; d < ASIZE; d++) {
                auto &f1d = freqs1[d], &f2d = freqs2[d];
                if (f1d != f2d) {
                    if (f1 == f2d) break;
                    if (f1d == fw) swap(f2d, fw);
                }
            }
            if (d >= ASIZE) return false;
            f2 = freqs2[d];
            freqs2[d] = fw;
        }
        return true;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();*/