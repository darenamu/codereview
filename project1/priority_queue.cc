#include "priority_queue.h"

template <>
PriorityQueue<int>::PriorityQueue() {
}

template <>
PriorityQueue<int>::~PriorityQueue() {
}

template <>
bool PriorityQueue<int>::Empty() const {
	return storage.empty();
}

template <>
int PriorityQueue<int>::Size() {
	return storage.size();
}

template <>
const int& PriorityQueue<int>::Top() const {
	return storage.top();
}

template <>
void PriorityQueue<int>::Pop() {
	storage.pop();
}

template <>
void PriorityQueue<int>::Push(const int& val) {
	storage.push(val);
}
