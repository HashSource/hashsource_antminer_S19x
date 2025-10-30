int __fastcall sub_154B38(int result, unsigned int a2, int a3, const char *a4)
{
  int v6; // r6

  if ( ((a4 != 0) & (a2 >> 31)) != 0 )
  {
    v6 = result;
    sub_154A1C(result);
    return sub_154980(v6, a2, a4);
  }
  return result;
}
