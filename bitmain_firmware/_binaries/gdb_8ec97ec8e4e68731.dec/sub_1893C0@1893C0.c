void __fastcall sub_1893C0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r6
  int v6; // r3
  int v7; // r0
  int v8; // r1
  void *v9; // r5
  int v10; // r0

  v2 = ((int (*)(void))loc_23DBE4)();
  v3 = sub_183688();
  v4 = *(_DWORD *)(v2 + 48);
  v5 = v3;
  if ( v4 )
    *(_DWORD *)(v4 + 20) = 1;
  v6 = *(_DWORD *)(v2 + 52);
  if ( v6 )
    *(_DWORD *)(v6 + 20) = 1;
  sub_CE054((_DWORD **)(v2 + 136));
  memcpy((void *)(v2 + 48), a1, 0x60u);
  v7 = a1[25];
  v8 = a1[26];
  *(_DWORD *)(v5 + 24) = a1[24];
  dword_487910 = v7;
  dword_48790C = v8;
  if ( sub_22EAC0(v7) )
  {
    v9 = sub_92E28();
    v10 = sub_15FE8C(a1[27], a1[28], a1[29], a1[30], a1[31]);
    if ( v10 )
      sub_15E10C(v10);
    else
      sub_946B0("Unable to restore previously selected frame.");
    sub_92E40((int)v9);
  }
  free(a1);
}
