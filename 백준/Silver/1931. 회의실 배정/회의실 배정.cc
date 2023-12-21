#include <bits/stdc++.h>
using namespace std;

struct Meeting {
    int start, end;
};

bool compare(Meeting a, Meeting b) {
    if (a.end == b.end) return a.start < b.start;
    return a.end < b.end;
}

int main() {
    int N;
    cin >> N;

    vector<Meeting> meetings(N);
    for (int i = 0; i < N; ++i)
        cin >> meetings[i].start >> meetings[i].end;

    sort(meetings.begin(), meetings.end(), compare);

    int count = 0;
    int currentTime = 0;
    for (int i = 0; i < N; ++i) {
        if (meetings[i].start >= currentTime) {
            currentTime = meetings[i].end;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
