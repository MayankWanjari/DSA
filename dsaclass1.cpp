#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    /*
        Variable 
        datatypw name;
        
        int a;
        cin>>a;
        cout<<a<<"\n";
    */
    
    /*
        if(){
            
        }
        else if(){
            
        }
        else{
            
        }
    
        int prak;
        cin>>prak;
        if(prak>20){
            cout<<"Ready to marry";
        }
        else if(prak>=18 && prak<=20){
            cout<<"Can only vote cannot manny yet";
        }
        else{
            cout<<"Excited for eveythingc annot do anything";
        }
    */
    
    /*
        Loops 
        1. While loop 
        2. For Loop 
        3. For Each Loop : Vecor 
        3. Do while --> Skip
        
        while loop
            int i=1;
            while(i<=5){
                cout<<i<<"\n";
                i++;
            }
        
        For loop
            for(int i=1;i<=10;i++){
                cout<<i<<" ";
            }
    */
       
    /*
        Arrays : 
            datayype name[size];
            
        int N;
        cin>>N; // N = 4
        int ar[N]; // ar[4] = {}
        for(int i=0;i<N;i++){
            cin>>ar[i];
        }
        
        for(int i=0;i<N;i++){
            cout<<ar[i]<<" ";
        }
        cout<<sizeof(ar)/sizeof(ar[0]);
      
    */
    
    /*
        2D Mat 
         datatype name[N][M];
         
         
        int N,M;
        cin>>N>>M; // N = 2, M = 3 
        
        int mat[N][M]; // mat[2 rows][3 columns];
        
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>mat[i][j];
            }
        }
        
            i=0:
                j=0 : cin>>mat[0][0] =
                j=1 : cin>>mat[0][1]
                j=2 : cin>>mat[0][2]
                j=3 : j<M break
            i=1 
                j=0 : cin>>mat[1][0]
                j=1 : cin>>mat[1][1]
                j=2 : cin>>mat[1][2]
                j=3 : j<M break
                
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
        
    */
      
      
    /*
        vector : Dynbami carraty 
        
        vector<type> vanme;
        
            vector<int> v;   // V{}
            int N = v.size(); // No of eleement in vecotr 
            cout<<N<<"\n";
            
            v.push_back(10); // V{10}
            v.push_back(20); // V{10 20}
            v.push_back(30); // V{10 20 30}
            v.push_back(40); // V{10 20 30 40}
            
            N = v.size(); // No of eleement in vecotr 
            cout<<N<<"\n";
          
            cout<<v[0]<<" "<<v[2]<<"\n";
            
            // vector [N] : index = 0 1 2 . ., . N - 1
            for(int i=0;i<N;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
            v.pop_back(); // delete last element V{10 20 30}
            N = v.size();
            for(int i=0;i<N;i++){
                cout<<v[i]<<" ";
            }
        
        vector<type> vname(size,default_value)
        
            vector<int> v(4,10);
        
                    0   1   2   3
            v[4] = {10 10  10 10}
        
        
            int N = v.size();
            cout<<N<<"\n";
            for(int i=0;i<N;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";  
            
            v.push_back(20); // v ={10 10 10 10 20}
            N = v.size();
            cout<<N<<"\n";
            for(int i=0;i<N;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";  
        
        
        vector<type> vname(size); // Default vvalue 
        integer type --> Default 0 
        decmial tyoe --> Defauly 0.0 
        string type --> Defauly ""
        
        vector<int> v(4); // v{0 0 0 0}
        int N = v.size();
        cout<<N<<"\n";
        for(int i=0;i<N;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        
    */
        
    /*
    
        vector< vector<int> > v; // Each ele in v is vector<int>
        // It can be jageed array each is of different size.
        
        // v.push_back(10); we need to push vector<int>
        
        
        
        vector<int> t1(3,10); // t1 {10 10 10}
        vector<int> t2(4,20); // t2 {20 20 20 20}
        vector<int> t3(2,30); // t3 {30 30}
        
        v.push_back(t1); 
        
            v
                0 :  {10 10 10}
        
       
        v.push_back(t2); 
        
            v
                0 :  {10 10 10}
                1 :  {20 20 20 20}
        
         v.push_back(t3); 
        
            v.        0. 1. 2.  3
                0 :  {10 10 10}
                1 :  {20 20 20 20}
                2 :  {30 30}
        
    
        cout<<v[0][1]<<"\n";
        cout<<v[2][1]<<"\n";
        
        cout<<v.size()<<"\n";
        cout<<v[0].size()<<" "<<v[1].size()<<" "<<v[2].size()<<"\n";
        
        
        int N = v.size();
        for(int i=0;i<N;i++){
            // Print V[i] is a vector;
            int M = v[i].size();
            for(int j=0;j<M;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
      
      
         vector< vector<int> > V(5, vector<int>(3,10) );
        
        
            vector<int>(3,10) = {10 10 10}
            V 
              0 : {{10 10 10}
              1 : {{10 10 10}
              2 : {{10 10 10}
              3 : {{10 10 10}
              4 : {{10 10 10}
        
        cout<<V.size()<<"\n";
        int N = V.size();
        for(int i=0;i<N;i++){
            int M = V[i].size();
            for(int j=0;j<M;j++){
                cout<<V[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        string s = "Hello"; // s[i] is chaarcter.
        cout<<s<<"\n";
        
        cout<<s.size()<<"\n";
        cout<<s[1]<<" ";
        cout<<s[2]<<"\n";
        s[2] = 'L';
        cout<<s<<"\n"; // HeLlo;
        s[1] = 'E'; // At an index we cna only keep characters

        // char ch = "E"; Storing string in char is erro.
        
        s += " Yellow";
        cout<<s<<"\n";
        
        s.append(" Zello");
     
        cout<<s;
        
    */
    
    // String --> Array of charatcers , each index is type char
}
