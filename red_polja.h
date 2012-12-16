struct elem{
  int ai,bi,ci,di;
	char ime[15],prezime[20],datum[12];
	double tekuci,devizni;
};
struct tred{
	elem korisnik[10000];
	int rear,front;
};
typedef int element;
int AddOne(int n){
	return((n+1)%10000);
}
elem FrontQ(tred *X){
	return X->korisnik[X->front];
}
void EnQueueQ(elem e,tred *X){
	X->rear=AddOne(X->rear);
	X->korisnik[X->rear]=e;
}
void DeQueueQ(tred *X){
	X->front=AddOne(X->front);
}
tred *InitQ(tred *Q){
	Q=new tred;
	Q->rear=9999;
	Q->front=0;
	return Q;
}
bool IsEmptyQ(tred *Q){
	if(AddOne(Q->rear)==Q->front)
		return true;
	else
		return false;
}
