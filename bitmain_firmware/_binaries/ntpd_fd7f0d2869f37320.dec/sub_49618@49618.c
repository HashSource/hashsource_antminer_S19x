int __fastcall sub_49618(int a1, int a2)
{
  int *v3; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r3
  int v7; // r8
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r3
  char v12; // r12
  char v13; // r2
  int result; // r0
  int v15; // r0
  int v16; // r1
  bool v17; // zf
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r8
  int v22; // r9
  double v23; // d11
  double v24; // d16
  double v25; // d10
  double v26; // d9
  const char *v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // [sp+50h] [bp-34h]
  int v33; // [sp+54h] [bp-30h]
  int v34; // [sp+58h] [bp-2Ch]
  int v35; // [sp+5Ch] [bp-28h]
  int v36; // [sp+60h] [bp-24h]
  int v37; // [sp+64h] [bp-20h]
  int v38; // [sp+6Ch] [bp-18h] BYREF
  char v39; // [sp+70h] [bp-14h] BYREF
  char v40; // [sp+74h] [bp-10h] BYREF
  int v41; // [sp+7Ch] [bp-8h]

  v3 = *(int **)(a1 + 84);
  v4 = *v3;
  v38 = 0;
  v5 = _stack_chk_guard;
  v6 = *(int *)(v4 + 3224) >> 1;
  *(_DWORD *)(v4 + 3224) = v6;
  v41 = v5;
  if ( a2 == 1 )
  {
    v7 = *(_DWORD *)(v4 + 3216);
    *(_DWORD *)(v4 + 3224) = v6 | 0x200;
  }
  else
  {
    if ( a2 == 2 && *(_DWORD *)(v4 + 3204) == 2 )
    {
      v7 = 1;
      v28 = *(_DWORD *)(v4 + 56);
      v29 = *(_DWORD *)(v4 + 60);
      if ( *(_DWORD *)(v4 + 3216) != 1 )
        *(_DWORD *)(v4 + 768) |= 8u;
      *(_DWORD *)(v4 + 40) = v28;
      *(_DWORD *)(v4 + 44) = v29;
      *(_DWORD *)(v4 + 3204) = 2;
      goto LABEL_9;
    }
    v7 = *(_DWORD *)(v4 + 3216);
  }
  *(_DWORD *)(v4 + 3204) = a2;
  if ( v7 % 10 )
    goto LABEL_9;
  v8 = *(_DWORD *)(v4 + 3224);
  v9 = *(_DWORD *)(v4 + 3220);
  if ( v7 == 10 )
  {
    if ( v9 <= 1 )
      goto LABEL_9;
    v8 >>= 1;
  }
  else if ( v9 <= 1 )
  {
    goto LABEL_8;
  }
  v10 = v4 + v9;
  v11 = v9 - 2;
  v12 = a0123456789abcd[v8 & 0xF];
  v13 = a0123456789abcd[((unsigned int)v8 >> 5) & 0xF];
  *(_BYTE *)(v10 - 1) = v12;
  *(_DWORD *)(v4 + 3220) = v11;
  *(_BYTE *)(v4 + v11) = v13;
LABEL_8:
  if ( v7 )
    goto LABEL_9;
  *(_DWORD *)(v4 + 3220) = 20;
  v15 = sscanf(
          (const char *)v4,
          "%6s%2d%1d%2s%3d%2d%2d%2d",
          &v40,
          v3 + 47,
          &v38,
          &v39,
          v3 + 48,
          v3 + 49,
          v3 + 50,
          v3 + 51);
  v16 = v3[48];
  v32 = v16;
  v17 = v15 == 8;
  if ( v15 == 8 )
    *((_BYTE *)v3 + 40) = 0;
  LOWORD(v18) = -30583;
  if ( !v17 )
    *((_BYTE *)v3 + 40) = 3;
  HIWORD(v18) = -30584;
  v19 = *(_DWORD *)(v4 + 3208) + *(_DWORD *)(v4 + 3160);
  v20 = v19 - 60 * (((int)(v19 + ((unsigned __int64)(v19 * (__int64)v18) >> 32)) >> 5) - (v19 >> 31));
  *(_DWORD *)(v4 + 3208) = v20;
  if ( v16 && (!v3[47] || v38) )
  {
    v21 = *(_DWORD *)(v4 + 768);
  }
  else
  {
    v21 = *(_DWORD *)(v4 + 768) | 0x80;
    *(_DWORD *)(v4 + 768) = v21;
  }
  v22 = v3[51];
  if ( v20 == v22 )
  {
    *(_DWORD *)(v4 + 3208) = v22;
    if ( !v21 )
    {
      v33 = *(_DWORD *)(v4 + 3180);
      if ( v33 == 10 )
      {
        v30 = v3[59];
        v3[56] = v3[58];
        v3[57] = v30;
        v31 = *(_DWORD *)(v4 + 44);
        v3[58] = *(_DWORD *)(v4 + 40);
        v3[59] = v31;
        if ( !sub_3A4E8(v3) )
          sub_39C88(a1, 6);
        v21 = *(_DWORD *)(v4 + 768);
        v22 = v3[51];
        v33 = *(_DWORD *)(v4 + 3180);
        v32 = v3[48];
      }
      goto LABEL_19;
    }
  }
  else
  {
    v21 |= 0x20u;
    *(_DWORD *)(v4 + 3208) = v22;
    *(_DWORD *)(v4 + 768) = v21;
  }
  v33 = *(_DWORD *)(v4 + 3180);
LABEL_19:
  v23 = *(double *)(v4 + 736);
  v34 = v3[47];
  v24 = *(double *)(v4 + 712);
  v36 = v3[50];
  v35 = v3[49];
  v25 = *(double *)(v4 + 3000);
  v37 = *(_DWORD *)(v4 + 2836);
  v26 = *(double *)(v4 + 744);
  v27 = (const char *)sub_6474C(v3[58]);
  sub_6D00C(
    v3 + 14,
    128,
    "%02x %02d %03d %02d:%02d:%02d %4.0f %3d %6.3f %2d %6.2f %6.1f %s",
    v21,
    v34,
    v32,
    v35,
    v36,
    v22,
    v25,
    v37,
    v26,
    v33,
    v23 * 1000000.0 / 8000.0,
    v24 * 1000000.0 / 8000.0,
    v27);
  v3[46] = strlen((const char *)v3 + 56);
  *(_DWORD *)(v4 + 768) = 0;
  if ( (v3[192] & 8) != 0 )
    sub_42D0C(a1 + 16, (const char *)v3 + 56);
  v7 = *(_DWORD *)(v4 + 3216);
LABEL_9:
  result = _stack_chk_guard;
  *(_DWORD *)(v4 + 3216) = (v7 + 1) % 100;
  return result;
}
