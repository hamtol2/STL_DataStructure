#include <vector>
#include <iostream>

int main()
{
	// vector 변수 선언.
	std::vector<int> vector;

	// 비었는지 확인.
	//if (vector.size() == 0)
	if (vector.empty())
	{
		std::cout << "vector가 비었음.\n";
	}

	// 자료 삽입.
	for (int ix = 0; ix < 1000; ++ix)
	{
		//vector.push_back(ix + 1);
		vector.emplace_back(ix + 1);
	}

	// 요소 삭제.
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
	//	// 삭제를 원하는 위치의 반복자(iterator) 저장.
	//	auto iterator = vector.begin() + ix;

	//	// 앞에서 구한 반복자를 활용해 배열 원소 삭제.
	//	vector.erase(iterator);
	//}

	// 모두 소거.
	// 내부 저장 변수가 포인터인 경우에는 delete를 해야함.
	vector.clear();

	// 비었는지 확인.
	if (vector.empty())
	{
		std::cout << "vector가 비었음.\n";
	}

	// 크기 조정.
	vector.resize(0);

	// 공간 확보.
	// 재할당 방지 목적 / 공간 최적화.
	vector.reserve(0);

	// 크기 줄일 때 사용.
	vector.shrink_to_fit();

	std::cin.get();
}