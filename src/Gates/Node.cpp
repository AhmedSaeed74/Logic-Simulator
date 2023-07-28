/*
 * Node.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#include "Node.h"

Node::Node(): Node("N", false) {

}

Node::Node(const string name): Node(name, false) {
	// TODO Auto-generated constructor stub

}

Node::Node(const string name, const bool value): name(name), value(value) {

}

string Node::getName() const {
	return this->name;
}

bool Node::getValue() const {
	return this->value;
}

void Node::setName(const string name) {
	this->name = name;
}

void Node::setValue(const bool value) {
	this->value = value;
}

bool Node::AND (const Node& node){
	if (value  && node.value )
		return true;
	else
		return false;
}

bool Node::OR (const Node& node){
	if (!value  && !node.value)
			return false;
		else
			return true;
}

bool Node::XOR (const Node& node){
	if ((value  && !node.value) || (!value  && node.value))
			return true;
		else
			return false;
}

bool Node::NAND (const Node& node){
	if (value && node.value)
		return false;
	else
		return true;
}

bool Node::NOR (const Node& node){
	if (!value && !node.value)
			return true;
		else
			return false;
}

bool Node::XNOR (const Node& node){
	if ((value && !node.value) || (!value  && node.value))
			return false;
		else
			return true;
}

bool Node::NOT (){
	if (value)
			return false;
		else
			return true;
}

ostream& operator << (ostream& out, const Node& node)
{
	out<<node.name<<": "<<node.value<<"\n";
	return out;
}

Node::~Node() {
	value = false;
	name = "";
}

