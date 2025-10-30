int __fastcall sub_73DD0(_DWORD *a1, _DWORD *a2)
{
  unsigned int i; // [sp+1Ch] [bp-8h]

  if ( !a1 || *a1 != 1 || !a2 || *a2 != 1 )
    return -1;
  if ( !sub_738C4(a1, a2[3], 1) )
    return -1;
  for ( i = 0; i < a2[3]; ++i )
    sub_72870(*(_DWORD *)(a2[4] + 4 * i));
  sub_7386C(a1[4], a1[3], a2[4], 0, a2[3]);
  a1[3] += a2[3];
  return 0;
}
