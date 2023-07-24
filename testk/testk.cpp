#include "testk.h"
#include <fstream>
#include <regex>

char testk::ID;
using namespace llvm;

bool testk::runOnModule(Module &module)
{
	errs() << "[+] runOnModule " << module.getName() << "\n";
}

static RegisterPass<testk>
	XXX("testk", "Test Kernel Pass");

