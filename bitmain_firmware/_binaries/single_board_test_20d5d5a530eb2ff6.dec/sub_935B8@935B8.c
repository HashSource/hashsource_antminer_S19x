int __fastcall sub_935B8(int a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r2
  int v3; // r5
  unsigned int v4; // r4
  unsigned __int8 *v5; // r3
  unsigned __int8 *v6; // r1
  int v7; // r2
  int v8; // t1

  v2 = a2[1];
  if ( v2
    && (v3 = (int)*a2, v4 = **a2, v4 <= (unsigned int)(v2 - 1))
    && (v5 = (unsigned __int8 *)(v3 + 1), (unsigned __int8 *)v4 == v2 - 1)
    && (*a2 = (unsigned __int8 *)(v3 + 1 + v4), a2[1] = 0, v6 = &v2[v3], v4) )
  {
    do
    {
      v8 = *v5++;
      v7 = v8;
      if ( v8 == 1 )
      {
        *(_DWORD *)(a1 + 1444) |= 2u;
      }
      else if ( !v7 && (*(_DWORD *)(a1 + 1260) & 0x400) != 0 )
      {
        *(_DWORD *)(a1 + 1444) |= 1u;
      }
    }
    while ( v6 != v5 );
    return 1;
  }
  else
  {
    sub_95494(a1, 50, 572, 110, "ssl/statem/extensions_srvr.c", 595);
    return 0;
  }
}
