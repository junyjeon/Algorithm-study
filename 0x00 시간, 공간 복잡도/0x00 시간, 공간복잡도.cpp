#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// 문제 1
// N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
// 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.

// func1(16) = 60,
// func1(34567) = 278812814,
// func1(27639) = 178254968

int func1(int N)
{
	int sum = 0;
    for (int i = 1; i < N; ++i) {
        if (i % 3 == 0 || i % 5 == 0)
           sum += i; 
    }

    return (sum);
}

int main(void)
{
	fast_io;
    cout << func1(16);
	return 0;
}