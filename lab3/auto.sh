screenfetch
rm lex.yy.c
rm parser.tab.c
rm parser.tab.h
rm parser
flex Vector.l
echo "FLEX运行完毕"
bison -d -v parser.y
echo "BISON运行完毕"
gcc -o parser ast.c analysis.c parser.tab.c lex.yy.c  blocks.c optimize.c -w
echo "GCC连接完毕"
./parser test.c
echo "语义检查完成"