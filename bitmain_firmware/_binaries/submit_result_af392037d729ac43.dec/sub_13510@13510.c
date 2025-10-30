int __fastcall sub_13510(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  int v11; // r0

  a1[14] = 0;
  sub_12BFC(a1, a3);
  v6 = a2 & 4;
  if ( (a2 & 4) == 0 && (a1[15] & 0xFFFFFFDF) != 0x5B )
  {
    sub_128D8(a3, a1, 8, "'[' or '{' expected");
    return v6;
  }
  v6 = sub_131F0((int)a1, a2, a3);
  if ( !v6 )
    return 0;
  if ( (a2 & 2) == 0 )
  {
    sub_12BFC(a1, a3);
    if ( a1[15] )
    {
      sub_128D8(a3, a1, 7, "end of file expected");
      if ( *(_DWORD *)(v6 + 4) != -1 )
      {
        v8 = (unsigned int *)(v6 + 4);
        __dmb(0xFu);
        do
        {
          v9 = __ldrex(v8);
          v10 = v9 - 1;
        }
        while ( __strex(v10, v8) );
        if ( !v10 )
        {
          v11 = v6;
          v6 = 0;
          sub_1427C(v11);
          return v6;
        }
      }
      return 0;
    }
  }
  if ( a3 )
    *(_DWORD *)(a3 + 8) = a1[9];
  return v6;
}
