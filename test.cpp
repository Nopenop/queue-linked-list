#include "queue.h"
#include "DLList.h"
#include "DLLNode.h"
#include <iostream>
#include "DLList.cpp"
#include "queue.cpp"
// void foo() {
// Queue<double>* qd = new Queue<double>;
// qd->enqueue(1.2);
// Queue<double> qd2;
// qd2.enqueue(5.5);
// qd2 = *qd;
// qd2.print();
// delete qd;
// qd2.print();
// }
int main() {
Queue<int> q;
int first = 0;
int second = 0;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
//test dequeue and front
while(!q.empty()) {
q.print();
first += q.front();
std::cout << first << std::endl;
q.dequeue();
}
//test clear and copy constructor
for (int i = 0; i < 20; i++) {
q.enqueue(i);
if (i % 3) {
q.dequeue();
}
else {
second += q.front();
}
}
std::cout << q.front() << std::endl;
first += q.front() * 4 + 2;
second += q.front() * 2 - 3;
// Queue<int> q2(q);
// q.print();
// q.clear();
// q.print();
// q2.print();
//test assignment operator and destructor
// foo();
//A++ attendance
std::cout << (char)first << (char)second << std::endl;
return 0;
}