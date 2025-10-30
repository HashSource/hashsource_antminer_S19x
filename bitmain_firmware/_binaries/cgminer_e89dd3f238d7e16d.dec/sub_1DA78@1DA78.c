int __fastcall sub_1DA78(int result, const char *a2, const char *a3, char a4)
{
  if ( !byte_94264 || result == 3 )
  {
    if ( a4 )
    {
      sub_1DA40(&stru_93014);
      sub_1D9F4(&stru_93014, "logging.c", "my_log_curses", 41);
    }
    sub_1D8BC(&stru_93014, "logging.c", "my_log_curses", 52);
    printf("%s%s%s", a2, a3, "                    \n");
    return sub_1D9F4(&stru_93014, "logging.c", "my_log_curses", 54);
  }
  return result;
}
