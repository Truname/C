Status InitList_Sq(SqList &L){
    //构造一个空的线性表L
    L.elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!L.elem)exit(OVERFLOW);  //存储分配失败
    L.length = 0;               //空表长度为0
    L.listsize = LIST_INIT_SIZE;//初始存储容量
    return OK;
}//InitList_Sq