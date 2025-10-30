int __fastcall sub_2BA468(int a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r0

  v2 = *(unsigned __int8 *)(a1 + 12);
  if ( v2 == 6 )
    return 1;
  v3 = a1;
  if ( v2 == 7 )
    v3 = *(_DWORD *)(a1 + 20);
  v5 = sub_2E2EE8(v3, a2[1], 1);
  if ( *(_DWORD *)(v3 + 40) == -1 )
    return 1;
  else
    return sub_2BA2A0(a2, v5, (int *)(v3 + 40), (_DWORD *)(v3 + 76));
}
