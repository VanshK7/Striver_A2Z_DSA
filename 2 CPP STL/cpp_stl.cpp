#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

void PairsFunction() {
    // A pair stores 2 values of the same or different data types.
    pair<int, int> p1 = {1, 3}; // p is a pair of 2 integers
    // We can get the first value using p1.first and the second value using p1.second
    cout << "\nPair p1:\n\tFirst value: " << p1.first << "\n\tSecond value: " << p1.second << "\n";

    pair<int, string> p2 = {1, "Hello Vansh!"};
    cout << "\nPair p2:\n\tFirst value: " << p2.first << "\n\tSecond value: " << p2.second << "\n";

    // We can create an array of pairs
    pair<int, int> p3[] = {{1, 5}, {2, 3}, {6, 4}};
    cout << "\nArray of pairs p3:\n\tPair 1: " << p3[0].first << " " << p3[0].second << "\n\tPair 2: " << p3[1].first << " " << p3[1].second << "\n\tPair 3: " << p3[2].first << " " << p3[2].second << "\n";

    // We can also have nested pairs
    pair<int, pair<int, int>> p4 = {1, {2, 3}};
    cout << "\nNested pair p4:\n\tFirst value: " << p4.first << "\n\tSecond value: " << p4.second.first << " " << p4.second.second << "\n";

    // To swap the content of a pair
    pair<int, int> p5 = {1, 2};
    pair<int, int> p6 = {3, 4};
    cout << "\nBefore Swapping:\n\tp5: " << p5.first << " " << p5.second << "\n\tp6: " << p6.first << " " << p6.second;
    p6.swap(p5);
    cout << "\nAfter Swapping:\n\tp5: " << p5.first << " " << p5.second << "\n\tp6: " << p6.first << " " << p6.second << "\n";

    // We can create pairs without explicitly defining the data types (automatic type deduction)
    auto p7 = make_pair(1, 2);
    cout << "\nPair p7 with Automatic Type Deduction:\n\tFirst value: " << p7.first << "\n\tSecond value: " << p7.second << "\n";
}

void VectorsFunction() {
    vector<int> v;
    v.push_back(1);            // Adds 1 to the end of the vector (Slower)
    v.emplace_back(2);         // Adds 2 to the end of the vector (Faster)

    vector<pair<int, int>> v2;          // Will define a vector of pairs of 2 integers
    v2.push_back({1, 2});               // You have to use {} to push a pair using push_back
    v2.emplace_back(4,5);               // You can directly push a pair using emplace_back

    vector<int> v3(5, 100);    // Will define a vector of size 5 with all values as 100: {100, 100, 100, 100, 100}
    vector<int> v4(v3);        // Will define a vector v4 with the same values as v3
    vector<int> v5(5);         // Will define a vector of size 5 with all values as 0

    cout<<"\nThe 2nd element of vector v is " << v[1] << endl;          // To print the 2nd element


    v.pop_back();               // Removes the last element
    v.push_back(25);
    v.emplace_back(50);
    v.emplace_back(75);

    // Iterators in vectors
    vector<int>::iterator it = v.begin() + 1;       // Iterator pointing to the 2nd element of the vector
    v.emplace(it, 103);                             // Adds 103 before the 2nd element of the vector

    // An iterator points to the memory position where an element is stored, to access the element we use * before the iterator
    cout<<"\nThe elements of vector v are:\n";
    vector<int>::iterator it1 = v.begin();                      // Iterator pointing to the first element of the vector
    for (it1 = v.begin(); it1 != v.end(); it1++) {              // the loop will run till we reach the end of the vector 
        cout << *it1 << " ";                                    // prints the value stored at the address pointed by the iterator
    }

    vector<int>::iterator it2 = v.end();                // Will point at the memory location AFTER the last element
    auto it3 = v.begin();                               // Will automatically detect the data type of the iterator, so same as vector<int>::iterator it = v.begin()

    // Easier way to traverse through a vector
    /*/
    for (auto it : v) {
        cout<<it<<" ";
    }
    */

   cout<<"\n\nThe element at index position 2 in vector v is: "<<v.at(2);       // To access an element at a specified index position, we use .at()
   cout<<"\nThe size of the vector after some operations: "<<v.size();          // Will tell the number of elements in vector v

   // There are multiple ways to delete elements
   v.pop_back();                            // Will delete the last element in the vector
   v.erase(v.begin() + 1);                  // Will delete the 2nd element of the vector
   v.erase(v.begin(), v.begin() + 3);       // Will delete the first 3 elements of the vector, sp index posn 0, 1 and 2 (end posn is not included)

   v.insert(v.begin(), 7);                  // Will insert 7 at the beginning of the vector
   v.insert(v.begin(), 2, 3);               // Will insert 3 twice in the beginning of the vector

   v.clear();                   // It will empty the entire vector
   v.empty();                   // It will return true if the vector is empty, else it will return false

}

