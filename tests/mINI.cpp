#include <iostream>

//fwd
int main_testcasesens(int argc, char** argv);
int main_testcopy(int argc, char** argv);
int main_testgenerate(int argc, char** argv);
int main_testhuge(int argc, char** argv);
int main_testread(int argc, char** argv);
int main_testutf8(int argc, char** argv);
int main_testwrite(int argc, char** argv);

int main(int argc, char** argv) {
	int result = EXIT_SUCCESS;

	//result += main_testcasesens(argc, argv);
	result += main_testcopy(argc, argv);
	result += main_testgenerate(argc, argv);
	result += main_testhuge(argc, argv);
	result += main_testread(argc, argv);
	result += main_testutf8(argc, argv);
	result += main_testwrite(argc, argv);

	return result;
}
