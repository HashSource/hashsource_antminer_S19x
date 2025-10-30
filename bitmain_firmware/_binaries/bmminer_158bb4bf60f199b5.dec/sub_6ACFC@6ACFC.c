int __fastcall sub_6ACFC(char a1, int a2, int a3, int (__fastcall *a4)(__int16 *, int, int), int a5)
{
  int v5; // r9
  int v8; // r4

  v5 = a1 & 0x1F;
  if ( (a1 & 0x1F) != 0 )
  {
    v8 = a4(&word_8B454, 1, a5);
    if ( !v8 )
    {
      if ( a2 <= 0 )
        return 0;
      while ( 1 )
      {
        ++v8;
        if ( a4((__int16 *)"                                ", v5, a5) )
          break;
        if ( a2 == v8 )
          return 0;
      }
    }
    return -1;
  }
  if ( !a3 || (a1 & 0x20) != 0 )
    return 0;
  return a4((__int16 *)" ", 1, a5);
}
