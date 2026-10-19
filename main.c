extern int all_files; // main.c의 변수가 static이라서 여기서 접근 불가 (링크/컴파일 오류 발생)

void sub(void)
{
    all_files = 10;
}