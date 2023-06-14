#include <bits/stdc++.h>
using namespace std;

#define INF 99999

void printSolution(vector<vector<int>> &dist, int V);

void floydWarshall(vector<vector<int>> &dist, int V)
{

	int i, j, k;

	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	//printSolution(dist, V);
}

/* A utility function to print solution */
void printSolution(vector<vector<int>> &dist, int V)
{
	cout << "The following matrix shows the shortest "
			"distances"
			" between every pair of vertices \n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver's code
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int V, E, start;
        cin >> V >> E;

        vector<vector<int>> graph(V, vector<int> (V));

        for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++) {
            if(i == j) graph[i][j] = 0;
            else       graph[i][j] = INF;
        }

        for(int i = 0; i < E; i++) {
            int u, v, c;
            cin >> u >> v >> c;
            graph[u-1][v-1] = c;
        }

        cin >> start;

        floydWarshall(graph, V);

        long long int sum = 0;

        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(i == start-1 || j == start-1)    sum += graph[i][j];
            }
        }

        cout << sum;
    }

	return 0;
}

// This code is contributed by Mythri J L
