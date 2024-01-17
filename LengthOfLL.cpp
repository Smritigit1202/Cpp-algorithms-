
int length(Node *head)
{Node* temp= head;
int c=0;
while(temp!=NULL)
{
	c++;
	temp=(*temp).next;
}
    return c;
}
