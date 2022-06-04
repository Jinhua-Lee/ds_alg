#include <math.h>
#include ".\alg\sort.h"
#include ".\alg\divideFunction.cpp"
#include ".\ds\01_SequenceList.h"
#include ".\ds\02_SingleLinkedList.h"
#include ".\ds\03_DoublyLinkedList.h"
#include ".\ds\04_SequenceStack.h"
#include ".\ds\05_LinkedStack.h"
#include ".\ds\06_CircularQueue.h"
#include ".\ds\07_LinkedQueue.h"
#include ".\dS\08_LinkedBinaryTree.h"
#include ".\ds\09_BlackRedTree.h"

// 引用和指针的测试
void testRefer();

int main()
{
	//testArray();
	//testDivideFunction();

	//test();
	//testSort();
	//testRefer();

	//testSqList();
	//testSingleLinkedList();
	//testDoublyLinkedList();

	//testSequenceStack();
	//testLinkedStack();
	//testCircularQueue();
	//testLinkedQueue();
	//testBinaryTree();
	testBrTree();

	return 1;
}

/*测试引用*/
void testRefer()
{
	int a = 123;
	int* p = &a;
	int& q = a;

	printf("指针测试：p的值 = %d, 指针p的地址 = %p\n", *p, p);
	printf("引用测试：q的值 = %d, 指针q的地址 = %p\n", q, &q);

	printf("p 和 q 地址相等bool输出结果：%d\n", p == &q);

}