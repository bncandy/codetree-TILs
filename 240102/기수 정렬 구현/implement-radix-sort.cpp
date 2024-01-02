#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 각 자릿수에 따라 정렬하는 함수
void radixSort(vector<int>& arr) {
    int maxNum = *max_element(arr.begin(), arr.end());

    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        // 각 자릿수에 따라 버킷을 초기화
        vector<vector<int>> buckets(10, vector<int>());

        // 현재 자릿수에 따라 숫자를 버킷에 할당
        for (int i = 0; i < arr.size(); ++i) {
            buckets[(arr[i] / exp) % 10].push_back(arr[i]);
        }

        // 버킷에 있는 숫자들을 다시 배열에 합침
        arr.clear();
        for (int i = 0; i < 10; ++i) {
            arr.insert(arr.end(), buckets[i].begin(), buckets[i].end());
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    radixSort(arr);

    // 정렬된 배열을 출력
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}