int __fastcall sub_301504(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v11; // r0
  unsigned int v12; // r4
  int v13; // r0

  v11 = sub_2A6904(a2);
  if ( !sub_30098C((int)a1, a2, a3, a5 * v11) )
    return 4;
  v12 = a6 + a7;
  if ( a1[4] )
  {
    v12 = v12 - *(_DWORD *)(a3 + 56) - *(_DWORD *)(*(_DWORD *)(a3 + 60) + 28);
    if ( a1[12] )
      v12 -= a5;
  }
  v13 = sub_2A6904(a2);
  return sub_30120C(a1, a2, v12, (_BYTE *)(a4 + a5 * v13));
}
