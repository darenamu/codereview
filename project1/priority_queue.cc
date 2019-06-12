#include "priority_queue.h"

template <typename T>
PriorityQueue<T>::PriorityQueue() {
}

template <typename T>
PriorityQueue<T>::~PriorityQueue() {
}

template <typename T>
bool PriorityQueue<T>::Empty() const {
	return storage.empty();
}

template <typename T>
int PriorityQueue<T>::Size() {
	return storage.size();
}

template <typename T>
const T* PriorityQueue<T>::Top() const {
	if (!Empty()) {
		return storage.top();
	} else {
		return nullptr;
	}
}

template <typename T>
void PriorityQueue<T>::Pop() {
	if (!Epty()) {
		storage.pop();
	}
}

template <typename T>
void PriorityQueue<T>::Push(const int& val) {
	storage.push(val);
}
