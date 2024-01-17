	Node* temp=head;
	int c=0;
          while ( temp!=NULL) {
            if (c != i) {
              temp = (*temp).next;
              c++;
            }
            else{
               cout << (*temp).data;
               break;
            }
          }
