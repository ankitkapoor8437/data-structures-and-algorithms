#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> nums1,vector<int> nums2){

        vector<int> merge;
        int l = nums1.size() + nums2.size(); 
        for(int i = 0; i < nums1.size(); i++)
        {
            merge.push_back(nums1[i]);
        }


        int j = 0;
        for (int i = nums1.size() ; i < l; i++)
        {
            
            merge.push_back(nums2[j]);
            j++;
        }
        



        // for(int i=nums1.size()+1; i< nums2.size(); i++)
        // {
        //     merge.push_back(nums2[i]);
        // }
        
        for(int i= 0; i< l; i++)
        {
            cout<< merge[i]<<' ';
        }
        cout<< endl;

}



int main()
{
    vector<int> nums1;
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(5);
    nums2.push_back(2);
    nums2.push_back(6);
    nums2.push_back(7);
    nums2.push_back(8);

    merge(nums1, nums2);

    // for (int i = 0; i < nums1.size(); i++)
    // {
    //     cout<< nums1[i]<<' ';
    // }
    // cout<< endl;

    // for (int i = 0; i < nums2.size(); i++)
    // {
    //     cout<< nums2[i]<< ' ';
    // }
    // cout<< endl;

    return 0;
}


        // vector<int> merge;
        // int l = m + n; 
        // for(int i = 0; i < m; i++)
        // {
        //     merge.push_back(nums1[i]);
        // }


        // // int j = 0;
        // // for (int i = m ; i < l; i++)
        // // {
            
        // //     merge.push_back(nums2[j]);
        // //     j++;
        // // }
        
        // // sort(merge.begin(), merge.end());
        
        // // for(int i= 0; i< l; i++)
        // // {
        // //     cout<< merge[i]<<' ';
        // // }
        // // cout<< endl;

        // int pos1 = m - 1;
		// int pos2 = n - 1;
		// int pos3 = m + n - 1;

		// while (pos1 >= 0 && pos2 >= 0)
		// {
		// 	if (nums1[pos1] > nums2[pos2])
		// 	{
		// 		nums1[pos3--] = nums1[pos1--];
		// 	}
		// 	else
		// 	{
		// 		nums1[pos3--] = nums2[pos2--];
		// 	}
		// }

		// while (pos1 >= 0)
		// {
		// 	nums1[pos3--] = nums1[pos1--];
		// }

		// while (pos2 >= 0)
		// {
		// 	nums1[pos3--] = nums2[pos2--];
		// }