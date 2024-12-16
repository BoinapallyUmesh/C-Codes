//Binary Number

#include <stdio.h>
#include <limits.h>

void printBinary(int num) {
    // Assuming 32-bit integer
    for (int i = sizeof(int) * CHAR_BIT - 1; i >= 0; i--) {
        // Right shift num by i bits and perform bitwise AND with 1
        // This extracts the i-th bit
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    printBinary(num);
    return 0;
}








/*#include <stdio.h>

void print_concatenated_vowel_counts(const char *S) {
    // Initialize variables
    int vowel_count = 0;
    char result[100] = "";  // Assuming the result won't exceed 100 characters
    int word_count = 0;

    // Iterate through the input string
    for (const char *ptr = S; *ptr; ++ptr) {
        if (*ptr == ' ' || *(ptr + 1) == '\0') {
            // Check if the current character is a vowel
            if (tolower(*(ptr - 1)) == 'a' || tolower(*(ptr - 1)) == 'e' ||
                tolower(*(ptr - 1)) == 'i' || tolower(*(ptr - 1)) == 'o' || tolower(*(ptr - 1)) == 'u') {
                ++vowel_count;
            }

            // Concatenate the vowel count to the result string
            if (word_count > 0) {
                sprintf(result + strlen(result), "%d", vowel_count);
            } else {
                sprintf(result + strlen(result), "%da", vowel_count);
            }

            // Reset counters for the next word
            vowel_count = 0;
            ++word_count;
        } else {
            // Check if the current character is a vowel
            if (tolower(*ptr) == 'a' || tolower(*ptr) == 'e' || tolower(*ptr) == 'i' ||
                tolower(*ptr) == 'o' || tolower(*ptr) == 'u') {
                ++vowel_count;
            }
        }
    }

    // Print the final result
    printf("%s\n", result);
}

int main() {
    // Sample Input
    const char *input_string = "Iam an engineer";

    // Function call
    print_concatenated_vowel_counts(input_string);

    return 0;
}
#include <stdio.h>
int main()
{
  static int i=5;
  if(--i){
    main();
    printf("%d ",i);
  }
  return 0;
}*/

/*#include<stdio.h>
int main()
{

    int i;
    #if A
        printf("Enter any number:");
        scanf("%d",&i);
    #elif B
        printf("The number is odd");
    return 0;
}

#include<stdio.h>
int main()
{

    printf("%p\n",main())
    return 0;
}


#include<stdio.h>
void main()
 {
     int n=11,i,j,space,h;
     h=(n+1)/2;//h=4
     for(i=1;i<=h;i++)
       {
         for(j=1;j<=i;j++)
           printf("*");
         for(space=1;space<=n-2*i+1;space++)
           printf(" ");
           for(j=1;j<=i;j++)
           printf("*");

         printf("\n");
       }
int r=n-h;
    for(i=1;i<=n-h;i++)
     {
       for(j=r;j>0;j--)
         printf("*");
    for(space=1;space<=2*i;space++)
        printf(" ");
          for(j=r;j>0;j--)
         printf("*");
    r--;
    printf("\n");
     }

 }*/

// ---------------------------------------------------------------------------------------------------------------------------------------------------
 /*#include<stdio.h>
void array(int arr[],int size);
void printarray(int arr[],int size);
void smallest(int arr[],int size);
int main()
{
    int size,i,j;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    array(arr,size);
    printarray(arr,size);
    smallest(arr,size);
}
//printf("enter the array elements:");
void array(int arr[],int size)
{
    printf("enter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void printarray(int arr[],int size)
{
    printf("the array elments are:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void smallest(int arr[],int size)
{
    int k,i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nthe soretd elements are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the kth smallest element:");
    scanf("%d",&k);
    printf("The k th samllest element is:%d",arr[k-1]);
}
//array does not check for array boundary in c and c++
//why size is passes as parameter in function calling
//because we are restricting the loop traversal upto size indicated

*/
/*#include<stdio.h>
int main()
{
    int Nr,Dr,c=0;
    printf("Enter the numerator:");
    scanf("%d",&Nr);
    printf("Enter the denominator:");
    scanf("%d",&Dr);
    while(Nr>=Dr && Dr!=0)
    {
        Nr-=Dr;
        c+=1;
    }
    printf("the quotient is :%d",c);
}
*/
//multiplication of two numbers without *
/*#include<stdio.h>
int main()
{
    int num1,num2;
    int p=0;
    printf("Enter the two number:");
    scanf("%d%d",&num1,&num2);
    while(num2!=0)
    {
        p=p+num1;
        num2--;
    }
    printf("Multiplication is %d",p);
}
*/

/*
#include<stdio.h>
int main()
{
    int arr1[5]={2,3,4,6,9};
    int arr2[5]={2,4,6,7,11};
    int arr3[5]={2,4,7,11,20};
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                if(arr1[i] == arr2[j] == arr3[k])
                {
                    printf("%d",arr1[i]);
                }
            }
        }
    }
}
*/
/*#include<stdio.h>
int main()
{
    printf("Hello\nGood morning\n");
}
*/
/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d%d",&a,&b);
    printf("Sum of %d + %d is %d",a,b,a+b);
    printf("\nDifference of %d - %                                                                                                                                                                                                      d is %d",a,b,a-b);
    printf("\nProduct of %d * %d is %d",a,b,a*b);
    printf("\nQuotient of %d / %d is %d\n",a,b,a/b);
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%2!=0)
    {
        printf("it is odd number");
    }
    else
    {
        printf("it is even number");
    }
}
*/
/*#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if((num&1)==0)
    {
        printf("It is even number");
    }
    else{
        printf("it is odd number");
    }
}
*/
/*#include<stdio.h>
int main()
{
    int i;
    printf("first 10 natural numbers are:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
}
*/
/*#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted elements of the array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSmallest element in the array is:%d",arr[0]);
    printf("\nLargest element in the array is:%d",arr[size-1]);
}
*/
/*#include<stdio.h>
void check(int arr[],int n);
void check(int arr[],int n)
{
    int small,large;
    small=large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("Small:%d",small);
    printf("\nLarge:%d",large);
}
int main()
{
    int n;
    printf("Enter the size of aray:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    check(arr,n);
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char ch;
    int l;
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
     ch=str[i];
     str[i]=str[l-1-i];
     str[l-1-i]=ch;
    }
    printf("Reverse string is :%s",str);
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char ch;
    int l,j,i;
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    for(i=0,j=l-1;i<j;i++,j--)
    {
     ch=str[i];
     str[i]=str[j];
     str[j]=ch;
    }
    printf("Reverse string is :%s",str);
}
*/
/*#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    for(i=0;str[i];i++); //length of the string
    printf("Length of string is:%d",i);
    printf("\nReverse string is:");
    for(i=i-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
*/
/*#include<stdio.h>
int main()
{
    int num,i,c=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
    if(num%i==0)
    {
        c+=1;
        break;
    }
    }
    if(c==1)
    {
        printf("Not a prime");
    }
    else{
        printf("Prime");
    }
}
*/
/*#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n,result;
    printf("Enter the number:");
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial of %d is %d",n,result);
}
*/
/*#include<stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n ;
    printf("enter the no of terms :");
    scanf("%d",&n);
    printf("Fibonnaci series are :");
    for(int i=0;i<n;i++)
    {
    printf("\n%d ",fib(i));
    }
}
*/
/*#include<stdio.h>
void swap(int*x,int*y);
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n");
    printf("a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping\n");
    printf("a=%d,b=%d",a,b);
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int sum;
int main()
{
    int n;
    printf("enter the no of array elements:");
    scanf("%d",&n);
    int *ptr;
    //ptr=NULL;
    if(ptr==NULL)
    {
        printf("Memory is not sufficient");
        exit(1); //program is terminating forcefully
    }
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
        //sum=sum+(*ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+(*(ptr+i));
    }
    printf("\nThe sum of array elements is:%d",sum);
    free(ptr);
    ptr=NULL;
}
*/
/*#include<stdio.h>
struct student
{
    char name[10];
    int age;
    char grade;
};
int main()
{
    struct student s={"Dora",22,'A'};
    printf("student details\n");
    //printf("Name:%s\n",s.name);
    //printf("Age:%d\n",s.age);
    //printf("Grade:%c\n",s.grade);
    printf("Name:%s\nAge:%d\nGrade:%c",s.name,s.age,s.grade);
}
*/
/*#include<stdio.h>
#include<string.h>
union data
{
    //char name[10];
    int age;
    char grade;
    char name[10];
};
int main()
{
    union data d;
   // printf("Name:%s\n",d.name);
    d.age=23;
    //printf("Age:%d\n",d.age);
    d.grade='A';
    //printf("Grade:%c\n",d.grade);
    strcpy(d.name,"Dora");
    printf("\n");
    printf("Age:%d\nGrade:%c\nName:%s",d.age,d.grade,d.name);
}
*/
/*
#include <stdio.h>

// Function to multiply two integers using repeated addition
int multiply(int a, int b) {
    int result = 0;

    // Handle negative numbers
    int positive_b = (b < 0) ? -b : b;
    int positive_a = (a < 0) ? -a : a;

    for (int i = 0; i < positive_b; i++) {
        result += positive_a;
    }

    // If one of the numbers is negative, the result should be negative
    if ((a < 0 && b >= 0) || (a >= 0 && b < 0)) {
        result = -result;
    }

    return result;
}

int main() {
    int num1, num2;

    printf("Enter two integers to multiply: ");
    scanf("%d %d", &num1, &num2);

    int product = multiply(num1, num2);

    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    printf("%d",a);
}
*/
//extern---->it is the shortname for external
//used when a particular file needs to access the variable from another file
//need of declaration only no definition because the variable is already defined somewhere in another program
//this will reduce the memory and we can reuse it
//Register memory size is small so it hold less size
//It is the fastest access

