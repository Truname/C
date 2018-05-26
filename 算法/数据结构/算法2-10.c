Status ListDelete_L(LinkList &L, int i, ElemType &e){
    //在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
    p = L; j = 0;
    while(P->next && j < i-1){  //寻找第i个结点，并令p指向其前趋
        p = p->next; ++j;
    }
    if(!(p->next)|| j > i-1)return ERROR;   //删除位置不合适
    q = p->next; p->next = q->next;         //删除并释放结点
    e = q->data; free(q);
    return OK;
}//ListDelete_L