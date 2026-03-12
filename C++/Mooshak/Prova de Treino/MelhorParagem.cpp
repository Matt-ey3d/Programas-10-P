#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, Q, L, R, i, ii, cadaAldeia, aldeiasNoRange;
	vector<int> aldeias, output;

	cin >> N >> Q;
	for (i = 0; i < N; i++)
	{
		cin >> cadaAldeia;
		aldeias.push_back(cadaAldeia);
	}
	for (i = 0; i < Q; i++)
	{
		aldeiasNoRange = 0;
		cin >> L >> R;
		for (ii = 0; ii < N; ii++)
		{
			if (L <= aldeias.at(ii))
			{
				if (aldeias.at(ii) <= R)
				{
					++aldeiasNoRange;
				}
			}
		}
		output.push_back(aldeiasNoRange);
	}
	cout << endl;
	for (i = 0; i < Q; i++)
	{
		cout << output.at(i) << endl;
	}

	return 0;
}
