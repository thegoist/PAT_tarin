#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,K;
    int *scores,*ask;
    int counter = 0;	
	//����ɼ�����  
    scanf("%d",&N);
    scores = (int *)malloc(sizeof(int)*N);
    for(int i = 0 ; i < N; i++){
        scanf("%d",&scores[i]);
//        printf("============ %d\n",scores[i]);
    }
    
    //�����ѯ�ɼ�
	scanf("%d",&K);
	ask = (int *)malloc(sizeof(int)*K);
	for(int i = 0 ; i < K; i++){
        scanf("%d",&ask[i]);
//    	printf("+++++++++++++ %d ",ask[i]);
    }
    
    //��ѯ�������� 
	for(int i = 0 ; i < K;i++){
		counter = 0;
		for(int j = 0;j < N;j++){
			if(ask[i]==scores[j]){
				counter++;
			}
			
		}
		if(i==0){
			printf("%d",counter);
		}else{
			printf(" %d",counter);
		}
		
	} 
    return 0 ;
}
