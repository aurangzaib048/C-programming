#include"SparseMatrix.h"

int main()
{
	

	SparseMatrix obj;
	obj.InsertCell(3,2,1);
	obj.InsertCell(3,3,1);
	obj.InsertCell(3,4,1);
	obj.InsertCell(3,5,1);
	obj.InsertCell(3,6,1);

	//obj.LoadMatrix();
	
	obj.display();
	cout<<endl<<endl;
 	
	
	
	SparseMatrix* nextGen;
	int generationsToProduce;
	cout<<"Enter the Number of Life :";
	cin>>generationsToProduce;
	int count = 0;
	while(count < generationsToProduce)
	{
		nextGen = obj.MakeNextGeneration();
		obj.ReplaceCurrentGeneration(nextGen);
		obj.display();
		Sleep(500); //include time.h file to use this delay function
		count++;
		
	}

	cout<<endl;

	return 0;
}