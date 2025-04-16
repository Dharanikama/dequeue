#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int queue[MAX];
int front=-1,rear=-1;
int insert_at_rearend(int ele){
    if(rear==MAX-1){
      printf("queue overflow\n");
      }
     else{
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=ele;
        }
        printf("element inserted\n");
      return 0;
      }
int delete_at_frontend(){
    if(front==-1){
    printf("queue underflow\n");
    }
    else if(front==rear) 
    {
       printf("deleted element %d\n",queue[front]);
       front=-1;
       rear=-1;
       }
   else{
        printf("deleted element %d",queue[front]);
        front++;
        }
      return 0;
      }
int delete_at_rearend(){
   if(rear==-1){
      printf("queue is inderflow\n");
   }
   else{
   printf("deleted element is %d\n",queue[rear]);
      rear--;
      }
    return 0;
    }
int insert_at_frontend(int ele){
     if(front==-1){
     front++;
     rear++;
     queue[front]=ele;
     }
   else if(front==0){
     printf("element cannot be insertyed\n");
     }
     else{
         front--;
         queue[front]=ele;
         }
         return 0;
         }
int display(){
    int i;
    if(front==-1){
       printf("queue empty\n");
       }
    else{
        for(i=front;i<=rear;i++){
           printf("%d",queue[i]);
           }
           printf("\n");
           }
       return 0;
       }
int main(){
int ch,ele;
   while(1){
         printf("\n1.insert_at_rearend\n 2.delete_at_frontend\n 3.delete_at_rearend\n 4.insert_at_frontend\n 5.display\n 6.exit\n");
         printf("enter choice");
         scanf("%d",&ch);
       switch(ch){
          case 1: printf("enter element\n");
                  scanf("%d",&ele);
                  insert_at_rearend(ele);
                  break;
          case 2: delete_at_frontend();
                  break;
          case 3: delete_at_rearend();
                  break;
          case 4: printf("enter element\n");
                  scanf("%d",&ele);
                  insert_at_frontend(ele);
                  break;
          case 5: display();
                  break;
          case 6: exit(0);
          case 7: printf("invalid option\n");
          }
      }
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