/*#include<stdio.h>
unsigned int swapbits(unsigned int a,unsigned int b1,unsigned int b2)
{
    unsigned int b=(a>>b1)&1;
    unsigned int c=(a>>b2)&1;
    if(b!=c)
    {
        unsigned int mask=(1<<b1)|(1<<b2);
        a^=mask;
    }
    return a;
}
int main()
{
    unsigned int a;
    printf("Enter the number:");
    scanf("%u",&a);
    unsigned int bit1;
    unsigned int bit2;
    printf("enter the bit to swap:");
    scanf("%u",&bit1);
    printf("Enter the 2nd bit to swap:");
    scanf("%d",&bit2);
    printf("Original number:%u",a);
    unsigned int res=swapbits(a,bit1,bit2);
    printf("\nNumber after swapping the bits:%d",res);
}
*/

//no of ones in the number in c language
/*#include<stdio.h>
int main()
{
    int num,c;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        if((num&1)==1)
        {
            c+=1;
            num=num>>1;
        }
    }
    printf("No of ones:%d",c);
}
*/
/*#include<stdio.h>
int find_anagram(char [],char[]);
int main()
{
    char str1[50];
    char str2[50];
    int flag;
    printf("enter the string1:");
    gets(str1);
    printf("enter the string2:");
    gets(str2);
    flag=find_anagram(str1,str2);
    if(flag==0)
        printf("%s and %s are not anagrams",str1,str2);
    else
        printf("%s and %s are anagrams",str1,str2);
}
int find_anagram(char str1[],char str2[])
{
    int n1[26]={0},n2[26]={0},i=0;
    while(str1[i]!='\0')
    {
      n1[str1[i]-'a']++;
      i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        n2[str2[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(n1[i]!=n2[i])
            return 0;
    }
    return 1;
}
*/
/*#include<stdio.h>
int rd;
void removedup(int arr[],int size)
{
    int i;
    for(i=1;i<size;i++)
    {
        if(arr[rd]!=arr[i])
        {
            rd++;
            arr[rd]=arr[i];
        }
    }
    printf("\narray after removing duplicates:");
    for(i=0;i<=rd;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size,i;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elemnts in sorted order:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    removedup(arr,size);
}
*/
/*#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[]={12,6,4,2,9},i;
    int n=sizeof(a)/sizeof(a[0]);
    printf("The array elements before sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    bubblesort(a,n);
    printf("\nArray elements after sorting using bubble sort:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
*/
/*#include<stdio.h>
int binarysearch(int arr[],int size,int ele)
{
    int l,h,m;
    l=0;
    h=size-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==ele)
            return m;
        if(ele>arr[m])
        {
            l=m+1;
        }
        else
            h=m-1;
    }
    return -2;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ele=50;
    int searchindex=binarysearch(arr,size,ele);
    (searchindex==-2)?printf("Element not found"):printf("element %d found at index %d",ele,searchindex);
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int longestsubstring(char *s);
int longestsubstring(char *s)
{
    int i,j,max_len=0,len;
    int count[256]={0};
    for(i=0;s[i]!='\0';i++)
    {
        len=0;
        memset(count,0,sizeof(count));
        for(j=i;s[j]!='\0';j++)
        {
            if(count[s[j]]==0)
            {
                count[s[j]]++;
                len++;
            }
            else
            {
                break;
            }
        }
        if(len>max_len)
        {
            max_len=len;
        }
    }
    return max_len;
}
int main()
{
    int *p="abcdabcbb";
    int l;
    l=longestsubstring(p);
    printf("Longest substring length is:%d",l);
}
*/
//c program to swap smallest element with largest second element in the array

