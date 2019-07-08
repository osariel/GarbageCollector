// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
to an allocated array. It is false
otherwise. */
    bool isArray; // true if pointing to array
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    unsigned arraySize; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

        PtrDetails(T *ptr, int size=0)
        {
            // TODO: Implement PtrDetails
             memPtr = ptr;
             if(size > 0){
                arraySize = size;
                 isArray = true;
            }
        }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==
    if(obj_1.memPtr == obj_2.memPtr && obj_1.arraySize == obj_2.arraySize && obj_1.isArray == obj_2.isArray)
    {
        return true;
    }else{
        return false;
    }
}
