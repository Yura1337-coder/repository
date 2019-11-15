void mergeSort(int start, int end) {

    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(start, mid);
        mergeSort(mid + 1, end);
        merge(start, mid, end);
    }

}
};

void OutputMatrix(Matrix* mtx, int n) {
    for (int i = 0; i < n; ++i)
    {
        cout << mtx->mtx[i];
    }
    cout << endl;
}


int main() {
    Matrix matrix[5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            matrix[j].InputElement(i);
        }
    Matrix matrix1;
    for (int i = 0; i < 5; i++)
        matrix[i].mergeSort(0, 4);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[j].GetMatrix()[i] << "\t ";
            matrix1.sMatrix(matrix[j].GetMatrix()[i]);
        }
        cout << endl;
    }
