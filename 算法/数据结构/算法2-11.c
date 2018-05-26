void CreateList_L(LinkList &L, int n){
    //逆位序输入n个元素的值，建立代表头结点的单链线性表L
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;     //先建立一个带头结点的单链表
    for(i = n;i > 0; --i){
        p = (LinkList)malloc(sizeof(LNode));    //生成新结点
        scanf(&p->data);                        //输入元素值
        p->next = L->next; L->next = p;         //插入到表头
    }
}//CreateList_L