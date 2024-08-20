#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
   vector<int> heap;

    void heapifyUp(int index) {
        if (index == 0) return;

        int parent = (index - 1) / 2;
        if (heap[index] < heap[parent]) {
           swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
            smallest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
           swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int extractMin() {
        if (heap.size() == 0) throw runtime_error("Heap is empty");

        int min = heap[0];
        heap[0] = heap.back();
        heap.pop_back();

        heapifyDown(0);

        return min;
    }

    int getMin() const {
        if (heap.size() == 0) throw runtime_error("Heap is empty");
        return heap[0];
    }

    bool isEmpty() const {
        return heap.empty();
    }
};
class MaxHeap {
private:
   vector<int> heap;

    void heapifyUp(int index) {
        if (index == 0) return;

        int parent = (index - 1) / 2;
        if (heap[index] > heap[parent]) {
           swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }

        if (largest != index) {
           swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int extractMax() {
        if (heap.size() == 0) throw runtime_error("Heap is empty");

        int max = heap[0];
        heap[0] = heap.back();
        heap.pop_back();

        heapifyDown(0);

        return max;
    }

    int getMax() const {
        if (heap.size() == 0) throw runtime_error("Heap is empty");
        return heap[0];
    }

    bool isEmpty() const {
        return heap.empty();
    }
};

int main() {
    MaxHeap pq;

    pq.insert(10);
    pq.insert(4);
    pq.insert(9);
    pq.insert(1);
    pq.insert(7);

   cout << "Max element: " << pq.getMax() <<endl; // Outputs 10

    pq.extractMax();

   cout << "Max element after extraction: " << pq.getMax() <<endl; // Outputs 9

    MinHeap pr;

    pq.insert(10);
    pq.insert(4);
    pq.insert(9);
    pq.insert(1);
    pq.insert(7);

   cout << "Min element: " << pr.getMin() <<endl; // Outputs 1

    pr.extractMin();

   cout << "Min element after extraction: " << pr.getMin() <<endl; // Outputs 4

    return 0;
}
