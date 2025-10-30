int __fastcall sub_6E8D0(_DWORD *a1)
{
  int v2; // r3
  unsigned int i; // [sp+Ch] [bp-8h]

  *a1 = 0;
  a1[2] = 3;
  a1[1] = sub_7188C(8 << a1[2]);
  if ( !a1[1] )
    return -1;
  sub_6E2D0(a1 + 3);
  sub_6E2D0(a1 + 5);
  for ( i = 0; i < 1 << a1[2]; ++i )
  {
    v2 = a1[1] + 8 * i;
    *(_DWORD *)(v2 + 4) = a1 + 3;
    *(_DWORD *)(a1[1] + 8 * i) = *(_DWORD *)(v2 + 4);
  }
  return 0;
}
