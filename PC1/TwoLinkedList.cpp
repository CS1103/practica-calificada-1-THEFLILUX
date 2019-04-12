//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"
#include <iostream>
#include <string>

namespace UTEC {

    TwoLinkedList::~TwoLinkedList(){
        Node* temp1 = head1;
        while (temp1->next != nullptr){
            delete temp1;
            temp1 = temp1->next;
        }
        delete temp1;
        Node* temp2 = head2;
        while (temp2->next != nullptr){
            delete temp2;
            temp2 = temp2->next;
        }
        delete temp2;
    }

    bool TwoLinkedList::_empty1() {
        return head1 == nullptr;
    }

    bool TwoLinkedList::_empty2() {
        return head2 == nullptr;
    }

    bool TwoLinkedList::is_merge(int value) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1->value != temp2->value){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1->value != temp2->value){
                return true;
            }
            else{
                return false;
            }
        }
    }

    void TwoLinkedList::push_back1(int value) {
        Node* temp = new Node(value);
        if(_empty1()){
            tail1 = temp;
            head1 = temp;
        }else {
            tail1->next = temp;
            tail1=temp;
        }
    }

    void TwoLinkedList::push_back2(int value) {
        Node* temp = new Node(value);
        if(_empty2()){
            tail2 = temp;
            head2 = temp;
        }else {
            tail2->next = temp;
            tail2=temp;
        }
    }

    std::string TwoLinkedList::getlist(int value) {
        std::string texto;
        if(value == 1){
            Node* temp = head1;
            do{
                texto = texto + std::to_string(temp->value);
                temp = temp->next;
            } while(temp != nullptr);
            return texto;
        }
        else if(value == 2){
            Node* temp = head2;
            do{
                texto = texto + std::to_string(temp->value);
                temp = temp->next;
            } while(temp != nullptr);
            return texto;
        }
        else{
            return texto;
        }
    }

    std::string TwoLinkedList::merge(int value) {
        return std::__cxx11::string();
    }

    Node* TwoLinkedList::search(int value) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1->value != value || temp2->value != value){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1->value != value){
                return temp1;
            }
            else if(temp2->value != value){
                return temp2;
            }
            else{
                return nullptr;
            }
        }
    }

    void TwoLinkedList::load() {

    }

    void TwoLinkedList::save() {

    }
}