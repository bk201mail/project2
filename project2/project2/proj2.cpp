
#include <iostream>


using namespace std;

int main()
{
	//int arr_P[6];

	///memset(arr_P, 0, sizeof(arr_P));
	int n=11, q=0, j=0;    //11 for proj, 6 for hw

	int arr_p[] = {30, 100, 50, 98, 102, 45, 28, 555, 16, 77, 20 }; //{10,100,20,50,100,10};//  

	int arr_m[12][12];  //12 for proj, 7 for hw 2

	for(int i = 1; i<n; i++)
	{
		
		arr_m[i][i]=0;
		//memset(arr_m, 0, sizeof(arr_m));	
	}

	for(int l = 2; l<n; l++)
	{
		for(int i=1; i<(n-l+1); i++)
		{
			j = i+l-1;
			arr_m[i][j] = 1000000000;

			//for debug------------
			if(1){
				cout<<"A"<<i<<j<<":"<<endl;
			}
			//---------------------

			for(int k=i; k<=j-1; k++)
			{
               q = arr_m[i][k] + arr_m[k+1][j] + (arr_p[i-1] * arr_p[k] * arr_p[j]);
			   
			   //----For Debug-----------------------------
			   if(1){
					cout<<"Case"<<k<<": "<<q<<endl;
			   }
			   //------------------------------------------

			   if(q < arr_m[i][j])
			    {
				 arr_m[i][j] = q;
			    }
			}
		}
	}

	cout<<"======================================================="<<endl;
	int w=1;
	for(int y=1; y<n; y++)
	{
		for(int r=w; r<n; r++)
		{
			cout<<"A"<<y<<","<<r<<": "<<arr_m[y][r]<<endl;
		}
		w=w+1;
	}

   cin.get();

}
