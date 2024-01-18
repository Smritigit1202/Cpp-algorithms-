Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	Node* fh;
	Node* fk;
	Node* ft;

	if(head1==NULL ||head2 ==NULL)
	{
		return head1;
	}
if(head1->data <= head2->data)
{
	fh= head1;
	head1=head1->next;
}
else
{
	fh= head2;
head2=head2->next;
}

fk=fh;
		while(head1 != NULL && head2 != NULL)
	{
		if(head1->data <= head2->data)
		{
			ft= head1;
			head1=head1->next;
			
		}
		else{
				ft= head2;
			head2=head2->next;
		}
		fh->next= ft;
		
		fh=ft;
	}

	if(head1==NULL)
	{
		fh->next= head2;
	}
	else if(head2==NULL)
	{
		fh->next= head1;
	}
return fk;
}
