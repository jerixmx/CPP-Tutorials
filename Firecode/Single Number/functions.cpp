using namespace std;

int single_number(int arr[], int sz)
{
    if (sz <= 0) {
        return 0;
    }
    else if (sz == 1) {
        return arr[0];
    }

    else {
        int* count=new int[sz];
        for (int i = 0; i < sz; i++) {

            count[i] = 0;
            for (int j = 0; j < sz; j++) {
                if (i == j) {
                }
                else {
                    if (arr[i] == arr[j]) {
                        count[i]++;
                    }

                }

            }
        }

        for (int i = 0; i < sz; i++) {
            if (count[i] == 0) {
                return arr[i];
            }

        }
        return 0;

    }

}