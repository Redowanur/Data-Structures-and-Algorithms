#include <bits/stdc++.h>
using namespace std;

int A[1000];

void merge(int *arr, int l, int mid, int r){
    int i = l;
    int j = mid+1;
    int k = l;

    while(i <= mid && j <= r){
        if(arr[i] <= arr[j]){
            A[k] = arr[i];
            ++i;
        }
        else{
            A[k] = arr[j];
            ++j;
        }
        ++k;
    }

    if(i > mid){
        while(j <= r){
            A[k] = arr[j];
            ++k;
            ++j;
        }
    }
    else{
        while(i <= mid){
            A[k] = arr[i];
            ++k;
            ++i;
        }
    }

    for(k = l; k <= r; k++){
        arr[k] = A[k];
    }
}

void mergeSort(int *arr, int l, int r){
    if(l < r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main(){
    freopen("output.txt", "w", stdout);

    int arr[] = {494, 591, 290, 445, 147, 304, 326, 589, 590, 544, 132, 72, 38, 430, 348, 173, 367, 198, 62, 459, 565, 22, 508, 210, 
                387, 419, 256, 89, 436, 208, 524, 139, 310, 53, 93, 295, 106, 575, 429, 259, 138, 558, 444, 398, 564, 522, 359, 230, 
                567, 104, 453, 351, 11, 4, 469, 149, 477, 47, 588, 422, 192, 45, 188, 299, 306, 65, 554, 277, 437, 346, 280, 100, 392, 
                389, 301, 449, 484, 32, 57, 6, 207, 579, 505, 202, 23, 40, 33, 341, 488, 555, 502, 576, 273, 76, 396, 64, 75, 194, 400, 
                129, 146, 239, 454, 58, 223, 118, 183, 458, 177, 34, 582, 220, 553, 378, 44, 164, 352, 531, 587, 150, 461, 395, 181, 
                309, 176, 162, 66, 140, 312, 451, 491, 95, 316, 482, 319, 99, 489, 197, 195, 90, 231, 460, 528, 73, 42, 523, 403, 281, 
                570, 559, 217, 507, 119, 327, 253, 270, 59, 557, 279, 107, 374, 169, 517, 241, 516, 547, 592, 439, 16, 212, 145, 423, 
                372, 117, 248, 573, 342, 178, 262, 475, 307, 328, 344, 133, 215, 336, 339, 122, 369, 513, 457, 31, 324, 71, 539, 229, 
                182, 105, 443, 364, 170, 354, 534, 274, 159, 199, 355, 385, 298, 7, 221, 503, 594, 511, 287, 27, 492, 333, 251, 272, 
                467, 96, 379, 526, 80, 325, 440, 186, 14, 551, 29, 586, 305, 421, 172, 600, 288, 527, 399, 227, 409, 519, 406, 174, 581, 
                315, 126, 572, 595, 471, 10, 226, 74, 190, 412, 334, 158, 442, 203, 377, 414, 532, 506, 483, 543, 37, 276, 175, 237, 81, 
                52, 322, 498, 425, 101, 39, 296, 68, 91, 574, 213, 285, 156, 433, 115, 191, 486, 69, 205, 157, 97, 416, 431, 541, 515, 
                411, 514, 148, 446, 171, 335, 211, 485, 373, 92, 347, 154, 418, 536, 103, 180, 185, 137, 462, 125, 472, 597, 283, 152, 
                357, 214, 232, 540, 302, 78, 566, 428, 478, 258, 561, 584, 434, 85, 121, 580, 300, 332, 569, 331, 598, 548, 499, 128, 
                163, 193, 397, 55, 521, 56, 8, 264, 282, 456, 297, 240, 593, 265, 512, 234, 123, 2, 550, 380, 578, 370, 407, 330, 568, 
                371, 468, 556, 318, 293, 86, 448, 410, 260, 108, 257, 49, 376, 225, 480, 235, 271, 116, 216, 268, 487, 247, 560, 111, 
                388, 94, 450, 340, 245, 25, 463, 254, 404, 43, 127, 465, 401, 51, 21, 447, 46, 141, 161, 61, 424, 343, 131, 130, 261, 
                520, 109, 470, 77, 236, 464, 263, 479, 466, 3, 391, 420, 493, 13, 426, 323, 142, 24, 474, 63, 386, 577, 417, 41, 529, 
                337, 278, 393, 381, 583, 5, 289, 246, 535, 233, 356, 151, 136, 292, 545, 266, 599, 368, 415, 54, 383, 432, 144, 571, 
                201, 228, 124, 360, 98, 350, 189, 120, 15, 79, 165, 82, 252, 219, 70, 329, 542, 481, 18, 84, 112, 243, 275, 563, 311, 
                441, 26, 455, 390, 585, 50, 363, 184, 413};
    
    int l = 0;
    int r = (sizeof(arr)/sizeof(arr[0]))-1;
    mergeSort(arr, l, r);

    
    for(int i = 0; i <=r; i++){
        if(i%20 == 0) cout << endl;
        printf("%d ", arr[i]);
    }

    return 0;
}