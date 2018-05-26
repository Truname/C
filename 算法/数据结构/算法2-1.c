void union(List &La,List Lb){
	//将所有在线性表Lb中但不在La中的数据元素插入到La中
	La_len = ListLength(La); Lb_len = ListLength(Lb);//求线性表长度
	for(i = 1;i <= Lb_len; i++){
		GetElem(Lb,i,e);                   //取La中第i个数据元素赋给e
		if(!LocateElem(La,e,equal))ListInsert(La,++La_len,e);
								//La中不存在和e相同的数据元素，则插入之
	}
}//union