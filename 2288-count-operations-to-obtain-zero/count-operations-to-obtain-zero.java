class Solution {
    public int countOperations(int num1, int num2) {
        int counter = 0;

        while(num1 > 0 && num2 > 0){
            if(num1 >= num2){
                num1 -= num2;
            }
            else{
                num2 -= num1;
            }

            counter += 1;
        }
        return counter;
    }
}