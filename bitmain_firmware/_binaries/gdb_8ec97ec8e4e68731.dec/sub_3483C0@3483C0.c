int __fastcall sub_3483C0(int a1, int a2, int a3)
{
  int *v3; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int (__fastcall *v10)(int, int, int, int, _DWORD *, int); // r9
  int v11; // r10
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r8
  int v24; // r0
  int v25; // r8
  int v26; // r7
  _DWORD v28[120]; // [sp+8h] [bp-4h] BYREF
  _DWORD v29[121]; // [sp+1E8h] [bp+1DCh] BYREF

  v3 = (int *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a2 + 8);
  v8 = v3[2];
  v9 = v3[3];
  v3 += 4;
  v10 = *(int (__fastcall **)(int, int, int, int, _DWORD *, int))(a1 + 12);
  v11 = *(_DWORD *)(a1 + 24);
  v28[1] = v6;
  v28[2] = v7;
  v28[3] = v8;
  v28[4] = v9;
  v12 = *v3;
  v13 = v3[1];
  v14 = v3[2];
  v15 = v3[3];
  v3 += 4;
  v28[5] = v12;
  v28[6] = v13;
  v28[7] = v14;
  v28[8] = v15;
  v16 = *v3;
  v17 = v3[1];
  v18 = v3[2];
  v19 = v3[3];
  v3 += 4;
  v28[9] = v16;
  v28[10] = v17;
  v28[11] = v18;
  v28[12] = v19;
  v20 = v3[1];
  v21 = v3[2];
  v22 = v3[3];
  v28[13] = *v3;
  v28[14] = v20;
  v28[15] = v21;
  v28[16] = v22;
  v28[0] = 0;
  do
  {
    v24 = sub_348264((_DWORD *)a1, v28[16]);
    v25 = v24;
    if ( a3 )
      v26 = 10;
    else
      v26 = 9;
    if ( v24 )
    {
      v28[17] = v28[14];
      if ( !v10(1, v26 | 0x10, a1, a1, v28, v11) )
        return v25;
      return 9;
    }
    *(_DWORD *)(a1 + 20) = v28[16];
    memcpy(v29, v28, 0x1E0u);
    v23 = (*(int (__fastcall **)(int, int, _DWORD *))(a1 + 16))(v26, a1, v29);
    v28[17] = v29[14];
    a3 = v10(1, v26, a1, a1, v28, v11);
    if ( a3 )
      return 9;
    memcpy(v28, v29, sizeof(v28));
  }
  while ( v23 == 8 );
  if ( v23 != 7 )
    return 9;
  nullsub_35();
  return *(_DWORD *)(sub_348C6C(&v28[1]) + 68);
}
