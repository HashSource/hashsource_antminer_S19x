int __fastcall sub_907B8(int a1, int a2)
{
  int v4; // r7
  int v6; // r1
  int v7; // r1
  int v8; // r7

  v4 = *(_DWORD *)(a1 + 1260);
  if ( sub_A8450(a2, a2, 45, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8398(a2, 1)
    && sub_A8450(a2, v6, 1, 0, 1)
    && ((v8 = v4 & 0x400) == 0 || sub_A8450(a2, v7, 0, 0, 1))
    && sub_A7EDC(a2)
    && sub_A7EDC(a2) )
  {
    if ( v8 )
      *(_DWORD *)(a1 + 1444) = 3;
    else
      *(_DWORD *)(a1 + 1444) = 2;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 509, 68, "ssl/statem/extensions_clnt.c", 586);
    return 0;
  }
}
