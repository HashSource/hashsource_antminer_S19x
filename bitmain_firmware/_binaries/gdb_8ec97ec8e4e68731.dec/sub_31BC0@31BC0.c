int __fastcall sub_31BC0(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r8
  int v7; // r6
  unsigned __int64 v8; // r8
  int v9; // r3

  v2 = (_DWORD *)sub_31248();
  v3 = sub_16F654();
  v4 = *(_DWORD *)(sub_1780B4(v3) + 152);
  v5 = sub_16F654();
  v6 = ((int (__fastcall *)(int))loc_165BB8)(v5);
  v7 = sub_92E28();
  v8 = sub_FA95C(*a1 + *v2, v2[1], v6);
  sub_92E40(v7);
  if ( v8 <= 1 )
    return 0;
  v9 = v2[4];
  if ( v9 == -1 )
    return 0;
  else
    return sub_FAA9C(v9 + *a1, v4);
}
