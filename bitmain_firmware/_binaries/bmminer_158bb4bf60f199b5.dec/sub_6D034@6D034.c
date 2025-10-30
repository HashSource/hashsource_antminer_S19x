int __fastcall sub_6D034(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  int v8; // r3
  int v9; // r3
  int v10; // r0

  sub_6C3F4(a1, a3);
  v6 = a2 & 4;
  if ( (a2 & 4) == 0 && (a1[13] & 0xFFFFFFDF) != 0x5B )
  {
    sub_6BF34(a3, a1, "'[' or '{' expected");
    return v6;
  }
  v6 = sub_6CBB0(a1, a2, a3);
  if ( !v6 )
    return 0;
  if ( (a2 & 2) == 0 )
  {
    sub_6C3F4(a1, a3);
    if ( a1[13] )
    {
      sub_6BF34(a3, a1, "end of file expected");
      v8 = *(_DWORD *)(v6 + 4);
      if ( v8 != -1 )
      {
        v9 = v8 - 1;
        *(_DWORD *)(v6 + 4) = v9;
        if ( !v9 )
        {
          v10 = v6;
          v6 = 0;
          sub_6E5DC(v10);
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
