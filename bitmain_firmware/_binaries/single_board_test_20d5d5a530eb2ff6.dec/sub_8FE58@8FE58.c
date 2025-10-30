int __fastcall sub_8FE58(int a1, int a2)
{
  int v5; // r1

  if ( !*(_BYTE *)(a1 + 1472) )
    return 2;
  if ( sub_A8450(a2, a2, 1, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8450(a2, v5, *(unsigned __int8 *)(a1 + 1472), 0, 1)
    && sub_A7EDC(a2) )
  {
    return 1;
  }
  sub_95494(a1, 80, 549, 68, "ssl/statem/extensions_clnt.c", 81);
  return 0;
}
