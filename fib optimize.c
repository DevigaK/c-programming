
int main() {
	long int t,frst,scnd,next,n,i;
	scanf("%ld",&t);
	while(t--)
	{
	 scanf("%ld",&n);
	 scnd=1;
	 frst=0;
	 printf("%ld ",scnd);
	 for(i=0;i<n-1;i++)
	 {
	     next=frst+scnd;
	     frst=scnd;
	     scnd=next;
	     printf("%ld ",next);
	 }
	 printf("\n");
	}
	return 0;
}
