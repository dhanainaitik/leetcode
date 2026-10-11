class Solution {
public:
    int subtractProductAndSum(int n) {

        int rem = 0;
        int product_of_digits = 1;
        int sum_of_digits = 0;

        while(n!=0){
            rem = n%10;
            product_of_digits *= rem;
            sum_of_digits += rem;
            n=n/10;
        }

        return (product_of_digits - sum_of_digits);
    }
};