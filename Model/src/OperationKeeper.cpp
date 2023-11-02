#include "OperationKeeper.hpp"
namespace Model {
	OperationKeeper::OperationKeeper() {
		operations.push_back(new Addition);
		operations.push_back(new Subtraction);
		operations.push_back(new Multiply);
		operations.push_back(new Division);
		operations.push_back(new Ostatok);
		operations.push_back(new Stepen);
		operations.push_back(new Tetration);
	}

	const std::list<Operation *> &OperationKeeper::getOperations() const {
		return operations;
	}

	OperationKeeper::~OperationKeeper() {
		for (auto e : operations) {
			delete e;
		}
	}
}