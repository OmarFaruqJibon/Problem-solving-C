typedef struct Anode
{
	int vertex;
	struct Anode* next;
} Anode;

typedef struct Vnode
{
	int vertex;
	Anode* first;
} Vnode;

typedef struct AGraph {
	Vnode vertex[100];
	int verticies;
	int edges;
} Graph;

typedef struct Queue {
	Anode* front;
	Anode* rear;
} Queue;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Graph* createGraph() {
	int i;
	Graph* g;
	Anode* n;
	g = (Graph*) malloc(sizeof(Graph));
	printf("Enter number of verticies ");
	scanf("%d", &g->verticies);
	printf("Enter number of edges ");
	scanf("%d", &g->edges);
	printf("Enter vertecies ");
	for (i = 0; i < g->verticies; i++) {
		scanf("%d", &g->vertex[i].vertex);
		n = (Anode*)malloc(sizeof(Anode));
		g->vertex[i].first=n;
		n->next=NULL;
	}
	printf("Enter edges ");
	for (i = 0; i < g->edges; i++) {
		int e1, e2;
		scanf("%d%d", &e1, &e2);
		n = (Anode*)malloc(sizeof(Anode));
		n->next=g->vertex[e1].first->next;
		g->vertex[e1].first->next = n;
		n->vertex=e2;

		n = (Anode*)malloc(sizeof(Anode));
		n->next=g->vertex[e2].first->next;
		g->vertex[e2].first->next = n;
		n->vertex=e1;
	}
	return g;
}

Queue* initiateQueue()
{
	Queue *queue;
	Anode *head;
	queue = (Queue *)malloc(sizeof(Queue));
	head= (Anode *)malloc(sizeof(Anode));
	head->vertex =-1;
	head->next = NULL;
	queue->front = head;
	queue->rear = head;
	return queue;
}

int empty(Queue* queue)
{
	if (queue->front->next==NULL)
		return 1;
	else
		return 0;
}

void en(Queue *queue, int vertex)
{
	Anode *newnode;
	newnode = (Anode *)malloc(sizeof(Anode));
	newnode->vertex = vertex;
	newnode->next = NULL;
	queue->rear->next = newnode;
	queue->rear = newnode;
}

int de(Queue *queue)
{
	Anode *de_node;
	int seq;
	if(empty(queue)==1)
	{
		printf("The queue is empty");
		return -1;
	}
	else
	{
		de_node = queue->front->next;
		queue->front->next = de_node->next;
		if (queue->front->next == NULL)
			queue->rear = queue->front;
		seq=de_node->vertex;
		free(de_node);
		return seq;
	}
}

void BFS(Graph *g, Queue *q, int source)
{
	int i,k;
	Anode *current;
	bool visited[100];

	for(i = 0; i < g->verticies; i++)
		visited[i] = 0;

	printf("BFS:\n");
	visited[source] = 1;
	printf("%d ", g->vertex[source].vertex);

	en(q, source);
	while(empty(q)!=1)
	{
		k=de(q);
		current=g->vertex[k].first->next;
		while(current!=NULL)
		{
			if(visited[current->vertex]==0)
			{
				visited[current->vertex]=1;
				printf("%d ",g->vertex[current->vertex].vertex);
				en(q, current->vertex);
				current=current->next;
			}
			else
				current=current->next;

		}

	}
}

void main() {
	Graph* g;
	Queue* queue;
	queue = initiateQueue();
	int bfsStart;
	g = createGraph();
	printf("Enter start ");
	scanf("%d", &bfsStart);
	BFS(g, queue, bfsStart);
}

