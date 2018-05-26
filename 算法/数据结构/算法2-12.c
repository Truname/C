void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc){
    //已知单线性链表La和Lb的元素按值非递减线性排列
    //归并La和Lb得到新的单链线性表Lc,Lc的元素也按值非递减排列
    pa = La->next; pb = Lb->next;
    Lc = pc = La;               //用La的头结点作为Lc的头结点
    while(pa && pb){
        if(pa->data <= pb->data){
            pc->next = pa; pc = pa; pa = pa->next;
        }
        else{pc->next = pb; pc = pb; pb = pb->next;}
    }
    pc->next = pa ? pa : pb;    //插入剩余段
    free(Lb);                   //释放Lb的头结点
}//MergeList_L