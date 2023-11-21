#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int main(){
	int n=100,currentIndex = 0, choice;
	int integer[n];
	int sum,medium;
	int number, count, searchValue;
	int start, end, mid;
	int m;
	do{
		printf("________________________MENU_______________________\n");
		printf("1. nhap gia tri n phan tu cua mang\n");
		printf("2. in gia tri cac phan tu mang\n");
		printf("3. tinh trung binh cac phan tu lon hon 0\n");
		printf("4. in ra vi tri cac phan tu co gia tri bang k (k so nhap vao)\n");
		printf("5. su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
		printf("6. tinh so luong phan tu la so nguyen to trong mang\n");
		printf("7. sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan\n");
		printf("8. nhap gia tri m tu ban phim, chen gia tri m vao mang, sap xep giam dan\n");
		printf("9. thoat\n");
		printf("lua chon cua ban: ");
		int choice;
		scanf("%d", &choice);
	    switch(choice){
    	case 1:
    	   printf("nhap vao gia tri n phan tu mang: ");
           scanf("%d", &n);	
           for(int i=0; i<n; i++){
     	       printf("integer[%d]=",currentIndex);
     	       scanf("%d", &integer[currentIndex]);
     	       currentIndex++;
     	    }
        break;
        case 2:
        	printf("in gia tri cac phan tu mang\n");
        	for(int i=0; i<currentIndex; i++){
        		printf("%d\t", integer[i]);
        	}
        break;	
        case 3:
        	sum=0;
            number=0;
            for(int i=0; i<currentIndex; i++){
        		if(integer[i]>0){
        			sum+=integer[i];
        			number++;
        			printf("cac so lon hon 0: %d\n", integer[i]);	
        	    }
		    }
			medium=sum/number;
		    printf("\ntrung binh cac so lon hon 0: %d\n", medium);
			
		break;	
	    case 4:
	    		printf("Nhap gia tri tim kiem: ");
		     	scanf("%d",&searchValue);
		     	int i;
			    for(i=0;i<currentIndex;i++){
	         	   if(integer[i]==searchValue){
		 	          printf("Tim thay phan tu co chi so %d trong mang co gia tri %d\n",i,integer[i]);
	               }
				  
	         	}
				  if(integer[i]!=searchValue){
				   	  printf("Khong tim thay phan tu nao co chi so la %d\n",searchValue);
				   }
		break;
			
        case 5:
        	for(int i=0; i<currentIndex; i++){
		        for(int j=0; j<currentIndex-1-i; j++){
		         	if(integer[j]<integer[j+1]){
				       int temp=integer[j];
				       integer[j]=integer[j+1];
				       integer[j+1]=temp;
			        }
		        }
	        }
        	printf("cac so vua duoc sap xep: ");
        	for(int i=0; i<currentIndex; i++){
		        printf("%d\t", integer[i]);
	        }
	    break;
	    case 6:
	    		sum=0;
	    		count = 0;
			 	printf("cac phan tu la so nguyen to: ");
				for(int i=0; i<currentIndex; i++){
				 	int prime =0;
				 	if(integer[i]>=2){
			          	for(int j=2; j<=sqrt(integer[i]); i++){
			            	if(integer[i]%j==0){
			            	 	prime = 1;
			            	 	count++; 
						   	}
						}
					}else{
					 	prime=1;
			        }
			    }
			    printf("%d\n",count); 
        break;
		case 8:
		    printf("Nhap gia tri m tu ban phim vao mang ");
                scanf("%d", &m);
                integer[currentIndex]=m;
                currentIndex++;
                for (int i=1; i < currentIndex; i++){
                    int key=integer[i];
                    int j=i-1;
                    while (j >= 0 && key>integer[j]) {
                        integer[j+1] = integer[j];
                    j-=1;
                }
                integer[j+1]=key;
                }
                printf("Day so sau khi sap xep lai la:\n");
                for(int i=0;i<currentIndex;i++){
		            printf("%d\t",integer[i]);
                }	
        break;        
        case 9:
        	exit(0);
        default:
        	printf("lua chon cua ban");
	
    }

 }while(1==1);

  
}
