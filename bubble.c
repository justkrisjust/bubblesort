
int main(){
	int arr[10] ,i,j,temp;
	printf("enter the numbers in any order ");
	for(i=0;i<10;++i){
	printf("arr[%d] : ",i);
	scanf(" %d ",&arr[i]);}
	
	for (i=0;i<9;++i){
		for (j=0;j<(9-i);++j){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
     printf("the numbers in order are : \n");
	for(i=0;i<10;++i){
		printf("%d ",arr[i]);
	}
    getch();
}