#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>

#define inf 100000000

using namespace std;

typedef pair<int, int> pii;

map<pii, int> mp;

double getDist(pii a, pii b)
{
	int x = a.first - b.first;
	int y = a.second - b.second;

	return (double)(x*x + y*y);
}

int main()
{
	int n;
	scanf("%d", &n);

	vector<pii> vc;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		vc.push_back({ x,y });
	}

	// x�� ���� ����
	sort(vc.begin(), vc.end());

	// ó�� �� �� map�� �߰�(y, x ����)
	mp[{vc[0].second, vc[0].first}] = 1;
	mp[{vc[1].second, vc[1].first}] = 1;

	// �ּڰ� �ʱ�ȭ
	double ans = getDist(vc[0], vc[1]);

	int last = 0;

	for (int i = 2; i < n; i++)
	{
		// while���� �ּڰ����� x���� �Ÿ��� �� ū ���� �����ϴ� ����
		// x���� �Ÿ��� �ּڰ� ���� �� ũ�� y���� ���� �ʿ䰡 ����.
		while (last < i)
		{
			// i > last
			int dx = vc[i].first - vc[last].first;

			// �ּڰ��� �� ũ�ų� ������ break;(�˻翩�� ����)
			if (dx * dx <= ans)
				break;

			// �ּڰ� ���� �� ū last�� �ش��ϴ� mp�� ����
			mp.erase({ vc[last].second, vc[last].first });
			last++;
		}

		// ans�� ���� �Ÿ�
		int limit = sqrt(ans);

		// y��ǥ�� ���� �� ���� �˰��ִ� �ּڰ� �������� ���� �� �ִ� ���� ����
		auto lo = mp.lower_bound({ vc[i].second - limit, -inf });
		auto up = mp.upper_bound({ vc[i].second + limit,  inf });

		// �� ���� ������ �ּڰ�
		for (auto it = lo; it != up; it++)
			ans = min(ans, getDist({ it->first.second, it->first.first }, vc[i]));

		// map�� �߰�
		mp[{vc[i].second, vc[i].first}] = 1;
	}

	printf("%d", (int)ans);
	return 0;
}