void ListFunction() {
    list<int> l;
    l.push_back(1);             // Adds 1 to the end of the list (Slower)
    l.emplace_back(2);          // Adds 2 to the end of the list (Faster)
    l.push_front(20);           // Adds 20 to the beginning of the list (not available in vectors)
    l.emplace_front(50);        // Adds 50 to the beginning of the list (not available in vectors)
    l.pop_front();              // Removes the first element of the list (not available in vectors)

    list<int>::iterator it = l.begin();                 // Will define a list iterator pointing to the 1st element
    advance(it, 2);                                     // Will move the iterator 2 positions ahead, cannot use + operator in list iterators
    cout<<"\nThe 3rd element in the list is "<<*it;     // Will print the 3rd element of the list

    // Traversal using for loop in a list
    cout<<"\nThe elements of list l are:\n";
    for (auto it : l) {
        cout<<it<<" ";
    }
}

void DequeFunction() {
    deque<int> dq;
    dq.push_back(10);                   // Adds 10 to the end of the deque (slower)
    dq.emplace_back(100);               // Adds 100 to the end of the deque (faster)
    dq.push_front(20);                  // Adds 20 to the beginning of the deque (slower)
    dq.insert(dq.begin() + 1, 6);       // Adds 6 to the 2nd position of the deque

    cout<<"The 4th element of the deque is "<<dq[3];        // Will print the 4th element of the deque
}

void StackFunction() {
    stack<int> stk;
    stk.push(10);               // Will push 10 to the end of the stack (slower)
    stk.emplace(11);            // Will push 11 to the end of the stack (faster)
    stk.push(20);
    stk.push(30);
    cout<<"\nThe top element of the stack is "<<stk.top();      // Will print the top element of the stack

    cout<<"\nThe elements of a stack are:\n";
    while(!stk.empty()) {               // checks if the stack is empty
        cout<<stk.top()<<" ";           // prints the top element of the stack
        stk.pop();                      // Will remove the top element of the stack
    }
}

void QueueFunction() {
    queue<int> q;
    q.push(10);                 // Will push 10 to the end of the dqueue (slower)
    q.emplace(11);              // Will push 11 to the end of the queue (faster)
    q.push(20);
    q.push(30);
    cout<<"\nThe front element of the queue is "<<q.front();      // Will print the front element of the queue
    cout<<"\nThe back element of the queue is "<<q.back();        // Will print the back element of the queue

    cout<<"\nThe elements of a queue are:\n";
    while(!q.empty()) {               // checks if the queue is empty
        cout<<q.front()<<" ";         // prints the front element of the queue
        q.pop();                      // Will remove the front element of the queue
    }
}

