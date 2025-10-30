int __fastcall sub_90610(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v8; // r1

  v4 = a4 != 0;
  if ( !*(_DWORD *)(a1 + 1488) )
    v4 |= 1u;
  if ( v4 )
    return 2;
  if ( sub_A8450(a2, a2, 18, 0, 2) && sub_A8450(a2, v8, 0, 0, 2) )
    return 1;
  sub_95494(a1, 80, 474, 68, "ssl/statem/extensions_clnt.c", 500);
  return 0;
}
