int __fastcall sub_95320(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r3

  if ( a3 != 0x2000 )
  {
    if ( *(_DWORD *)(a1 + 1452) != 2 )
      return 2;
    if ( sub_A8450(a2, a2, 42, 0, 2) && sub_A8398(a2, 2) && sub_A7EDC(a2) )
      return 1;
    v7 = 1957;
LABEL_8:
    sub_95494(a1, 80, 531, 68, "ssl/statem/extensions_srvr.c", v7);
    return 0;
  }
  if ( !*(_DWORD *)(a1 + 3920) )
    return 2;
  if ( !sub_A8450(a2, a2, 42, 0, 2)
    || !sub_A8398(a2, 2)
    || !sub_A8450(a2, v6, *(_DWORD *)(a1 + 3920), 0, 4)
    || !sub_A7EDC(a2) )
  {
    v7 = 1943;
    goto LABEL_8;
  }
  return 1;
}
