
struct vectorCustom
{
    /* data */

    float x, y, z;
    vectorCustom() : x(10), y(5), z(68) {}
};

int main(int argc, char const *argv[])
{

    /**
     *
     * ram = stack 2. heap
     *
     *
     */

    int si = 5;  // stack || deafult free memory
    int sarr[5]; // stack
    sarr[0] = 4;

    vectorCustom svector;

    int *hvalue = new int; // Heap
    int *harray = new int[5]; //
    vectorCustom *hvector = new vectorCustom(); // Heap

    delete hvalue; // Free memory
    delete harray; // Free memory
    return 0;
}
