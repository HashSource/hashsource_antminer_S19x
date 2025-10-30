int __fastcall sub_6C1AC(char a1, int a2, int a3, int (__fastcall *a4)(const char *, int, int), int a5)
{
  int v6; // r3
  int v9; // [sp+14h] [bp-10h]
  unsigned int v10; // [sp+1Ch] [bp-8h]

  if ( (a1 & 0x1F) == 0 )
  {
    if ( a3 && (a1 & 0x20) == 0 )
      return a4(" ", 1, a5);
    return 0;
  }
  v10 = a2 * (a1 & 0x1F);
  if ( !a4("\n", 1, a5) )
  {
    while ( v10 )
    {
      v6 = v10;
      if ( v10 >= 0x20 )
        v6 = 32;
      v9 = v6;
      if ( a4("                                ", v6, a5) )
        return -1;
      v10 -= v9;
    }
    return 0;
  }
  return -1;
}