/*#include<stdio.h>
void sorted(int arr[],int n);
void array(int arr[],int n);
void print(int arr[],int n);
void changepos(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of array elements:");
    scanf("%d",&n);
    int arr[n];
    array(arr,n);
    print(arr,n);
    sorted(arr,n);
    changepos(arr,n);
}
void array(int arr[],int n)
{
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n)
{
    printf("The array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
               {
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
               }
        }
    }
    printf("\nThe sorted array is:");
    print(arr,n);
    //for(int i=0;i<n;i++)
    //{
     //   printf("%d ",arr[i]);
    //}
}
void changepos(int arr[],int n)
{
    int temp=arr[0];
    arr[0]=arr[n-2];
    arr[n-2]=temp;
    printf("\n\nThe array after changing position is:");
    print(arr,n);
    //for(int i=0;i<n;i++)
    //{
      //  printf("%d ",arr[i]);
    //}
    printf("\n");
}
*/

/*#include<stdio.h>
void subseq(a,n);
void sorted(int a[],int n);
void print(int a[],int n);
int main()
{
    int n,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    subseq(a,n);
}
void subseq(int a[],int n)
{
    int dp[n];
    int max_length=1;
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]&&dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max_length<dp[i])
        {
            max_length=dp[i];
        }
    }
    printf("\nLength of subsequence is:%d",max_length);
}
*/
//write a program in c to check if the given string of parenthesis is balanced or not

