//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <string>

namespace UTEC {
    struct Node {
        int value;
        Node *next;

        explicit Node(int value) : value{value}, next{nullptr} {};
    };

    class TwoLinkedList {
        Node *head1;
        Node *head2;
        Node *tail1;
        Node *tail2;
        Node *tail;

    public:
        TwoLinkedList() : head1{nullptr}, tail1{nullptr}, head2{nullptr}, tail2{nullptr}, tail{nullptr} {};

        virtual ~TwoLinkedList();

        bool _empty1();

        bool _empty2();

        bool is_merge(int value);

        void push_back1(int value);

        void push_back2(int value);

        std::string getlist(int value);

        std::string merge(int value);

        Node * search(int value);

        void save();

        void load();
    };
}

#endif //PC1_TWOLINKEDLIST_H
