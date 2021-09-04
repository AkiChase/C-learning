//main 只能有两种参数

//gcc -0 hello hello.c (4个 "gcc" "-o" "hello" "hello.c")

int main(int argc, char* argv[]) {
	//argc表示传递参数的个数
	//argv分别存的是各个参数
	//for (int i = 0; i < argc ; i++)
	//{
	//	puts(argv[i]);
	//}


	func_06();
	return 0;
}