/*#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter the sequence in the form of paranthesis:");
    gets(s);
    int x=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
           x++;
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
            x--;
        i++;
    }
    if(x==0)
        printf("Balanced");
    else
        printf("unbalanced");
}
*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 200
typedef struct
{
    int top;
    char items[MAX];
}Stack;
Stack*createstack()
{
    Stack* stack=(Stack*)malloc(sizeof(stack));
    stack->top=-1;
    return stack;
}
void push(Stack* stack,char item)
{
    if(stack->top==MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++stack->top]=item;
}
char pop(Stack* stack)
{
    if(stack->top==-1)
    {
        printf("Stack underflow\n");
    }
    return stack->items[stack->top--];
}
int opening(char ch)
{
    return ch=='('||ch=='['||ch=='{';
}
int closing(char ch)
{
    return ch==')'||ch=='}'||ch==']';
}
int ismatching(char opening,char closing)
{
    return (opening=='('&&closing==')')||(opening=='['&&closing==']')||(opening=='{'&&closing=='}');
}
int isbalanced(char*exp)
{
    Stack* stack=createstack();
    for(int i=0;i<strlen(exp);i++)
    {
        char ch=exp[i];
        if(opening(ch))
        {
            push(stack,ch);
        }
        else if(closing(ch))
        {
            if(stack->top==-1)
            {
                free(stack);
                return;
            }
            else
            {
                char top=pop(stack);
                if(!ismatching(top,ch))
                {
                    free(stack);
                    return 0;
                }
            }
        }
    }
}
int main()
{
    char exp[MAX];
    printf("Enter the string of parenthesis:");
    gets(exp);
    if(isbalanced(exp))
    {
        printf("Balanced");
    }
    else
    {
        printf("Not balanced");
    }
}
*/
/*#include<stdio.h>
int main()
{
    int password,count=0;
    back:printf("\nEnter the password:");
    scanf("%d",&password);
    count++;
    if(password==1234)
    {
        printf("Access granted");
    }
    else
    {
        if(count<5)
        {
        printf("Access not granted\nReenter password");
        goto back;
        }
        else
        {
            printf("Out of attempts");
        }
    }
}
*/
/*#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("%d",sum);
}
*/
/*#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<5;j++)
    {
       // printf("%d%d ",i,j);
        if(i==1&j==2)
            break;
        printf("%d%d ",i,j);
    }
}
}
*/
/*#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top = -1;
int arr[MAX];
int main()
{
    int choice,item;
    while(1)
    {
    printf("\n1.push\n2.pop\n3.top\n4.display\n5.exit");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nEnter the item to be pushed into stack:");
        scanf("%d",&item);
        push(item);
        break;
        case 2:printf("\nThe deleted item is:%d",pop());
        break;
        case 3:printf("\nThe top element is:%d",peek());
        break;
        case 4:display();
        break;
        case 5:exit(0);
        break;
        default:printf("Invalid enter");
    }
}
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void push(int item)
{
    if(isfull())
        printf("stack overflow");
    else
    {
        top++;
        arr[top]=item;
        printf("The element is:%d",item);
    }
}
int pop()
{
    if(isempty())
        printf("stack is empty");
    else
    {
        int item=arr[top];
        top--;
        return item;
    }
}
void display()
{
    if(isempty())
        printf("stack is empty");
    int i;
    printf("The stack elements are:");
    for(i=top;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
int peek()
{
    if(isempty())
        printf("Stack is empty");
    return arr[top];
}
*/
/*#include<stdio.h>
#include<stdlib.h>
#define MAX1 5
#define MAX2 5
int s1[MAX1];
int s2[MAX2];
int top1=-1;
int top2=-1;
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue(40);
    dequeue(20);
    display();
}
void enqueue(int item)
{
    if(isfull())
        printf("Queue is empty");
    else
    {
        top1++;
        s1[top1]=item;
        printf("\nThe item is:%d",item);
    }
}
int isempty()
{
    if(top1==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top1==MAX1-1)
        return 1;
    else
        return 0;
}
int dequeue()
{
    if(isempty())
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        int ele=s1[top1];
        top1--;
        printf("\nThe deleted element is:%d",ele);
        top2++;
        s2[top2]=ele;
        printf("\nThe deleted ele in s2 is:%d",ele);
    }
}
void display()
{
    if(isempty())
        printf("Queue is empty");
    else
    {
        int i,j;
        printf("\nthe elements in s1 are:");
        for(i=top1;i>=0;i--)
        {
            printf("%d ",s1[i]);
        }
        for(j=top2;j>=0;j--)
        {
            printf("%d ",s1[i]);
        }
    }
}
*/
/*#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int *data;
    int top;
    int capacity;
}Stack;
Stack* createstack(int capacity)
{
    Stack*stack=(Stack*)malloc(sizeof(Stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->data=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}
int isemptystack(Stack*stack)
{
    return stack->top==-1;
}
void push(Stack*stack,int item)
{
    stack->data[++stack->top]=item;
}
int pop(Stack*stack)
{
    if(isemptystack(stack))
        return -1;
    return stack->data[stack->top--];
}
int top(Stack*stack)
{
    if(isemptystack(stack))
        return -1;
    return stack->data[stack->top];
}
typedef struct
{
    Stack *stack1;
    Stack *stack2;
}Queue;
Queue* createqueue(int capacity)
{
    Queue*queue=(Queue*)malloc(sizeof(Queue));
    queue->stack1=createstack(capacity);
    queue->stack2=createstack(capacity);
    return queue;
}
void enqueue(Queue*queue,int x)
{
    push(queue->stack1,x);
}
int dequeue(Queue*queue)
{
    if(isemptystack(queue->stack2))
    {
        while(!isemptystack(queue->stack1))
              {
                  push(queue->stack2,pop(queue->stack1));
              }
    }
    return pop(queue->stack2);
}
int front(Queue*queue)
{
    if(isemptystack(queue->stack2))
    {
        while(!isemptystack(queue->stack1))
              {
                  push(queue->stack2,pop(queue->stack1));
              }
    }
    return top(queue->stack2);
}
int isemptyqueue(Queue*queue)
{
    return isemptystack(queue->stack1) && isemptystack(queue->stack2);
}
int main()
{
    Queue*queue=createqueue(100);
    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    printf("Front element is:%d\n",front(queue));
    printf("Dequeued element is %d\n",dequeue(queue));
     printf("Front element is:%d\n",front(queue));
    printf("Dequeued element is %d\n",dequeue(queue));
    printf("IS the queue empty?%d\n",isemptyqueue(queue));
    printf("Dequeued element is %d\n",dequeue(queue));
    printf("IS the queue empty?%d\n",isemptyqueue(queue));
    free(queue->stack1->data);
    free(queue->stack1);
    free(queue->stack2->data);
    free(queue->stack2);
    free(queue);
}

#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int *data;
    int top;
    int capacity;
}Stack;
Stack* createstack(int capacity)
{
    Stack*stack=(Stack*)malloc(sizeof(Stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->data=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}
int isemptystack(Stack*stack)
{
    return stack->top==-1;
}
void push(Stack*stack,int item)
{
    stack->data[++stack->top]=item;
}
int pop(Stack*stack)
{
    if(isemptystack(stack))
        return -1;
    return stack->data[stack->top--];
}
int top(Stack*stack)
{
    if(isemptystack(stack))
        return -1;
    return stack->data[stack->top];
}
typedef struct
{
    int *data;
    int front;
    int rear;
    int capacity;
}Queue;
Queue*createqueue(int capacity)
{
    Queue*queue=(Queue*)malloc(sizeof(Queue));
    queue->capacity=capacity;
    queue->rear=0;
    queue->front=0;
    queue->data=(int*)malloc(queue->capacity*sizeof(int));
    return queue;
}
int isemptyqueue(Queue*queue)
{
    return queue->front==queue->rear;
}
void enqueue(Queue*queue,int x)
{
   if(queue->rear==queue->capacity)
   {
       printf("Full");
   }
   queue->data[queue->rear++]=x;
}
int dequeue(Queue*queue)
{
    if(isemptyqueue(queue))
    {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->data[queue->front++];
}
void reverse(Queue*queue)
{
    Stack*stack=createstack(queue->capacity);
    while(!isemptyqueue(queue))
        push(stack,dequeue(queue));
    while(!isemptystack(stack))
        enqueue(queue,pop(stack));
    free(stack->data);
    free(stack);
}
int main()
{
    Queue*queue=createqueue(100);
    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    //reverse(queue);
    printf("original queue:");
    for(int i=queue->front;i<queue->rear;i++)
    {
        printf("%d ",queue->data[i]);
    }
    reverse(queue);
    printf("\nReverse the queue:");
    for(int i=queue->front;i<queue->rear;i++)
    {
            printf("%d ",queue->data[i]);��
�}
}/*



//========================================================================================


/*#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int ele,i;
    ele=sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele;i++)
    {
        printf(" %d ",a[i]);
        printf("\n ");

    }
    for(i=ele-1;i>=0;i--)
    {
        printf("  %d ",a[i]);
        printf("\n  ");
    }
}

 #include <stdio.h>
    void main()
    {

        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

    }*/




