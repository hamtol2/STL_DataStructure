#include <vector>
#include <iostream>

int main()
{
	// vector ���� ����.
	std::vector<int> vector;

	// ������� Ȯ��.
	//if (vector.size() == 0)
	if (vector.empty())
	{
		std::cout << "vector�� �����.\n";
	}

	// �ڷ� ����.
	for (int ix = 0; ix < 1000; ++ix)
	{
		//vector.push_back(ix + 1);
		vector.emplace_back(ix + 1);
	}

	// ��� ����.
	for (auto it = vector.begin(); it != vector.end();)
	{
		it = vector.erase(it);
		if (it != vector.end())
		{
			++it;
		}
	}

	// TArray / std::vector
	size_t size = vector.size();
	for (int ix = 0; ix < (int)vector.size(); ++ix)
	{
		std::cout << vector[ix] << " ";
	}
	//auto test = vector[10];

	//for (int ix = 0; ix < 1000; ix += 10)
	//{
	//	// ������ ���ϴ� ��ġ�� �ݺ���(iterator) ����.
	//	auto iterator = vector.begin() + ix;

	//	// �տ��� ���� �ݺ��ڸ� Ȱ���� �迭 ���� ����.
	//	vector.erase(iterator);
	//}

	// ��� �Ұ�.
	// ���� ���� ������ �������� ��쿡�� delete�� �ؾ���.
	vector.clear();

	// ������� Ȯ��.
	if (vector.empty())
	{
		std::cout << "vector�� �����.\n";
	}

	// ũ�� ����.
	vector.resize(0);

	// ���� Ȯ��.
	// ���Ҵ� ���� ���� / ���� ����ȭ.
	vector.reserve(0);

	// ũ�� ���� �� ���.
	vector.shrink_to_fit();

	std::cin.get();
}