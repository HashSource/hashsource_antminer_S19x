int __fastcall sub_8BAFC(const char *a1, int a2)
{
  if ( a1 )
    return sub_89984(
             a2,
             "src/level.c",
             26,
             "---level[%p][%d,%s,%s,%d,%d]---",
             a1,
             *(_DWORD *)a1,
             a1 + 4,
             a1 + 1029,
             *((_DWORD *)a1 + 514),
             *((_DWORD *)a1 + 515));
  else
    return sub_89984(2, "src/level.c", 19, "a_level is null or 0");
}
