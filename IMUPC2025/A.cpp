#include <cmath>
#include <iostream>
#include <string>

using namespace std;

struct Team {
    string name;
    string formation;
    int score = 0;

    void set_score() {
        score = 0;
        int i = formation.length() - 1;

        for (char c : formation) {
            if (i == 0) {
                break;
            }
            int bit = c == '1' ? 1 : 0;
            score += bit * pow(2, i);
            i--;
        }
    }
};

struct Match {
    Team& team1;
    Team& team2;

    void evaluate_score() {
        for (int i = 0; i < team1.formation.length(); i++) {
            if (team1.formation[i] == team2.formation[i] && team1.formation[i] == '1') {
                team1.formation[i] = '0';
                team2.formation[i] = '0';
            } else if (team1.formation[i] != team2.formation[i]) {
                char temp = team1.formation[i];
                team1.formation[i] = team2.formation[i];
                team2.formation[i] = temp;
            }
        }
    }
};

int main() {

    int T;

    cin >> T;

    while(T--) {
        int N, X, M;
        cin >> N >> X;

        Team teams[N];

        for(int i=0; i<N; i++) {
            cin >> teams[i].name >> teams[i].formation;
        }

        cin >> M;
        string matches[M][2];

        for(int i=0; i<M; i++) {
            cin >> matches[i][0] >> matches[i][1];
        }

        for(int i=0; i<M; i++) {
            for(auto &team: teams) {
                if(team.name == matches[i][0]) {
                    for(auto &opponent: teams) {
                        if(opponent.name == matches[i][1]) {
                            Match match{team, opponent};
                            match.evaluate_score();
                            break;
                        }
                    }
                }
            }
        }

        for(auto& team: teams) {
            team.set_score();
        }

        int i=1;

        for(auto& team: teams) {
            cout << i << ". " << team.name << " " << team.score << endl;
            i++;
        }
    }
}