void PriorityQueueFunction() {
    // Maximum Heap (largest element at the top)
    priority_queue<char> pq;
    pq.push('x');
    pq.emplace('s');
    pq.emplace('a');
    pq.emplace('g');
    pq.emplace('z');

    cout<<"\nThe top element of the priority queue is "<<pq.top();      // Will print the top element of the priority queue
    pq.pop();

    cout<<"\nPrinting all the elements of the maximum heap priority queue:\n";
    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    // Minimum Heap (smallest element at the top)
    priority_queue<char, vector<char>, greater<char>> pq1;
    pq1.push('x');
    pq1.emplace('s');
    pq1.emplace('a');
    pq1.emplace('g');
    cout<<"\n\nPrinting all the elements of the minimum heap priority queue:\n";
    while(!pq1.empty()) {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}

void SetFunction() {
    set<int> s;
    s.insert(10);           // Will insert 10 to the set (Slower)
    s.insert(5);
    s.insert(20);
    s.emplace(30);          // Will insert 30 to the set (Faster)
    s.emplace(60);
    s.emplace(5);           // Will not be inserted as 5 is already in the set

    // We can use iterators to traverse through the set or find a specific element
    set<int>::iterator it = s.begin();          // Iterator pointing to the first element of the set
    cout<<"\nThe elements of the set are:\n";
    for (it = s.begin(); it != s.end(); it++) {
        cout<<*it<<" ";
    }
    
    auto it2 = s.find(5);           // Will return an iterator pointing to the element 20 in the set
    auto it3 = s.find(14);          // Will return an iterator pointing to the end of the set as 14 is not present in the set
    if (it3 == s.end()) {
        cout<<"\n14 is not present in the set";
    }

    s.erase(30);                        // Removes 30 from the set
    s.erase(s.begin());                 // Removes the first element of the set
    s.erase(s.begin(), s.end());        // Removes all the elements of the set
}

void MultiSetFuction() {
    multiset<int> ms;
    ms.insert(10);          // Will insert 10 to the multiset (Slower)
    ms.insert(5);
    ms.emplace(20);         // Will insert 20 to the multiset (Faster)
    ms.emplace(10);         // A multiset can have duplicate elements  
    ms.emplace(5);
    ms.emplace(5);

    cout<<ms.count(10)<<endl;       // Will return the number of times 10 occurs in the multiset

    ms.erase(10);                   // Will erase ALL the occurences of 10
    auto it1 = ms.find(5);
    advance(it1, 2);
    ms.erase(ms.find(5), it1);      // Will erase the 1st 2 occurences of 5 as we erase the elements stored at the memory location pointed by the iterators
    cout<<ms.count(10)<<endl;       // Will return 0 as all occurences of 10 have been deleted
}

void UnorderedSetFunction() {
    unordered_set<int> us;
    us.insert(10);          // Will insert 10 to the unordered set (Slower)
    us.insert(20);
    us.insert(30);
    us.insert(40);
    us.emplace(50);         // Will insert 50 to the unordered set (Faster)

    cout<<"\nThe elements of the unordered set are:\n";
    for (auto it : us) {
        cout<<it<<" ";
    }
}

void MapFunction() {
    map<int, int> m;
    m.insert({1, 0});       // Here, 1 is the key and 0 is value
    m.emplace(10, 58);      // Here, 10 is the key and 58 is the value
    m[8] = 3;               // Here, 8 is the key and 3 is the value
    m[5] = 0;
    m[100] = 53;

    m.erase(10);                // Will delete the element with key = 10
    auto it = m.begin();
    advance(it, 2);
    m.erase(m.begin(), it);     // Will delete the first 2 elements in the map

    // Printing all the elements in the map m
    cout<<"\nPrinting all the elements in a map:\n";
    for (auto it : m) {
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }

    auto it1 = m.lower_bound(5);        // Will point to the memory location of the element with the smallest key that is greater than 5 (not equal to 5)
    auto it2 = m.upper_bound(10);       // Will point to the memory location of the element with the largest key that is smaller than 10 (not equal to 10)
}

void MultiMapFunction() {
    multimap<int, int> mm;
    mm.emplace(10, 20);             // Adds 10, 20 to the multimap (faster)
    mm.emplace(10, 30);             
    mm.insert({1, 3});              // Adds 1, 3 to the multimap (slower)
    mm.insert({2, 5});

    // Printing all the elements in the multimap mm
    cout<<"\nPrinting all the elements in a multimap:\n";
    for (auto it : mm) {
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }
}

void UnorderedMapFunction() {
    unordered_map<int, int> um;
    um.emplace(10, 20);         // Will insert 10, 20 in the unordered map (faster)
    um.emplace(1, 4);
    um.insert({2, 5});          // Will insert 2, 5 in the unordered map (slower)
    um.insert({6, 5});

    // Printing all the elements in the unordered map um
    cout<<"\nPrinting all the elements in an unordered map:\n";
    for (auto it : um) {
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }
}

bool comp(pair<int, int> p1, pair<int, int> p2) {           // It is a comparator
    if (p1.second < p2.second) return true;         // Returns true if it is in correct order (ascending order)
    if (p1.second > p2.second) return false;        // Returns false if the order is incorrect (descending order)

    // Will only execute the below snippet if the 2nd elements are equal as it is the only condition left
    if (p1.first > p1.second) return true;          // Returns true if it is in correct order (descending order)
    return false;                                   // Returns false if the order is incorrect (ascending order)
}

void SortFunction() {
    vector<int> v = {2, 10, 5, 21, 1};

    sort(v.begin(), v.end());           // Will sort the vector in ascending order
    cout<<"\n\nPrinting the elements of the vector after sorting in ascending order:\n";
    for (auto it : v) {
        cout<<it<<" ";
    }

    sort(v.begin(), v.end(), greater<int>());        // Will sort the vector in descending order
    cout<<"\n\nPrinting the elements of the vector after sorting in descending order:\n";
    for (auto it : v) {
        cout<<it<<" ";
    }

    auto it2 = v.begin();
    advance(it2, 4);
    sort(v.begin(), it2);           // Will sort the vector from the 1st to 3rd element in ascending order
    cout<<"\n\nPrinting the elements of the vector after sorting from the 1st to 3rd element in ascending order:\n";
    for (auto it : v) {
        cout<<it<<" ";
    }

    // Sorting pairs
    // To sort it acc to 2nd element, but if 2nd elements are equal, then sort acc to 1st element in descending order
    // E.g. {20, 5}, {100, 5}, {2, 3} -> {100, 5}, {20, 5}, {2, 3}
    pair<int, int> a[] = {{20, 5}, {100, 5}, {2, 3}};
    sort(a, a + 3, comp);               // comp is the comparator function (you can define it yourself to follow your own rules)
    cout<<"\n\nPrinting the elements of the array of pairs after sorting:\n";
    for (auto it : a) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main() {
    SortFunction();
}
