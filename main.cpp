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

// ���ú�ָ��Ĳ���
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

/*��������*/
void testRefer()
{
	int a = 123;
	int* p = &a;
	int& q = a;

	printf("ָ����ԣ�p��ֵ = %d, ָ��p�ĵ�ַ = %p\n", *p, p);
	printf("���ò��ԣ�q��ֵ = %d, ָ��q�ĵ�ַ = %p\n", q, &q);

	printf("p �� q ��ַ���bool��������%d\n", p == &q);

}