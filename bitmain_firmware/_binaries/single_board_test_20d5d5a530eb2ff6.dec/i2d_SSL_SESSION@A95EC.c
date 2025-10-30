int __fastcall i2d_SSL_SESSION(int result, int a2)
{
  int v2; // r4
  int v3; // r8
  int v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r10
  int v11; // r0
  const char *v12; // r8
  int v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r2
  const char *v17; // r5
  int v18; // r5
  int v19; // r5
  _DWORD *v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r1
  _DWORD *v24; // r3
  int v25; // r2
  int v26; // r5
  int v27; // r3
  char v28; // [sp+3h] [bp-15Dh] BYREF
  _BYTE v29[4]; // [sp+4h] [bp-15Ch] BYREF
  _DWORD v30[4]; // [sp+8h] [bp-158h] BYREF
  _DWORD v31[4]; // [sp+18h] [bp-148h] BYREF
  _DWORD v32[4]; // [sp+28h] [bp-138h] BYREF
  _DWORD v33[4]; // [sp+38h] [bp-128h] BYREF
  _DWORD v34[4]; // [sp+48h] [bp-118h] BYREF
  _DWORD v35[4]; // [sp+58h] [bp-108h] BYREF
  _DWORD v36[4]; // [sp+68h] [bp-F8h] BYREF
  _DWORD v37[4]; // [sp+78h] [bp-E8h] BYREF
  _DWORD v38[4]; // [sp+88h] [bp-D8h] BYREF
  _DWORD v39[4]; // [sp+98h] [bp-C8h] BYREF
  _DWORD v40[4]; // [sp+A8h] [bp-B8h] BYREF
  _DWORD v41[4]; // [sp+B8h] [bp-A8h] BYREF
  _DWORD s[38]; // [sp+C8h] [bp-98h] BYREF

  if ( result )
  {
    v2 = result;
    v3 = *(_DWORD *)(result + 440);
    if ( v3 )
    {
      memset(s, 0, 0x78u);
      v5 = *(_DWORD *)(v3 + 12);
      v6 = *(_DWORD *)v2;
      s[0] = 1;
      s[1] = v6;
    }
    else
    {
      v26 = *(_DWORD *)(result + 444);
      if ( !v26 )
        return 0;
      memset(s, *(_DWORD *)(result + 440), 0x78u);
      v27 = *(_DWORD *)v2;
      LOWORD(v5) = v26;
      s[0] = 1;
      s[1] = v27;
    }
    v7 = *(_DWORD *)(v2 + 436);
    v29[0] = BYTE1(v5);
    v29[1] = v5;
    v30[2] = v29;
    s[2] = v30;
    v30[0] = 2;
    v30[3] = 0;
    if ( v7 )
    {
      v34[2] = &v28;
      v34[3] = 0;
      v28 = v7;
      v34[0] = 1;
      s[3] = v34;
    }
    v8 = *(_DWORD *)(v2 + 428);
    v9 = *(_DWORD *)(v2 + 4);
    v10 = *(_DWORD *)(v2 + 432);
    s[4] = v31;
    v11 = *(_DWORD *)(v2 + 328);
    v31[0] = v9;
    v12 = *(const char **)(v2 + 460);
    s[10] = v8;
    s[11] = v8 >> 31;
    v32[2] = v2 + 332;
    s[5] = v32;
    v32[0] = v11;
    v13 = *(_DWORD *)(v2 + 420);
    v14 = *(_DWORD *)(v2 + 364);
    v33[2] = v2 + 368;
    v15 = *(_DWORD *)(v2 + 412);
    s[8] = v10;
    s[9] = v10 >> 31;
    v31[2] = v2 + 72;
    v31[3] = 0;
    v32[3] = 0;
    v33[3] = 0;
    s[13] = v33;
    v33[0] = v14;
    s[14] = v13;
    s[12] = v15;
    if ( v12 )
    {
      v35[0] = strlen(v12);
      v35[2] = v12;
      v35[3] = 0;
      s[15] = v35;
    }
    if ( *(_DWORD *)(v2 + 464) )
    {
      v16 = *(_DWORD *)(v2 + 468);
      v36[2] = *(_DWORD *)(v2 + 464);
      v36[3] = 0;
      v36[0] = v16;
      s[19] = v36;
    }
    if ( *(_DWORD *)(v2 + 472) )
    {
      s[16] = *(_DWORD *)(v2 + 472);
      s[17] = 0;
    }
    v17 = *(const char **)(v2 + 400);
    s[18] = *(_DWORD *)(v2 + 476);
    if ( v17 )
    {
      v39[0] = strlen(v17);
      v39[3] = 0;
      v39[2] = v17;
      s[20] = v39;
    }
    v18 = *(_DWORD *)(v2 + 404);
    if ( v18 )
    {
      v38[0] = strlen(*(const char **)(v2 + 404));
      v38[3] = 0;
      v38[2] = v18;
      s[21] = v38;
    }
    v19 = *(_DWORD *)(v2 + 496);
    if ( v19 )
    {
      v37[0] = strlen(*(const char **)(v2 + 496));
      v37[3] = 0;
      v37[2] = v19;
      s[22] = v37;
    }
    else
    {
      s[22] = 0;
    }
    v20 = *(_DWORD **)(v2 + 484);
    v21 = *(_DWORD *)(v2 + 508);
    v22 = *(_DWORD *)(v2 + 480);
    s[25] = 0;
    s[24] = v21;
    s[26] = v22;
    if ( v20 )
    {
      v23 = *(_DWORD *)(v2 + 488);
      v40[2] = v20;
      v20 = v40;
      v40[3] = 0;
      v40[0] = v23;
    }
    s[27] = v20;
    v24 = *(_DWORD **)(v2 + 500);
    s[28] = *(unsigned __int8 *)(v2 + 492);
    if ( v24 )
    {
      v25 = *(_DWORD *)(v2 + 504);
      v41[2] = v24;
      v24 = v41;
      v41[3] = 0;
      v41[0] = v25;
    }
    s[29] = v24;
    return sub_B0FDC(s, a2, &unk_202E00);
  }
  return result;
}
