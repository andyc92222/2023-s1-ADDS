#include "Node.h"

Node::Node(int value) {
    data = value;
    link = nullptr;
}

int Node::getData() {
    return data;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* nextNode) {
    link = nextNode;
}