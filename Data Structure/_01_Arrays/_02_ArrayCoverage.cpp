#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

    /*--------------------------------------------------
      1. Declaration and Initialization
    --------------------------------------------------*/
    array<int, 5> arr1 = {10, 20, 30, 40, 50};
    array<int, 5> arr2;                 // uninitialized
    array<int, 5> arr3{};               // initialized with zeros

    cout << "Initial arr1: ";
    for (int x : arr1) cout << x << " ";
    cout << "\n\n";

    /*--------------------------------------------------
      2. Size-related functions
    --------------------------------------------------*/
    cout << "Size of arr1      : " << arr1.size() << endl;
    cout << "Max size of arr1  : " << arr1.max_size() << endl;
    cout << "Is arr1 empty?    : " << (arr1.empty() ? "Yes" : "No") << "\n\n";

    /*--------------------------------------------------
      3. Element access methods
    --------------------------------------------------*/
    cout << "operator[] (index 2): " << arr1[2] << endl;
    cout << "at() (index 3)     : " << arr1.at(3) << endl;
    cout << "front()            : " << arr1.front() << endl;
    cout << "back()             : " << arr1.back() << endl;
    cout << "data()[1]          : " << *(arr1.data() + 1) << "\n\n";

    /*--------------------------------------------------
      4. Iterator usage
    --------------------------------------------------*/
    cout << "Using iterator (begin to end): ";
    for (auto it = arr1.begin(); it != arr1.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Using const_iterator: ";
    for (auto it = arr1.cbegin(); it != arr1.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Using reverse_iterator: ";
    for (auto it = arr1.rbegin(); it != arr1.rend(); ++it)
        cout << *it << " ";
    cout << "\n\n";

    /*--------------------------------------------------
      5. Modifiers
    --------------------------------------------------*/
    arr2.fill(100);
    cout << "arr2 after fill(): ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    arr1.swap(arr2);
    cout << "After swap:\n";
    cout << "arr1: ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2: ";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    /*--------------------------------------------------
      6. Relational Operators
    --------------------------------------------------*/
    if (arr1 == arr2)
        cout << "arr1 == arr2\n";
    else
        cout << "arr1 != arr2\n";

    if (arr1 < arr2)
        cout << "arr1 < arr2\n";
    else
        cout << "arr1 >= arr2\n";

    cout << "\n";

    /*--------------------------------------------------
      7. Using Algorithms with std::array
    --------------------------------------------------*/
    array<int, 5> arr4 = {5, 1, 4, 2, 3};

    sort(arr4.begin(), arr4.end());
    cout << "Sorted arr4: ";
    for (int x : arr4) cout << x << " ";
    cout << endl;

    int sum = accumulate(arr4.begin(), arr4.end(), 0);
    cout << "Sum of elements: " << sum << endl;

    cout << "\nProgram completed successfully.\n";

    return 0;
}