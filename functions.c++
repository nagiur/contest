// sorting a long string
void str_sort(string str, long long len) {
    long long feq[26];

    for (int i = 0; i < 26; i++) {
        feq[i] = 0;
    }

    for (ll i = 0; i < len; i++) {
        feq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (feq[i] != 0) {
            char ch = i + 'a';
            // cout << ch << " - " << feq[i] << "\n";
            for (int j = 0; j < feq[i]; j++) {
                cout << ch;
            }
        }
    }
    cout << endl;
}
