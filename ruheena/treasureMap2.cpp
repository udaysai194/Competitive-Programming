#include<iostream>
#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

struct piece {
    int ind;
    vector<vector<int>> box;
    string leftBorder = "";
    string rightBorder = "";
    string topBorder = "";
    string bottomBorder = "";
};

void solve() {
    int n, k;
    cin >> n >> k;
    int rowSize, colSize;
    rowSize = colSize = (n-1)/(k+1);
    int count = 1;
    unordered_map<string, int> mpT, mpB, mpL, mpR;

    struct piece pieces[rowSize*colSize];

    for(int i = 0; i < rowSize*colSize; i++) {
        pieces[i].ind = i;
        for(int l = 0; l < k+2; l++) {
            vector<int> row(k+2);
            for(int m = 0; m < k+2; m++) {
                cin >> row[m];
            }
            pieces[i].box.push_back(row);
        }

        //topborder 
        for(int l = 0; l < k+2; l++) {
            pieces[i].topBorder.push_back(pieces[i].box[0][l]+'0');
        }

        //bottomBorder
        for(int l = 0; l < k+2; l++) {
            pieces[i].bottomBorder.push_back(pieces[i].box[k+1][l]+'0');
        }

        //leftBorder
        for(int l = 0; l < k+2; l++) {
            pieces[i].leftBorder.push_back(pieces[i].box[l][0]+'0');
        }

        //rightBorder
        for(int l = 0; l < k+2; l++) {
            pieces[i].rightBorder.push_back(pieces[i].box[l][k+1]+'0');
        }

        //mapping
        mpT[pieces[i].topBorder] = i;
        mpL[pieces[i].leftBorder] = i;
        mpR[pieces[i].rightBorder] = i;
        mpB[pieces[i].bottomBorder] = i;

    }

    vector<vector<int>> pieceBox(rowSize, vector<int> (colSize, -1));

    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            if(i == 0 && j == 0) {
                for(auto eachPiece : pieces) {
                    if(mpB.find(eachPiece.topBorder) == mpB.end() &&
                        mpR.find(eachPiece.leftBorder) == mpR.end()) {
                            pieceBox[i][j] = eachPiece.ind;
                            break;
                        }
                }
            } else if(j == 0) {
                pieceBox[i][j] = mpT[(pieces[pieceBox[i-1][j]].bottomBorder)];
            } else {
                pieceBox[i][j] = mpL[(pieces[pieceBox[i][j-1]].rightBorder)];
            }
        }
    }

    vector<vector<int>> finalBox(n, vector<int> (n));

    //setup last final box
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            for(int l = 0; l < k+1; l++) {
                for(int m = 0; m < k+1; m++) {
                    finalBox[i*(k+1)+l][j*(k+1)+m] = pieces[pieceBox[i][j]].box[l][m];
                }
            }

            if(j == colSize-1) {
                for(int l = 0; l < k+1; l++) {
                    finalBox[i*(k+1)+l][n-1] = pieces[pieceBox[i][j]].box[l][k+1];
                }
            }

            if(i == rowSize-1) {
                for(int m = 0; m < k+1; m++) {
                    finalBox[n-1][j*(k+1)+m] = pieces[pieceBox[i][j]].box[k+1][m];
                }
            }
        }
    }

    //printing 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << finalBox[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}