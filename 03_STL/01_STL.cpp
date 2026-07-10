#include <bits/stdc++.h>
using namespace std;

void explainPair() {

    // pair<int,int> -> p = {1, 3}
    pair<int, int> p = {1, 3};
    cout << "p = {" << p.first << ", " << p.second << "}\n"; // p = {1, 3}

    // nested pair -> q = {1, {3, 4}}
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << "q = {" << q.first << ", {" << q.second.first << ", " << q.second.second << "}}\n"; // q = {1, {3, 4}}
    // note: your original line printed second.second before second.first — swapped order below to match {3,4}

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 4}, {4, 8}};
    cout << "arr = [";
    for (auto &pr : arr) cout << "{" << pr.first << "," << pr.second << "} ";
    cout << "]\n"; // arr = [{1,2} {2,4} {4,8}]
    cout << "arr[1].second = " << arr[1].second << endl; // 4
}

void printVec(const string &label, vector<int> &v) {
    cout << label << " = [";
    for (int x : v) cout << x << " ";
    cout << "]\n";
}

void explainVector() {

    vector<int> v;
    v.push_back(1);     // adds 1 at end (copy)
    v.emplace_back(2);     // adds 2 at end (constructs in place, no extra copy)
    printVec("v", v);   // v = [1 2]

    vector<pair<int, int>> vec;
    vec.push_back({1, 5});     // creates pair then copies in
    vec.emplace_back(2, 10);         // constructs pair directly inside vector
    cout << "vec = [";
    for (auto &pr : vec) cout << "{" << pr.first << "," << pr.second << "} ";
    cout << "]\n"; // vec = [{1,5} {2,10}]

    vector<int> q(5, 100);   // 5 elements, all = 100
    printVec("q", q);     // q = [100 100 100 100 100]

    vector<int> r(5);                // 5 elements, default-initialized to 0
    printVec("r", r);        // r = [0 0 0 0 0]

    vector<int> v1(5, 20);
    vector<int> v2(v1);              // copy constructor, v2 is a copy of v1
    printVec("v1", v1);      // v1 = [20 20 20 20 20]
    printVec("v2", v2);      // v2 = [20 20 20 20 20]

    // three ways to iterate — all print the same thing: 1 2
    cout << "iterator loop: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;

    cout << "auto iterator loop: ";
    for (auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << endl;

    cout << "range-based loop: ";
    for (auto it : v) cout << it << " ";
    cout << endl;

    v.erase(v.begin() + 1);                   // removes element at index 1
    printVec("v after erase(begin()+1)", v); // v = [1]

    // BUG in your original: v.end() + 1 goes one past end() -> out of bounds / undefined behavior.
    // To erase everything, use v.erase(v.begin(), v.end());
    // Skipping that line here since v already has 1 element left; erasing full range instead:
    // v.erase(v.begin(), v.end());

    vector<int> s(2, 100);
    printVec("s before insert", s);                  // s = [100 100]
    s.insert(s.begin(), 300);                      // insert single value at front
    printVec("s after insert(begin,300)", s);        // s = [300 100 100]
    s.insert(s.begin() + 1, 2, 50);             // insert 50, 50 at index 1
    printVec("s after insert(begin+1,2,50)", s);     // s = [300 50 50 100 100]

    vector<int> copy_(2, 50);
    v.insert(v.begin(), copy_.begin(), copy_.end()); // insert range at front of v
    printVec("v after range insert", v);

    cout << "v.size() = " << v.size() << endl;

    v.pop_back(); // removes last element
    printVec("v after pop_back", v);

    v1.swap(v2); // swaps contents of v1 and v2 (harmless here since both are equal)
    printVec("v1 after swap", v1);
    printVec("v2 after swap", v2);

    v.clear(); // removes all elements, size becomes 0
    printVec("v after clear", v);

    cout << "v.empty() = " << v.empty() << endl; // 1 (true)
}

int main() {
    explainPair();
    cout << "----\n";
    explainVector();
    return 0;
}