// C program to sort array elements in descending order

/*#include <stdio.h>

int main()
{

    int a[10] = {13 ,45, 22, 100, 66, 37 };
    int n = 5, i, j, t = 0;

    // iterates the array elements
    for (i = 0; i < n; i++) {

        // iterates the array elements from index 1
        for (j = i + 1; j < n; j++) {

            // comparing the array elements, to set array
            // elements in descending order
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // printing the output
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
//Output:

//100 66 45 37 22
// Method 2: Using functions

// C program to sort array elements in descending order
// using functions

/*#include <stdio.h>
// defining the function
int desc_order(int a[10], int n)
{
    int i, j, t = 0;

    // iterates the array elements
    for (i = 0; i < n; i++) {

        // iterates the array elements from index 1
        for (j = i + 1; j < n; j++) {

            // comparing the array elements, to set array
            // elements in descending order
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // printing the output
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
int main()
{
    int arr[5] = { 45, 22, 100, 66, 37 };
    int num = 5;

    // calling the function
    desc_order(arr, num);
}

#include <stdio.h>
#include<string.h>
int main()
{

    char a[20],checked[20]={0};
    int i,j,k=0,sum=0,c,n,ch,present;
    printf("Enter the String:");
    scanf("%s",a);
    printf("the string is %s\n",a);
    n=strlen(a);
    for(i=0;i<n;i++)
       {
        present=0;//assume the character is not present in checked array
         c=1;
         for(ch=0;ch<k;ch++)//check for character presence in checked array
            {
                if(a[i]==checked[ch])
                  {
present=1;//if present change the status to present
                      break;
                  }
            }
          if(present!=1)//if character is not presnt in checked array,
          //compare and calculate number of times present
            {
             for(j=i+1;j<n;j++)
                 {
                     if(a[i]==a[j])
                       c++;
                 }
            printf("\nsum=%d",sum);
            printf("\n%c is present %d times",a[i],c);
            }
       }
}
#include <stdio.h>
#include<string.h>
int main()
{

    char a[20],rev[20];
    int i,j,n;
    printf("Enter the String:");
    scanf("%s",a);
    n=strlen(a);
    printf("the string is %s and length is %d\n",a,n);
    for(i=n-1,j=0;j<n;i--,j++)
     rev[j]=a[i];
    printf("rev = %s",rev);
}

/#include <stdio.h>
#include<string.h>

struct student
{
int id;//id,name and m are data members
char name[20];
float m;
};
struct student read();
void display(struct student);
int main()
{
    int a;
    struct student s;
    s=read();
    display(s);
    return 0;
}
struct student read()
{
   struct student s1;
    printf("Enter Details of Student1\nName Id and Marks:");
    scanf("%s%d%f",s1.name,&s1.id,&s1.m);
    return s1;
}
void display(struct student s1)
{
    printf("%s %d %f",s1.name,s1.id,s1.m);
}*/
