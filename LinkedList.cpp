#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = 0; i < len; i++) {
        insertPosition(i + 1, array[i]);
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 0) pos = 1; // Ensure non-negative position
    Node* newNode = new Node(newNum);

    if (pos == 1) {
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current != nullptr; i++) {
            current = current->getLink();
        }

        if (current != nullptr) {
            newNode->setLink(current->getLink());
            current->setLink(newNode);
        } else {
            // Insert at the end if position exceeds list size
            Node* temp = head;
            while (temp->getLink() != nullptr) {
                temp = temp->getLink();
            }
            temp->setLink(newNode);
        }
    }
}

bool LinkedList::deletePosition(int pos) {
    if (pos <= 0) return false;

    if (pos == 1) {
        if (head != nullptr) {
            Node* temp = head;
            head = head->getLink();
            delete temp;
            return true;
        }
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current != nullptr; i++) {
            current = current->getLink();
        }

        if (current != nullptr && current->getLink() != nullptr) {
            Node* temp = current->getLink();
            current->setLink(temp->getLink());
            delete temp;
            return true;
        }
    }
    return false;
}

int LinkedList::get(int pos) {
    if (pos <= 0) return std::numeric_limits<int>::max();

    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getLink();
    }

    if (current != nullptr) {
        return current->getData();
    }

    return std::numeric_limits<int>::max();
}

int LinkedList::search(int target) {
    Node* current = head;
    int index = 1;

    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        }
        current = current->getLink();
        index++;
    }

    return -1;
}

void LinkedList::printList() {
    std::cout << "[";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getData();
        current = current->getLink();
        if (current != nullptr) {
            std::cout << " ";
        }
    }
    std::cout << "]";
}