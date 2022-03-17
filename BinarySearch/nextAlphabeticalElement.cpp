class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;
        char answer = '~';
        while(start<=end){
            int mid = start + (end - start)/2;
            if(letters[mid] == target)
                start = mid + 1;
            else if(letters[mid] < target)
                start = mid + 1;
            else if(letters[mid] > target){
                if(letters[mid] < answer){
                    answer = letters[mid];
                }
                end = mid - 1;
            }
        }
        if(answer == '~')
            return letters[0];
        else
            return answer;
    }
};