int __fastcall sub_48698(int a1, int a2)
{
  int *v2; // r5
  int v4; // r4
  int v5; // r12
  int v6; // r8
  int v7; // r3
  int v8; // r12
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r3
  char v14; // r12
  char v15; // r2
  int result; // r0
  int v17; // r3
  bool v18; // zf
  int v19; // r0
  int v20; // r1
  bool v21; // zf
  char v22; // r3
  int v23; // r0
  int v24; // r12
  int v25; // r8
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r9
  int v30; // r3
  double v31; // d11
  double v32; // d6
  double v33; // d7
  double v34; // d10
  const char *v35; // r0
  int v36; // r3
  int v37; // r1
  int v38; // r1
  int v39; // r3
  int v40; // [sp+50h] [bp-34h]
  int v41; // [sp+54h] [bp-30h]
  int v42; // [sp+58h] [bp-2Ch]
  int v43; // [sp+5Ch] [bp-28h]
  int v44; // [sp+60h] [bp-24h]
  int v45; // [sp+64h] [bp-20h]
  int v46; // [sp+6Ch] [bp-18h] BYREF
  char v47; // [sp+70h] [bp-14h] BYREF
  char v48; // [sp+74h] [bp-10h] BYREF
  int v49; // [sp+7Ch] [bp-8h]

  v2 = *(int **)(a1 + 84);
  v4 = *v2;
  v5 = *(_DWORD *)(*v2 + 3224);
  v6 = *(_DWORD *)(*v2 + 3216);
  v46 = 0;
  v7 = _stack_chk_guard;
  v8 = v5 >> 1;
  *(_DWORD *)(v4 + 3224) = v8;
  v49 = v7;
  if ( a2 == 1 )
  {
    *(_DWORD *)(v4 + 3224) = v8 | 0x200;
    v9 = v6 % 10;
  }
  else
  {
    if ( a2 == 2 )
    {
      v17 = *(_DWORD *)(v4 + 3204);
      if ( v17 == 2 )
      {
        v18 = v6 == 1;
        if ( v6 != 1 )
          v17 = *(_DWORD *)(v4 + 768);
        v6 = 1;
        v19 = *(_DWORD *)(v4 + 56);
        v20 = *(_DWORD *)(v4 + 60);
        if ( !v18 )
          *(_DWORD *)(v4 + 768) = v17 | 8;
        *(_DWORD *)(v4 + 40) = v19;
        *(_DWORD *)(v4 + 44) = v20;
        *(_DWORD *)(v4 + 3204) = 2;
        goto LABEL_9;
      }
    }
    v9 = v6 % 10;
  }
  *(_DWORD *)(v4 + 3204) = a2;
  if ( v9 )
    goto LABEL_9;
  v10 = *(_DWORD *)(v4 + 3224);
  v11 = *(_DWORD *)(v4 + 3220);
  if ( v6 == 10 )
  {
    if ( v11 <= 1 )
      goto LABEL_9;
    v10 >>= 1;
  }
  else if ( v11 <= 1 )
  {
    goto LABEL_8;
  }
  v12 = v4 + v11;
  v13 = v11 - 2;
  v14 = a0123456789abcd_4[v10 & 0xF];
  v15 = a0123456789abcd_4[((unsigned int)v10 >> 5) & 0xF];
  *(_BYTE *)(v12 - 1) = v14;
  *(_DWORD *)(v4 + 3220) = v13;
  *(_BYTE *)(v4 + v13) = v15;
LABEL_8:
  if ( v6 )
    goto LABEL_9;
  *(_DWORD *)(v4 + 3220) = 20;
  v21 = sscanf(
          (const char *)v4,
          "%6s%2d%1d%2s%3d%2d%2d%2d",
          &v48,
          v2 + 47,
          &v46,
          &v47,
          v2 + 48,
          v2 + 49,
          v2 + 50,
          v2 + 51) == 8;
  LOWORD(v23) = -30583;
  if ( v21 )
    *((_BYTE *)v2 + 40) = 0;
  else
    v22 = 3;
  if ( !v21 )
    *((_BYTE *)v2 + 40) = v22;
  HIWORD(v23) = -30584;
  v24 = v2[48];
  v25 = *(_DWORD *)(v4 + 768);
  v26 = *(_DWORD *)(v4 + 3208) + *(_DWORD *)(v4 + 3160);
  v40 = v24;
  v27 = v26 - 60 * (((int)(v26 + ((unsigned __int64)(v26 * (__int64)v23) >> 32)) >> 5) - (v26 >> 31));
  v28 = v2[47];
  *(_DWORD *)(v4 + 3208) = v27;
  v42 = v28;
  if ( v24 && (!v28 || v46) )
  {
    v29 = v2[51];
    if ( v27 == v29 )
    {
      v36 = *(_DWORD *)(v4 + 3180);
      *(_DWORD *)(v4 + 3208) = v29;
      v41 = v36;
      if ( !v25 && v36 == 10 )
      {
        v37 = v2[59];
        v2[56] = v2[58];
        v2[57] = v37;
        v38 = *(_DWORD *)(v4 + 44);
        v2[58] = *(_DWORD *)(v4 + 40);
        v2[59] = v38;
        if ( !sub_39CF8(v2) )
          sub_394A0((__int16 *)a1, 6);
        v25 = *(_DWORD *)(v4 + 768);
        v29 = v2[51];
        v40 = v2[48];
        v41 = *(_DWORD *)(v4 + 3180);
        v42 = v2[47];
      }
      goto LABEL_27;
    }
  }
  else
  {
    v29 = v2[51];
    v25 |= 0x80u;
    *(_DWORD *)(v4 + 768) = v25;
    if ( v27 == v29 )
    {
      v39 = *(_DWORD *)(v4 + 3180);
      *(_DWORD *)(v4 + 3208) = v29;
      v41 = v39;
      goto LABEL_27;
    }
  }
  v30 = *(_DWORD *)(v4 + 3180);
  v25 |= 0x20u;
  *(_DWORD *)(v4 + 3208) = v29;
  *(_DWORD *)(v4 + 768) = v25;
  v41 = v30;
LABEL_27:
  v31 = *(double *)(v4 + 3000);
  v32 = *(double *)(v4 + 736) * 1000000.0;
  v33 = *(double *)(v4 + 712) * 1000000.0;
  v43 = v2[49];
  v34 = *(double *)(v4 + 744);
  v44 = v2[50];
  v45 = *(_DWORD *)(v4 + 2836);
  v35 = (const char *)sub_63804(v2[58]);
  sub_6C054(
    v2 + 14,
    128,
    "%02x %02d %03d %02d:%02d:%02d %4.0f %3d %6.3f %2d %6.2f %6.1f %s",
    v25,
    v42,
    v40,
    v43,
    v44,
    v29,
    v31,
    v45,
    v34,
    v41,
    v32 / 8000.0,
    v33 / 8000.0,
    v35);
  v2[46] = strlen((const char *)v2 + 56);
  *(_DWORD *)(v4 + 768) = 0;
  if ( (v2[192] & 8) != 0 )
    sub_41F44(a1 + 16, (const char *)v2 + 56);
  v6 = *(_DWORD *)(v4 + 3216);
LABEL_9:
  result = _stack_chk_guard;
  *(_DWORD *)(v4 + 3216) = (v6 + 1) % 100;
  return result;
}
