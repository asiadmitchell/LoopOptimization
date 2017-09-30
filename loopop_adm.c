// Optimization of a loop.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Submitted code must have the correct values for these two constants:
//    N_TIMES:      200000
//    ARRAY_SIZE:     9973
// Feel free to play with these numbers below during test,
// but ensure you submit with the correct numbers.
//
#define N_TIMES     200000
#define ARRAY_SIZE    9973

int main (void)
{
    int  *array = calloc(ARRAY_SIZE, sizeof(int));
    int  sum = 0;
    int  checksum = 0;
    int  i;
    int  j;
    int  x;

    // Make sure you change this so you get credit.
    //
    printf("CS201 - A04 - Asia Mitchell\n");

    // Initialize the array with random values 0 to 13.
    //
    srand(time(NULL));
    for (j=0; j < ARRAY_SIZE; j++) {

        x = rand() / (int)(((unsigned)RAND_MAX + 1) / 14);
        array[j] = x;
        checksum += x;
    }
    //printf("Checksum is %d.\n",checksum);
    unsigned int size = ARRAY_SIZE;
    unsigned int remainder = size % 128;
    unsigned int limit = size - remainder;
    j = (unsigned)limit;
       sum = (unsigned)0;
    for (i = 0; i < N_TIMES; i++) {

        // ---------------------------------------------------------------
        // Do not alter anything above this line, except for the print
        // statement with your name, and any variables that need to be declared
        // outside of the i loop.  Here is where you make your changes to
        // optimize performance.
        do
        {
                sum += array[j-1] + array[j-2] +
                        array[j-3] + array[j-4] + array[j-5] +
                        array[j-6] + array[j-7] + array[j-8] +
                        array[j-9] + array[j-10] + array[j-11] +
                        array[j-12] + array[j-13] + array[j-14] +
                        array[j-15] + array[j-16] + array[j-17] +
                        array[j-18] + array[j-19] + array[j-20] +
                        array[j-21] + array[j-22] + array[j-23] +
                        array[j-24] + array[j-25] + array[j-26] +
                        array[j-27] + array[j-28] + array[j-29] +
                        array[j-30] + array[j-31] + array[j-32] +
                        array[j-33] + array[j-34] + array[j-35] +
                        array[j-36] + array[j-37] + array[j-38] +
                        array[j-39] + array[j-40] + array[j-41] +
                        array[j-42] + array[j-43] + array[j-44] +
                        array[j-45] + array[j-46] + array[j-47] +
                        array[j-48] + array[j-49] + array[j-50] +
                        array[j-51] + array[j-52] + array[j-53] +
                        array[j-54] + array[j-55] + array[j-56] +
                        array[j-57] + array[j-58] + array[j-59] +
                        array[j-60] + array[j-61] + array[j-62] +
                        array[j-63] + array[j-64] + array[j-65] +
                        array[j-66] + array[j-67] + array[j-68] +
                        array[j-69] + array[j-70] + array[j-71] +
                        array[j-72] + array[j-73] + array[j-74] +
                        array[j-75] + array[j-76] + array[j-77] +
                        array[j-78] + array[j-79] + array[j-80] +
                        array[j-81] + array[j-82] + array[j-83] +
                        array[j-84] + array[j-85] + array[j-86] +
                        array[j-87] + array[j-88] + array[j-89] +
                        array[j-90] + array[j-91] + array[j-92] +
                        array[j-93] + array[j-94] + array[j-95] +
                        array[j-96] + array[j-97] + array[j-98] +
                        array[j-99] + array[j-100] + array[j-101] +
                        array[j-102] + array[j-103] + array[j-104] +
                        array[j-105] + array[j-106] + array[j-107] +
                        array[j-108] + array[j-109] + array[j-110] +
                        array[j-111] + array[j-112] + array[j-113] +
                        array[j-114] + array[j-115] + array[j-116] +
                        array[j-117] + array[j-118] + array[j-119] +
                        array[j-120] + array[j-121] + array[j-122] +
                        array[j-123] + array[j-124] + array[j-125] +
                        array[j-126] + array[j-127] + array[j-128];

                j -= 128;
                if (j == 0)
                {
                        j = size;
                        do
                        {
                                j--;
                                sum += array[j];
                        } while (j != limit);
                        break;
                }
        } while(1);
        //printf("Sum is now: %d\n",sum);

        // Do not alter anything below this line.
        // ---------------------------------------------------------------

        // Check each iteration.
        //
        if (sum != checksum) {
            printf("Checksum error!\n");
        }
        sum = 0;
    }
    return 0;
}

                                                      
                          
