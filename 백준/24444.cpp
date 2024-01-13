#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool visited[100000];
vector<int> arr[100000];
int result[100000];
int cnt = 1;

void bfs(int r)
{
	queue<int> q;
	q.push(r);	//ù ��� ����
	visited[r] = true;

	while (!q.empty())	//ť�� �� ������ �ݺ�
	{
		int x = q.front();	//ť���� ���� �տ� �ִ� �� ����
		q.pop();
		result[x] = cnt;
		cnt++;
		for (int i = 0; i < arr[x].size(); i++)	//�ش� ���ҿ� ���� && ���� �湮���� ���� ���� ť�� ����
		{
			if (!visited[arr[x][i]])
			{
				q.push(arr[x][i]);
				visited[arr[x][i]] = true;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, r;
	
	cin >> n >> m >> r;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a - 1].push_back(b - 1);
		arr[b - 1].push_back(a - 1);
	}
	for (int i = 0; i < n; i++)
		sort(arr[i].begin(), arr[i].end());
	bfs(r - 1);
	for (int i = 0; i < n; i++)
		cout << result[i] << "\n";
	return (0);
}