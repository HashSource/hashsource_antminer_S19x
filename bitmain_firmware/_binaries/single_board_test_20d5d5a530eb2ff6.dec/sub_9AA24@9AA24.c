int __fastcall sub_9AA24(_DWORD *a1, __int16 a2, _DWORD *a3)
{
  int v4; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r9
  int v9; // r1
  __int16 v10; // lr
  int v11; // r3
  int v12; // r2
  int v13; // r9
  int v14; // r12
  int v15; // lr
  int v16; // r2
  int v17; // r1
  int v18; // r11
  int v19; // r10
  int v20; // r2
  int v21; // r9
  int v22; // r3
  int v23; // r1
  int v24; // r1
  int v25; // r5
  int v26; // r0
  int v28; // [sp+8h] [bp-14h]
  int v29; // [sp+Ch] [bp-10h]
  int s2; // [sp+10h] [bp-Ch] BYREF
  __int16 v31; // [sp+14h] [bp-8h]
  char v32; // [sp+16h] [bp-6h]
  char v33; // [sp+17h] [bp-5h]

  v4 = *(_DWORD *)(a1[32] + 276);
  v31 = 0;
  s2 = 0;
  v32 = HIBYTE(a2);
  v33 = a2;
  v6 = sub_A8758(v4, &s2);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    *a3 = 1;
    if ( *(_DWORD *)(v7 + 20) )
      v8 = 1;
    else
      v8 = 12;
    memcpy(*(void **)(a1[27] + 4), *(const void **)(v7 + 44), *(_DWORD *)(v7 + 4) + v8);
    v9 = *(_DWORD *)(v7 + 4);
    v10 = *(_WORD *)(v7 + 8);
    v11 = a1[32];
    v12 = v8 + v9;
    v13 = *(_DWORD *)(v7 + 16);
    a1[29] = v12;
    LOBYTE(v12) = *(_BYTE *)v7;
    *(_DWORD *)(v11 + 292) = v9;
    *(_WORD *)(v11 + 296) = v10;
    *(_BYTE *)(v11 + 288) = v12;
    v14 = *(_DWORD *)(v7 + 24);
    v15 = *(_DWORD *)(v7 + 28);
    v16 = a1[974];
    v17 = a1[32];
    *(_DWORD *)(v11 + 304) = v13;
    *(_DWORD *)(v11 + 300) = 0;
    v18 = *(unsigned __int16 *)(v16 + 2);
    v19 = a1[256];
    v20 = a1[285];
    v21 = a1[249];
    v29 = a1[251];
    *(_DWORD *)(v17 + 400) = 1;
    v22 = *(_DWORD *)(v7 + 36);
    v23 = *(_DWORD *)(v7 + 32);
    a1[251] = v14;
    a1[256] = v15;
    a1[285] = v22;
    a1[249] = v23;
    v28 = v20;
    sub_7C5D0(a1 + 404, *(unsigned __int16 *)(v7 + 40));
    if ( *(_DWORD *)(v7 + 20) )
      v24 = 20;
    else
      v24 = 22;
    v25 = sub_9A4FC(a1, v24);
    a1[256] = v19;
    a1[251] = v29;
    a1[285] = v28;
    a1[249] = v21;
    sub_7C5D0(a1 + 404, v18);
    v26 = a1[3];
    *(_DWORD *)(a1[32] + 400) = 0;
    sub_B6ECC(v26, 11, 0, 0);
    return v25;
  }
  else
  {
    sub_95494(a1, 80, 390, 68, (int)"ssl/statem/statem_dtls.c", 1115);
    *a3 = 0;
    return 0;
  }
}
