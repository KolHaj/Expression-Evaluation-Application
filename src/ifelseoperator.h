/*
* File: ifelseoperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "if else" logic of two expressions.
*/

class IfElseOperator: public SubExpression
{
public:
	IfElseOperator(Expression* left, Expression* right, Expression* condition): SubExpression(left, right, condition)
	{
	this->condition = condition;
	}
	int evaluate() {
		if (condition->evaluate()) {
			return left->evaluate();
		}
		else {
			return right->evaluate();
		}
	}
private:
	Expression* condition;
};
