int __fastcall sub_1F7F40(int a1, int a2)
{
  int v2; // r8
  _DWORD *v3; // r0
  int v4; // r7
  _DWORD *v5; // r4
  int v6; // r3
  int **v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r2
  int v20; // r5
  const char *v21; // r0
  _DWORD v23[8]; // [sp+0h] [bp-28h] BYREF
  int v24; // [sp+20h] [bp-8h]
  int v25; // [sp+24h] [bp-4h]

  v2 = off_489B18(&dword_4899A0, a1, a2);
  v3 = sub_1DDBBC();
  v4 = sub_1DD58C((int)v3);
  sub_243C34(v4);
  if ( !v2 )
    sub_946E0("target_get_bookmark failed.");
  v5 = sub_9836C(0x38u);
  memset(v5, 0, 0x38u);
  v6 = dword_489364;
  *((_BYTE *)v5 + 40) = 0;
  *((_BYTE *)v5 + 41) = 0;
  v5[1] = ++v6;
  dword_489364 = v6;
  v7 = (int **)sub_1DDBBC();
  v8 = sub_1DFB3C(v7);
  v5[2] = v8;
  sub_21DEAC(v23, v8);
  v9 = v23[1];
  v10 = v23[2];
  v11 = v23[3];
  v5[3] = v23[0];
  v5[4] = v9;
  v5[5] = v10;
  v5[6] = v11;
  v12 = v23[5];
  v13 = v23[6];
  v14 = v23[7];
  v5[7] = v23[4];
  v5[8] = v12;
  v5[9] = v13;
  v5[10] = v14;
  v15 = v24;
  v16 = v25;
  v5[11] = v24;
  v5[12] = v16;
  v17 = sub_15F70C(v15);
  v18 = sub_15DABC(v17);
  v19 = (_DWORD *)dword_489360;
  v5[3] = v18;
  v5[13] = v2;
  *v5 = 0;
  if ( v19 )
  {
    while ( *v19 )
      v19 = (_DWORD *)*v19;
    *v19 = v5;
  }
  else
  {
    dword_489360 = (int)v5;
  }
  v20 = v5[1];
  v21 = (const char *)sub_25AC8C(v4, v5[8]);
  return sub_259F10("Saved bookmark %d at %s\n", v20, v21);
}
