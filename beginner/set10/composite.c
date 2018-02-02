int main()
{int i,p,count=0;
    scanf("%d",&p);
    for(i=2;i<p;i++)
    {
        if(p%i==0)
        count++;
    }
    if(count!=0)
    printf("yes");
    else
    printf("no");

    return 0;
}
