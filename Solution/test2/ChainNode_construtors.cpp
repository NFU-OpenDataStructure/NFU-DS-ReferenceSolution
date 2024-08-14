template<class T>
class Chain;

template<class T>
class ChainNode{
friend class Chain<T>
public:
    // constructors come here
    chainNode(){}
    ChainNode(const T& data){ this-<data = data; }
    ChainNode(const T& data, ChainNode<T>* link){
        this->data = data;
        this->link = link;
    }
private:
    T data;
    ChainNode<T>* link;
};