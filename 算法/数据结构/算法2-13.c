int LocateElem_SL(SLlinkList S,ElemType e){
    //在静态单链表线性表L中查找第一个值为e的元素
    //若找到，则返回它在L中的位序，否则返回0
    i = S[0].cur;                               //i指示表中第一个节点
    while( i && S[i].data != e)i = S[i].cur;    //在表中顺链查找
    return i;
}//LocateElem_SL