int __fastcall sub_119E8(int a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  unsigned int v7; // r4
  int v8; // r5

  if ( (a1 & 0x1F) != 0 )
  {
    v7 = (a1 & 0x1F) * a2;
    if ( !a4("\n", 1, a5) )
    {
      if ( !v7 )
        return 0;
      while ( 1 )
      {
        v8 = v7 >= 0x20 ? 32 : v7;
        if ( a4("                                ", v8, a5) )
          break;
        v7 -= v8;
        if ( !v7 )
          return 0;
      }
    }
    return -1;
  }
  else
  {
    if ( !a3 || (a1 & 0x20) != 0 )
      return 0;
    return ((int (__fastcall *)(const char *, int, int, int))a4)(" ", 1, a5, a1 << 26);
  }
}
