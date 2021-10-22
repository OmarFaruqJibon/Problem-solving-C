#include<stdio.h>
#include <math.h>
#include<stdlib.h>
    /**
     * Encryption function.
     *
     * @param message the test number.
     * @param e       the e.
     * @param baseNum p*q.
     * @return encode the number.
     */
    int encode(int message, int e, int baseNum) {

        int res;
        res = 1;
        while (e != 0) {
            if ((e & 1) == 1)
                res = (res * message) % baseNum;
            e >>= 1;
            message = (message * message) % baseNum;
        }
        return res;
    }

    /**
     * Find the inverse element of e.
     *
     * @param e
     * @param fn
     * @return the
     */
    int getEni(int e, int fn) {
        int d = 1;
        while (1) {
            if ((e * d) % fn == 1)
                break;
            else
                d++;
        }
        return d;
    }

    /**
     * Determine whether two numbers are mutually prime.
     *
     * @param p the first number.
     * @param q the second number.
     * @return two numbers is mutual prime.
     */
    int is_mutual_Prime(int p, int q) {
        int maxKey = 0,i;
        int temp_min = p>=q?q:p;
        for (i = 1; i <= temp_min; i++) {
            if (p % i == 0 && q % i == 0)
                maxKey = i;
        }
        if (maxKey == 1)
            return 1;
        else
            return 0;
    }

    /**
     * Judgment prime.
     *
     * @param number input one number.
     * @return the number is prime.
     */
    int is_prime(int number) {
        int sq = sqrt(number);
        int i,k = 0;
        for (i = 2; i <= sq; i++) {
            if (number % i == 0)
                k++;
        }
        if (k == 0)
            return 1;
        else
            return 0;
    }

    int main() {
        int p, q, baseNum, e, f_n, d = 0;
        int message = 0;

        int res_encode = 0;
        printf("Please enter two prime numbers\n");
        scanf("%d %d",&p,&q);

        while (!is_prime(p)) {
            printf("%d is not a prime number, please re-enter\n",p);
            scanf("%d",&p);
        }

        while (!is_prime(q)) {
            printf("%d is not a prime number, please re-enter\n",q);
            scanf("%d",&q);
        }

        baseNum = p * q;
        printf("The product is baseNum = %d\n",baseNum);

        f_n = (p - 1) * (q - 1);
        printf("The Euler function of baseNum is of(baseNum)=(p-1)*(q-1) = %d\n",f_n);
 
        printf("Please enter an integer e(e<f(baseNum) and relatively prime to f(baseNum))\n");
        scanf("%d",&e);
        while (!is_mutual_Prime(e, f_n)) {
            printf("%d is not compatible with f_n, please re-enter\n",d);
            scanf("%d",&e);
        }

        d = getEni(e, f_n);
        printf("The inverse element of the multiplication of e modulo f_n = %d\n",d);

        printf("Please enter a clear text message(message<baseNum):\n");
        scanf("%d",&message);
        while (message >= baseNum) {
            printf("The plaintext message cannot be greater than baseNum, please re-enter\n");
            scanf("%d",&message);
        }

        res_encode = encode(message, e, baseNum);
        printf("Use e to encrypt the ciphertext %d\n", res_encode);
        printf("Use d to decrypt to get the plaintext %d\n", encode(res_encode, d, baseNum));

        return 0;
    }

