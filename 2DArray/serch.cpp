// #include<iostream>
// #include<vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>>& matrix, int target){
//     int row = matrix.size();
//     int col = matrix[0].size();
//     int s;
//     int e;

//     int i = 0;
//     while(i<row){
//         if(matrix[i][col-1]<target){
//              s = i;
//              e = i*col -1;
//              break;
//         }
//         else{i++;}
//     }

//     int mid = s+(e-s)/2;

//     while(s<=e){
//             int element = matrix[mid/col][mid%col];

//             if(target == element){
//                 return 1;
//             }
//             if(element < target){
//                 s = mid + 1;
//             }
//             if(element > target){
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//     return 0;
// }

// int main() {

//     vector<vector<int>> matrix = {
//         {1, 4, 7, 11},
//         {2, 5, 8, 12},
//         {3, 6, 9, 16},
//         {10,13,14,17}
//     };

//     int target;
//     cout << "Enter target: ";
//     cin >> target;

//     if(searchMatrix(matrix, target)) {
//         cout << "Found\n";
//     } else {
//         cout << "Not Found\n";
//     }

//     return 0;
// }