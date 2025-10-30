int __fastcall sub_1E3FC(int result, const char *a2, const char *a3, char a4)
{
  if ( !byte_953FC || result == 3 )
  {
    if ( a4 )
    {
      sub_1E3C4(&stru_941AC);
      sub_1E37C(&stru_941AC, "logging.c", "my_log_curses", 41);
    }
    sub_1E24C(&stru_941AC, "logging.c", "my_log_curses", 52);
    printf("%s%s%s", a2, a3, "                    \n");
    return sub_1E37C(&stru_941AC, "logging.c", "my_log_curses", 54);
  }
  return result;
}
