template<class T>
class Chain{
public:
    Chain(){ first=0; } // constructor, empty chain
    ~Chain(); // destructor
    bool IsEmpty()const{ return first==0; }
    // other methods defined here
    int IndexOf(const T& theElement)const;
    void Delete(int theIndex);
    void Insert(int theIndex, const T& theElement);
private:
    ChainNode<T>* first;
};

template<class T>
int Chain<T>::IndexOf(const T& theElement)const{
    // search the chain for theElement
    ChainNode<T>* currentNode = first;
    int index = 0; // index of currentNode
    while(currentNode!=NULL&&currentNode->data!=theElement){
        // move to next node
        currentNode = currentNode->link;
        index++;
    }
    // make sure we found matching element
    if(current==NULL)
        return -1;
    else
        return index;
}

template<class T>
void Chain<T>::Delete(int theIndex){
    if(first==0)
        throw "Cannot delete from empty chain";
    ChainNode<T>* deleteNode;
    if(theIndex==0){ // remove first node from chain
        deleteNode = first;
        first = first->link;
    }else{ // use p to get beforeNode
        ChainNode<T>* p = first;
        for(int i=0; i<theIndex-1; i++){
            if(p==0)
                throw "Delete element does not exist";
            p = p->link;
        }
        deleteNode = p->link;
        p->link = p->link->link;
    }
    delete deleteNode;
}

template<class T>
void Chain<T>::Insert(int theIndex, const T& theElement){
    if(theIndex<0)
        throw "Bad insert index";
    if(theIndex==0){
        // insert at front
        first = new ChainNode<T>(theElement, first);
    }else{ // find predecessor of new element
        ChainNode<T>* p = first;
        for(int i=0; i<theIndex; i++){
            if(p==0)
                throw "Bad insert index";
            p = p->link;
        }
        // insert after p
        p->link = new ChainNode<T>(theElement, p->link);
    }
}