#include <iostream>

#include <set>

#include <climits>



using namespace std;



int main() {

    int num_test_cases;

    cin >> num_test_cases;



    while (num_test_cases--) {

        long long lower_limit = 0, upper_limit = LLONG_MAX;



        int num_operations;

        cin >> num_operations;

        set<long long> values_set;



        while (num_operations--) {

            int operation_type;

            cin >> operation_type;

            long long value;

            cin >> value;

            if (operation_type == 1) {

                lower_limit = max(lower_limit, value);

            } else if (operation_type == 2) {

                upper_limit = min(upper_limit, value);

            } else {

                values_set.insert(value);

            }

        }



        long long result_count = upper_limit - lower_limit + 1;

        for (auto val : values_set) {

            if (val >= lower_limit && val <= upper_limit) {

                result_count--;

            }

            

        }

        if (result_count < 0) {

            result_count = 0;

        }

        cout << result_count << endl;

    }



    return 0;

}