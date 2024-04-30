#define ll long long int
class Solution {
public:
    long long wonderfulSubstrings(string word) {
            vector<ll> freq(1024, 0); // Bitmask to store the parity of letter frequencies
    freq[0] = 1; // Empty substring is wonderful

    ll mask = 0; // Initialize bitmask
    ll result = 0;

    for (char c : word) {
        mask ^= (1 << (c-'a')); // Toggle the bit corresponding to the current character

        // Count wonderful substrings with even parity
        result+=freq[mask];

        // Count wonderful substrings with odd parity
        for (int i = 0; i < 10; ++i) {
            ll oddMask = mask ^ (1 << i);
            result+=freq[oddMask];
        }

        // Update the frequency bitmask
        freq[mask]++;
    }

    return result;
    }
};