int __fastcall sub_91D44(_DWORD *a1, unsigned __int8 **a2, int a3)
{
  unsigned int v3; // r4
  unsigned __int8 *v4; // r4
  int v5; // r7
  int v6; // r3

  v3 = (unsigned int)a2[1];
  if ( v3 <= 1 || (v4 = (unsigned __int8 *)(v3 - 2), v5 = **a2, v6 = (*a2)[1], *a2 += 2, (a2[1] = v4) != 0) )
  {
    sub_95494(a1, 50, 612, 159, "ssl/statem/extensions_clnt.c", 1784);
    return 0;
  }
  else if ( (v6 | (v5 << 8)) == 0x304 )
  {
    if ( a3 != 2048 )
      *a1 = 772;
    return 1;
  }
  else
  {
    sub_95494(a1, 47, 612, 116, "ssl/statem/extensions_clnt.c", 1795);
    return 0;
  }
}
