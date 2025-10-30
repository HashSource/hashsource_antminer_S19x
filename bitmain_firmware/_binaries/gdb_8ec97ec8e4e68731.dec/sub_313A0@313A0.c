int __fastcall sub_313A0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r10
  int v5; // r0
  int v6; // r8
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  int v18; // r0
  const char *v19; // r0

  v2 = (_DWORD *)sub_31248();
  v3 = sub_93028(v2[5]);
  v4 = sub_9253C(197960, v3);
  if ( sub_230020(a1, v3, v2[5]) )
  {
    v18 = sub_16F654();
    v7 = 0;
    v19 = (const char *)sub_25AC8C(v18, a1);
    sub_946B0("Error reading shared library list entry at %s", v19);
  }
  else
  {
    v5 = sub_16F654();
    v6 = *(_DWORD *)(sub_1780B4(v5) + 152);
    v7 = sub_9836C(32);
    v8 = v2[6];
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_BYTE *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 24) = 0;
    *(_DWORD *)(v7 + 28) = 0;
    *(_DWORD *)(v7 + 12) = a1;
    v9 = sub_15AEA8(v3 + v8, v6);
    v10 = v2[7];
    *(_DWORD *)(v7 + 4) = v9;
    v11 = sub_15AEA8(v3 + v10, v6);
    v12 = v2[8];
    *(_DWORD *)(v7 + 16) = v11;
    v13 = sub_15AEA8(v3 + v12, v6);
    v14 = v2[9];
    *(_DWORD *)(v7 + 20) = v13;
    v15 = sub_15AEA8(v3 + v14, v6);
    v16 = v2[10];
    *(_DWORD *)(v7 + 24) = v15;
    *(_DWORD *)(v7 + 28) = sub_15AEA8(v3 + v16, v6);
  }
  sub_92620(v4);
  return v7;
}
