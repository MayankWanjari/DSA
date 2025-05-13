/* Pass by Value Code*/


#include <bits/stdc++.h>
using namespace std;


void add(int b){ // Value of a is copied to value of b. 
    b = b+2;
    return ;
}

// We are creating a new vector and copying all the values of V to Cv 
// o(N) --> N representing size of the vector.
void addVector(vector<int> cV){ // All values of v copied to cV 
    int N = cV.size();
    for(int i=0;i<N;i++){
        cV[i] += 10;
    }
    return;
    
}
int main() {
    
	// your code goes here
	int a = 10;
	add(a);
	cout<<a<<"\n";
	
	
	vector<int> v(4,10); // v{10 10 10 10}
	addVector(v);
	int N = v.size();
	for(int i=0;i<N;i++){
	    cout<<v[i]<<" ";
	}

}


//* Pass by refernece*

#include <bits/stdc++.h>
using namespace std;
// & indiclates pass by reference : Sharing same memory location.
// TC: O(1)
void add(vector<int> &v){
    int N = v.size();
    for(int i=0;i<N;i++){
        v[i] += 10;
    }
    return;
}

int main() {
	// your code goes here
	vector<int> a(3,10); // a{10 10 10 }
	add(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
