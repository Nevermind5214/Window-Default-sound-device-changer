#include <windows.h>
int main()
{
    ShellExecute(0, 0, "mmsys.cpl", 0, 0, SW_HIDE);
    return 0;
}
