typedef struct Anode
{
	int vertex;
	struct Node* next;
} Anode;

typedef struct Vnode
{
	int vertex;
	Anode* first;
} Vnode;

typedef struct Lgraph {
	Vnode vertex[50];
	int verticies;
	int edges;
} Lgraph;

#include <stdio.h>
#include <stdlib.h>

Lgraph* createGraph() {
	int i;
	Lgraph* g;
	Anode* n;
	g = (Lgraph*) malloc(sizeof(Lgraph));
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

void displayGraph(Lgraph *g) {
	int i;
	Anode* n;

	printf("The vetexes of g: \n");
	for (i = 0; i < g->verticies; i++) {
		printf("\t%d ", g->vertex[i].vertex);
	}
	printf("\n");

	printf("The edges of g: \n");
	for (i = 0; i < g->edges; i++) {
		n = g->vertex[i].first->next;
		while (n != NULL) {
			printf("\t%d\t%d\n", g->vertex[i].vertex, g->vertex[n->vertex].vertex);
			n = n->next;
		}
	}
}

void main() {
	Lgraph* g;
	g = createGraph();
	displayGraph(g);
}

