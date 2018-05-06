int firstDuplicate(arr_integer a) {

    for (int i = 0; i < a.size; i++)
    {
        if(a.arr[abs(a.arr[i]) - 1] <0)
        {
            return abs(a.arr[i]);
        }

        a.arr[abs(a.arr[i]) - 1] *= -1;
    }

    return -1;
}