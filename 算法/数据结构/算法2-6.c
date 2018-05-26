int LocateElem_Sq(SqList L,ElemType e,Status(*compare)(ElemType,Elemtype)){
    //在顺序线性表L中查找第1个值与e满足compare()的元素的位序
    //若找到，则返回其在L中的位序，否则返回0
    i = 1;             //i的初值为第一个元素的位序
    p = L.elem;        //p的初值为第一个元素的存储位置
    while(i <= L.length && !(*compare)(*p++,e)) ++i;
    if(i<=L.length)return i;
    else return 0;
}//LocateElem_Sq