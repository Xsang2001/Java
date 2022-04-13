struct Node 
{ 
int data; 
Node *next; 
}; //1. Chen dau - cách 1 
Node *push( Node* head, int X) 
{ 
Node* q = (Node*) malloc(sizeof(Node) * 100); 
q->data = X; 
q->next = head; 
head = q; 
return head; 
} //1. Chen dau - cách 2 
void * push(Node ** head, int X) 
{ 
Node * q = (Node *)malloc(sizeof(Node)); 
q->data = X; 
q->next = (*head); 
(*head) = q; 
} //2.chen sau nut p 
void chensau(Node* p, int X) 
{ 
//1. kiem tra p la NULL 
if (p == NULL) 
{ 
printf("nut cho truoc khong the NULL"); 
return; 
} 
Node* q =(Node *)malloc(sizeof(Node)); 
q->data = X; 
q->next = p->next; 
p->next = q; 
} //3. chen sau nut cuoi cua dslk 
Node * bosung(Node* head, int X) 
{ 
Node* q = (Node *) malloc(sizeof(Node)); 
Node *last = head; 
q->data = X; 
q->next = NULL; //vi q se la nut cuoi 
if (head == NULL) 
head = q; 
while (last->next != NULL) 
last = last->next; 
last->next = q; 
return head; 
}

	
