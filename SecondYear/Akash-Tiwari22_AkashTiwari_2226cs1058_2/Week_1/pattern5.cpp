class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=0;i<n;i++)
	    {
	        for(int j=n;j>=i+1;j--)
	        {
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
};