typedef int QDataType;

typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue
{
	QueueNode* front;
	QueueNode* back;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

// ����1��ʾ�գ�����0��ʾ�ǿ�
int QueueEmpty(Queue* pq);
size_t QueueSize(Queue* pq);


// ʵ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->front = pq->back = NULL;
}

void QueueDestory(Queue* pq)
{
	QueueNode* cur = pq->front;
	while (cur != NULL)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	
	pq->front = pq->back = NULL;
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;

	if (pq->back == NULL)
	{
		pq->front = pq->back = newnode;
	}
	else
	{
		pq->back->next = newnode;
		pq->back = newnode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);

	QueueNode* next = pq->front->next;
	free(pq->front);

	pq->front = next;

	// �������һ���ڵ㱻�ɵ������
	if (pq->front == NULL)
	{
		pq->back = NULL;
	}
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);

	return pq->front->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	return pq->back->data;
}

// ����1��ʾ�գ�����0��ʾ�ǿ�
int QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->front == NULL ? 1 : 0;
}

size_t QueueSize(Queue* pq)
{
	size_t n = 0;
	QueueNode* cur = pq->front;
	while (cur != NULL)
	{
		++n;
		cur = cur->next;
	}

	return n;
}
