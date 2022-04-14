#include<iostream>
#include<vector>
using namespace std;

vector<int> spiral(int arr[][3], int row, int col)
{
    vector<int> ans;

    int count = 0;
    int total = row*col;

    // index initialisation
    int startrow = 0;
    int startcol = 0;
    int endrow = row-1;
    int endcol = col-1;

    while (count<total)
    {
        // print staring row
        for (int i = startcol; i < endcol; i++ )
        {
            ans.push_back(arr[startrow][i]);
            count++;
        }
        startrow++;

        // print end col
        for (int i = startrow; i < endrow; i++)
        {
            ans.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;

        // print end row
        for (int i = endcol; i >= startcol; i--)
        {
            ans.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;

        
        //  print start col
        for (int i = endrow; i >= startrow; i--)
        {
            ans.push_back(arr[i][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;

}



int main()
{
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col]<<" ";
        }
        cout<< endl;
    }
    int result = spiral(matrix, 3, 3);

    cout << result;


    return 0;
}




/*

    Time Complexity : O(N * M)
    Space Complexity : O(1)

    Where N is the number of rows in the matrix,
          M is the number of columns in the matrix.

*/

vector<long> spiralPathMatrix(vector<vector<long> > matrix,long m,long n)
{
     long i;
     long k = 0;
     long l = 0;
 
    /*  
        k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    // Make vector to store the path
    vector<long> path;

    while (k < m && l < n) 
    {
        // Push the first row from the remaining rows 
        for (i = l; i < n; ++i) 
        {
            path.push_back(matrix[k][i]);
        }
        k= k + 1;
 
        // Push the last column from the remaining columns */
        for (i = k; i < m; ++i) 
        {
            path.push_back(matrix[i][n - 1]);
        }
        n = n - 1;
 
        // Push the last row from the remaining rows 
        if (k < m)
        {
            for (i = n - 1; i >= l; --i) 
            {
                path.push_back(matrix[m - 1][i]);
            }
            m = m - 1;
        }
 
        // Push the first column from the remaining columns 
        if (l < n) 
        {
            for (i = m - 1; i >= k; --i) 
            {
                path.push_back(matrix[i][l]);
            }
            l = l + 1;
        }
    }

    return path;
}



vector<long> spiralPathMatrix(vector<vector<long>> matrix,long n,long m)
{
// 	vector<long> ans;
	
    
//     long count = 0;
//     long total = n*m;
	long i;
    // index initialisation
    long k = 0;
    long l = 0;
//     long endrow = n-1;
//     long endcol = m-1;
	vector<long> ans;
    while (k<n && l<m)
    {
        // print staring row
        for ( i = l; i < m; ++i )
        {
            ans.push_back(matrix[k][i]);
//             count++;
        }
        k++;

        // print end col
        for ( i = k; i < n; ++i)
        {
            ans.push_back(matrix[i][m-1]);
//             count++;
        }
        m--;

        // print end row
        if(k<n)
      {  for ( i = m-1;   i >= l; --i)
        {
            ans.push_back(matrix[n-1][i]);
//             count++;
        }
        n--;}

        
        //  print start col
        if(l<m)
       { for ( i = n-1;  i >= k; --i)
        {
            ans.push_back(matrix[i][l]);
//             count++;
        }
        l++;}
    }
    return ans;
}