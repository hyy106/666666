#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],word[30];
    int i=0,k=0,x=0,y=0,count=0,sum=0;
	printf("������һ������:\n");
    while((a[i] = getchar()) != '\n')
	{
        x++;
        i++;
	}
	strlwr(a);
    i=0;
    rewind(stdin);
    printf("��������鵥��:\n");
    while((word[i] = getchar()) != '\n')
	{
        y++;
        i++;
	}
    strlwr(word);
    for (i = 0; i < x; i++)
	{   
	    count = 0;
        if(a[i] == word[0])
		{
            for(;k<y;k++)
			{
                if(a[i+k] == word[k])
				{
                    count++;
				}
			}
            if(count == y)
				sum++;
		}
	}
    printf("�õ��ʳ��ִ���Ϊ%d\n",sum);
}