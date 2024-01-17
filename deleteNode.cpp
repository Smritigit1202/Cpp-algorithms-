Node *deleteNode(Node *head, int i)
{
	int c=0;
	Node *temp = head;
	if(head==NULL)
{
  return head;
}
  else if(i==0)
  {
head=temp->next;
  }
  else{
    while (c != i - 1 && temp != NULL) {
      temp = (*temp).next;
      c++;
    }
    if(temp==NULL||temp->next==NULL)
    {
      return head;
    }

    else {
      Node *a = temp->next;
      Node *b = a->next;
      temp->next = b;
      a->next = NULL;
      delete (a);
      return head;
    }
  }
}
