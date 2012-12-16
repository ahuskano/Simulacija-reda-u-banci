struct elem{
  int ai,bi,ci,di;
	char ime[15],prezime[20],datum[12];
	double tekuci,devizni;
};
struct tklijent{
	elem kli;
	tklijent *iduci;
};
struct tred{
	tklijent *rear,*front;
};

elem FrontQ(tred *X){
	tklijent *Y=X->front;
	Y=Y->iduci;
	return Y->kli;
}
void EnQueueQ(elem e,tred *X){
	tklijent *novi=new tklijent;
	novi->kli=e;
	tklijent *last=X->rear;
	last->iduci=novi;
	X->rear=novi;
}
void DeQueueQ(tred *X){
	tklijent *prvi=X->front;
	X->front=prvi->iduci;
	delete prvi;
}
tred *InitQ(tred *X){
	X=new tred;
	tklijent *a=new tklijent;
	X->front=a;
	X->rear=a;
	return X;
}
bool IsEmptyQ(tred *X){
	if(X->front==X->rear)
		return true;
	else
		return false;
}
