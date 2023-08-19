typedef struct {
	u8 element;
	struct *next;
	
}node;

node* new_node(u8 value);
void linkedlist(node *head ,u8 value );