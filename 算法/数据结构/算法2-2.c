void MergeList(List La,List Lb,List & Lc){
    //已知线性表La中和Lb中的数据元素按值非递减排列
    //归并La和Lb得到新的线性表Lc，Lc的数据元素也按值非递减排列
    InitList(Lc)；
    i = j= 1,k = 0;
    La_len = ListLength(La);Lb_len = ListLength(Lb);
     while((i<=La_len) && (j<=Lb_len)){ //La、Lb均非空
        GetElem(La,i,ai);GetElem(Lb,j,bj);
        if(ai<=bj){ListInsert(Lc,++k,ai);++i;}
        else{ListInsert(Lc,++k,bj)++j;}
    }
    while(i<=La_len){GetElem(La,i++,ai);ListInsert(Lc,++k,ai);}
    while(j<=Lb_len){GetElem(Lb,i++,bj);ListInsert(Lc,++k,bj);}
}//MergeList