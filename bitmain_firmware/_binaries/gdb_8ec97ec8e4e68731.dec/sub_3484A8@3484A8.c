int __fastcall sub_3484A8(int a1, _DWORD *a2)
{
  int *v2; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r4
  int v23; // r0
  int v24; // r3
  int v25; // r5
  int v26; // r1
  int v27; // r2
  int v28[16]; // [sp+0h] [bp+0h] BYREF
  int v29; // [sp+40h] [bp+40h]

  v2 = a2 + 1;
  a2[16] = a2[15];
  v5 = a2[1];
  v6 = a2[2];
  v7 = v2[2];
  v8 = v2[3];
  v2 += 4;
  v28[1] = v5;
  v28[2] = v6;
  v28[3] = v7;
  v28[4] = v8;
  v9 = *v2;
  v10 = v2[1];
  v11 = v2[2];
  v12 = v2[3];
  v2 += 4;
  v28[5] = v9;
  v28[6] = v10;
  v28[7] = v11;
  v28[8] = v12;
  v13 = *v2;
  v14 = v2[1];
  v15 = v2[2];
  v16 = v2[3];
  v2 += 4;
  v28[9] = v13;
  v28[10] = v14;
  v28[11] = v15;
  v28[12] = v16;
  v17 = v2[1];
  v18 = v2[2];
  v19 = v2[3];
  v28[13] = *v2;
  v28[14] = v17;
  v28[15] = v18;
  v29 = v19;
  v28[0] = -1;
  do
  {
    if ( sub_348264((_DWORD *)a1, v29) )
      return 9;
    v21 = (*(int (__fastcall **)(_DWORD, int, int *))(a1 + 16))(0, a1, v28);
  }
  while ( v21 == 8 );
  sub_348314(v28, v20);
  if ( v21 != 6 )
    return 9;
  v23 = sub_348380((_DWORD *)a1, (int)a2);
  v25 = *(_DWORD *)(v24 + 60);
  *(_DWORD *)(v23 + 12) = v26;
  *(_DWORD *)(v23 + 24) = v27;
  *(_DWORD *)(v24 + 64) = v25;
  return sub_3483C0(v23, v24, 0);
}
