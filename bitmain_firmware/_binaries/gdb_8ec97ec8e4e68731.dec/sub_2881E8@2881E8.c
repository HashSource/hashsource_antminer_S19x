int __fastcall sub_2881E8(const char *a1)
{
  if ( a1 && *a1 )
  {
    dword_470760 = strtol(a1, 0, 10);
    return 0;
  }
  else
  {
    dword_470760 = -1;
    return 0;
  }
}
