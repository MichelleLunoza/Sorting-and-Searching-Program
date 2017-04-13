#include <iostream>
using namespace std;


int main()
{
	char num;
	char m;
	
	do
	{
	cout<<"\t\t\tSorting and Searching Program\t\t\t"<<endl;				//Line 1 - output (Sorting and Searching)
	cout<<"\n\n\n\n";
	cout<<"Created by:";													//Line 2 - output (Created by:)
	cout<<"  Michelle Lunoza\t\t\n"<<endl;								//Line 3 - output					
	cout<<"\n\n";

	
	cout<<"Welcome in our program! Please press m for the menu.\n";			//Line 4 - output 'm'
	cin>>m;																	//Line 5 - inserting m
	cin.get();																//getting the right variable
	system("cls");															//clearing screen
	}
	while (m != 'm');														//not equal to m 
	
	do
	{
	cout<<"Please choose the number among the following:\n"<<endl;			//Line 6 - output (choosing)
	cout<<"--Sorting--\n"<<endl;											
	cout<<"Press no. 1 for Insertion Sort\n"<<endl;							 
	cout<<"Press no. 2 for Straight Selection Sort\n"<<endl;
	cout<<"--Searching--\n"<<endl;
	cout<<"Press no. 3 for Linear Searching"<<endl;
	cout<<"Press no. 4 to exit\n";
	cin>>num;																//Line 7 - insert num
	cin.get();																//getting right variable
	cout<<"Your choice is: "<<num<<"\n\n\n\n";
	system("pause");														//Line 8 - display(num)
	system("cls");															//clearing screen
	


	if(num=='1')																		// (If statement) For insertion
	{	
    int i,j,n,temp,a[100];																//Declaration of variable

		cout<<"\n\n                       ----------INSERTION SORT----------\n\n";
    cout<<"Enter the number of arrays: ";							
    cin>>n;																				//Inserting n
    cout<<"Enter the value.\n";
    for(i=0;i<n;i++)																	//Inserting value of arrays
    {																				
        cin>>a[i];																		//Insert arrays based on n
    }
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];																//moves element forward
            j=j-1;
        }
        a[j+1]=temp;																//insert element in proper place
    }
    cout<<"\nSorted list.\n";			
    for(i=0;i<n;i++)																//Sorted arrays
    {
        cout<<a[i]<<" ";															//output of sorted arrays
	}																				//end of if statement 1
		
    system("pause");
	system("cls");
	}

	if(num=='2')
		{ 
	int data [100];
	int n;
	int tmp;
	cout<<"\n\n                       ----------SELECTION SORT----------\n\n";
	cout<<endl;
	cout<<endl;
	cout <<"Enter the number of arrays: ";
	cin>>n;
	cout<<endl;
	for( int i = 0; i < n; i++)
		{
			cout<<"Enter the value.\n";
			cout<<"a["<<i<<"] = ";
			cin>> data [i];
		}

	cout << endl;

	for (int i = 0; i < n -1; i++)

		for (int j = i+1; j < n; j++)

			if (data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}

	cout<<"The sorted list is: ";
	for( int i = 0; i < n; i++)
		cout << data[i] << " "; 

	cout << endl;
	system ("pause");
				  
		}
	if(num=='3')
		{
			cout<<"\n\n                       ----------LINEAR SEARCHING----------\n\n";
		cout<<"Enter the number of arrays: ";
	int size;
	cin>>size;


	int array[100], a,i;


	 for(int j=0;j<size;j++)
	{
		cout<<"Enter a value."<<endl;
		cout<<"a["<<j<<"] = ";
		cin>>array[j];
	}

	for(int a=0;a<size;a++)
	{
		cout<<"array["<<a<<"]  =  ";
		cout<<array[a]<<endl;
	}

	cout<<"Enter value to search: ";
	cin>>a;

    for(i=0;i<size;i++)
	{
      if(a==array[i])
		{
		 cout<<"The value found at array:  "<<i<<endl;
		}
	}

	if(a=!i)
	{
		cout<<"value not found \n";
	}
	
	system("pause");
	return 0;

}
		if(num=='4')
		{
					cout<<"\n\nGoodbye!\n\n";
					system("pause");
					return 0;

	}
		
	}while ((num != '1') || (num != '2') || (num != '3') || (num != '4'));
	return 0;
}
