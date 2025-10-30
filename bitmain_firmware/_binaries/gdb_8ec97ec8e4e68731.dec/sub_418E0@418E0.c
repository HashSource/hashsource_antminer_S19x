int __fastcall sub_418E0(_DWORD *a1, int *a2)
{
  int v3; // r4
  int v4; // r6
  int v6; // r3
  int v7; // r2

  v3 = *a1;
  v4 = *a2;
  if ( v4 != ps_getpid_0(*a1) )
    return 1;
  sub_3240D8(dword_472134, a1);
  v6 = *(_DWORD *)(v3 + 92);
  if ( v6 )
    *(_DWORD *)(v6 + 88) = *(_DWORD *)(v3 + 88);
  v7 = *(_DWORD *)(v3 + 88);
  if ( v7 )
    *(_DWORD *)(v7 + 92) = v6;
  if ( v3 == dword_472178 )
    dword_472178 = *(_DWORD *)(v3 + 92);
  ((void (__fastcall *)(int))loc_41874)(v3);
  return 1;
}
