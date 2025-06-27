#include <stdio.h>
int cid=0;
int pid=0;
int bid=0;

struct Customer{
    char cusName[50];
    char cusPhno[10];
    int cusId;
}cus[100];
 
 struct Product{
        char prodName[100];
        char prodQty[100];
        char prodCost[100];
        int prodId;
    }prod[100];

struct Billing{
    
    int cuID;
    int n;
    struct Items{
    int itmId;
    int itmqua;
    }itm[100];
    
    
}bill[100];
    

void createCustomer()
{
    printf("Enter Your Name: ");
    scanf("%s",cus[cid].cusName);
    printf("Enter Your Number: ");
    scanf("%s",cus[cid].cusPhno);
    cus[cid].cusId=cid+1;
    printf("=====>Data Entered Successfully<====");
    cid++;
}

void displayCustomers()
{
    for(int i=0;i<cid;i++)
    {
        
        printf("Customer Id: %d\n",cus[i].cusId);
        printf("Customer Name: %s\n",cus[i].cusName);
        printf("Customer Phone Number: %s\n",cus[i].cusPhno);
        
    }
}

void createProduct()
    {
        printf("enter the product name:");
        scanf("%s",prod[pid].prodName);
        printf("enter the product Quantity:");
        scanf("%s",prod[pid].prodQty);
        printf("enter the product Cost:");
        scanf("%s",prod[pid].prodCost);
        prod[pid].prodId=pid+1;
        printf("======produt data entered successfully====");
        pid++;
        
    }
    
void displayProduct()
    {
        for(int i=0;i<pid;i++){
        printf("Product Id: %d\n",prod[i].prodId);
        printf("Product Name: %s\n",prod[i].prodName);
        printf("Product Qty: %s\n",prod[i].prodQty);
        printf("Product Cost: %s\n",prod[i].prodCost);
    }
    }
        
void createBill()
{
   printf("Enter Your Customer ID: ");
   scanf("%d",&bill[bid].cuID);
   printf("Enter Number of products you need to buy: ");
   scanf("%d",&bill[bid].n);
   for(int i=0;i<bill[bid].n;i++)
   {
       printf("Enter the Product Id: ");
       scanf("%d",&bill[bid].itm[i].itmId);
       printf("Enter the Product Quantity: ");
       scanf("%d",&bill[bid].itm[i].itmqua);
   }
    }


int main()
{
    while(1)
    {
        int n;
        printf(" 1)Create Customer\n 2)Display Customer\n 3)Create product\n 4)Display Product");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
               createCustomer();
               break;
            }
            case 2:{
                displayCustomers();
                break;
            }
            case 3:{
                createProduct();
                break;
            }
            case 4:{
                displayProduct();
                break;
            }
            case 5:{
                createBill();
                break;
            }
        }
    }
    return 0;
}
    
    
 
    
