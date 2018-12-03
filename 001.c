/**
*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    int i = 0;
    int j = 0;

    for(i = 0; i < (numsSize - 1); i++){
        
        j = i + 1;
        int flag = 0;
        
        while(j <= (numsSize -1)){
            
            if ((nums[i] + nums[j]) == target){
                flag = 1;
                break;
            }
                
            else j = j + 1;
            
        }
        
       if(flag) break;
       
    }
    
    int* result = (int *)malloc(sizeof(int) * 2);
    result[0] = i;
    result[1] = j;
    
    return result;
}
