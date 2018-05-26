Status ListDelte_Sq(SqList &L,int i,ElemType &e){
    //在线性顺序表L中删除第i个元素，并用e返回其值
    //i的合法值为1<=i<=ListLength_Sq(L)
    if((i<1)||(i>L.length))return ERROR;    //i值不合法
    p = &(L.elem[i-1]);                     //p为被删除元素的位置
    e = *p;                                 //被删除元素的值赋给e
    q = L.elem+L.length - 1;                //表尾元素的位置
    for(++p;p<=q;++p) *(p-1)= *p;           //被删除元素之后的元素左移
    --L.length;                             //表长减1
    return OK; 
    }//ListDelte_Sq