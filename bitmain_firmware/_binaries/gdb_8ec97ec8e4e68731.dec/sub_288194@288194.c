int __fastcall sub_288194(const char *a1)
{
  int v2; // r0

  if ( a1 && *a1 )
  {
    v2 = strtol(a1, 0, 10);
    dword_470768 = v2 & ~(v2 >> 31);
    return 0;
  }
  else
  {
    dword_470768 = 100;
    return 0;
  }
}
