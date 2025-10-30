int __fastcall sub_772A0(_DWORD *a1, _DWORD *a2)
{
  unsigned int i; // [sp+1Ch] [bp-8h]

  if ( !a1 || *a1 != 1 || !a2 || *a2 != 1 )
    return -1;
  if ( !sub_76D94(a1, a2[3], 1) )
    return -1;
  for ( i = 0; a2[3] > i; ++i )
    sub_75D58(*(_DWORD *)(a2[4] + 4 * i));
  sub_76D40(a1[4], a1[3], a2[4], 0, a2[3]);
  a1[3] += a2[3];
  return 0;
}
