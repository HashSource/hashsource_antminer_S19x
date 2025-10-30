bool __fastcall sub_88644(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r3
  unsigned int *v7; // r3
  unsigned int v8; // r2
  size_t v9; // r2

  v4 = sub_8D444(a2);
  if ( !sub_8E488(a1, v4) )
    return 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 != a2[1] )
  {
    (*(void (__fastcall **)(int))(v5 + 20))(a1);
    v6 = a2[1];
    *(_DWORD *)(a1 + 4) = v6;
    if ( !(*(int (__fastcall **)(int))(v6 + 12))(a1) )
      return 0;
  }
  v7 = (unsigned int *)(a2[257] + 264);
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 + 1, v7) );
  sub_84370(*(_DWORD *)(a1 + 1028));
  v9 = a2[276];
  *(_DWORD *)(a1 + 1028) = a2[257];
  return sub_87AB4(a1, a2 + 277, v9) != 0;
}
