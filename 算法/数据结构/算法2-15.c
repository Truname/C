int Malloc_SL(SLinkList &space){
    //若备用空间链表非空，非凡会分配的结点下标，否则返回0
    i = space[0].cur;
    if(space[0].cur)space[0].cur = space[i].cur;
    return i;
}//Malloc_SL