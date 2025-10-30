int __fastcall sub_2BC25C(int a1, int a2)
{
  int v3; // r3
  int v4; // r3
  _DWORD *v5; // r4
  _DWORD *v7; // r0
  int v8; // r3
  int v9; // r3
  bool v10; // zf
  int v11; // r3

  if ( !a2
    || (v3 = *(_DWORD *)(a2 + 148)) == 0
    || *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4) != 5
    || (v4 = *(_DWORD *)(v3 + 160)) == 0
    || (*(_BYTE *)(v4 + 2340) & 0x3F) != 4 )
  {
    *((_DWORD *)sub_93028(0x10u) + 3) = 0;
    __und(0);
  }
  v5 = *(_DWORD **)(a2 + 140);
  v7 = sub_93028(0x10u);
  v7[3] = 0;
  v8 = v5[45];
  v7[1] = a1;
  *v7 = 1;
  v7[2] = -1;
  if ( v8 )
    *(_DWORD *)(v8 + 12) = v7;
  v9 = v5[44];
  v5[45] = v7;
  v10 = v9 == 0;
  v11 = v5[43];
  if ( v10 )
    v5[44] = v7;
  v5[43] = v11 + 1;
  return sub_2B35D4(a2, 8);
}
