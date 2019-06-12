#include <queue>

template <typename T>
class PriorityQueue {
private:
	std::priority_queue<T> storage;
public:
	PriorityQueue();
	~PriorityQueue();
	bool Empty() const;
	const T& Top() const;
	int Size();
	void Push(const T&);
	void Pop();
};
