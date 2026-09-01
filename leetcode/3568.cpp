class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();

        // Give every litter cell an index
        vector<vector<int>> id(m, vector<int>(n, -1));
        int cnt = 0;

        int sx, sy;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (classroom[i][j] == 'L') {
                    id[i][j] = cnt++;
                }
                if (classroom[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
            }
        }

        int fullMask = (1 << cnt) - 1;

        // best[x][y][mask] = maximum energy with which
        // we have reached (x,y) after collecting mask
        vector<vector<vector<int>>> best(
            m, vector<vector<int>>(n, vector<int>(1 << cnt, -1))
        );

        struct State {
            int x, y;
            int mask;
            int energy;
            int steps;
        };

        queue<State> q;

        best[sx][sy][0] = energy;
        q.push({sx, sy, 0, energy, 0});

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [x, y, mask, e, steps] = q.front();
            q.pop();

            if (mask == fullMask)
                return steps;

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                // Outside grid
                if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                    continue;

                // Wall
                if (classroom[nx][ny] == 'X')
                    continue;

                // Moving costs 1 energy
                if (e == 0)
                    continue;

                int ne = e - 1;
                int nmask = mask;

                // If we reach litter, collect it
                if (classroom[nx][ny] == 'L') {
                    nmask |= (1 << id[nx][ny]);
                }

                // Recharge at R
                if (classroom[nx][ny] == 'R') {
                    ne = energy;
                }

                // If we've already reached this state with
                // >= energy, this path is useless
                if (best[nx][ny][nmask] >= ne)
                    continue;

                best[nx][ny][nmask] = ne;

                q.push({
                    nx, ny, nmask, ne, steps + 1
                });
            }
        }

        return -1;
    }
};
