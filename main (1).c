
#include<stdio.h>
#include<conio.h>
int main()
{
    int e,n,p,cc;
    printf("progarm to find cylomatic compexity:\n");
    printf("enter the number of edges in the flow graph:\n");
    scanf("%d",&e);
    printf("enter the number of nodes in the flow grap:\n");
    scanf("%d",&n);
    printf("enter the number of predicate nodes in the flow graph:\n");
    scanf("%d",&p);
    cc=e-n+(2*p);
    printf("the cyclomatic complexity of the flow graph is: \n%d",cc);
    return 0;
}
