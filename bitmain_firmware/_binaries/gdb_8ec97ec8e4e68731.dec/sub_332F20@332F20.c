int *__fastcall sub_332F20(int *a1, int *a2, int a3)
{
  int v3; // r9
  int v4; // r3
  int v5; // r4
  _BYTE *v6; // r5
  bool v7; // cc
  char v10; // r3
  char v11; // r3
  int v12; // r2
  bool v13; // zf
  int v14; // r0
  int v15; // r1
  int v16; // r3
  int v18; // r2
  int v19; // r8
  unsigned int v20; // r8
  bool v21; // cf
  int v22; // r2
  int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r2
  int v30; // r1
  int v31; // r8
  int v32; // [sp+0h] [bp-54h] BYREF
  int v33; // [sp+4h] [bp-50h]
  int v34; // [sp+8h] [bp-4Ch]
  unsigned int v35; // [sp+Ch] [bp-48h]
  _BYTE v36[12]; // [sp+10h] [bp-44h] BYREF
  int v37; // [sp+1Ch] [bp-38h]
  int v38; // [sp+24h] [bp-30h]
  _BYTE v39[8]; // [sp+2Ch] [bp-28h] BYREF
  char v40; // [sp+34h] [bp-20h]

  v4 = *a2;
  v5 = 0;
  v6 = a2;
  v7 = *a2 <= 34;
  v33 = 0;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  if ( v7 && (unsigned int)(v4 + a2[1] + 6142) < 0x3000 )
  {
    v11 = *((_BYTE *)a2 + 8);
  }
  else
  {
    sub_3312AC((int)v36, 128);
    v37 = *(_DWORD *)(a3 + 12);
    sub_32D1B8((int)v39, (unsigned int)v6, (int)v36);
    v10 = v6[8];
    v6 = v39;
    v5 = v38;
    v11 = v10 & 0x80 | v40;
    v40 = v11;
  }
  if ( (v11 & 0x70) != 0 )
  {
    if ( (v11 & 0x40) != 0 )
    {
      v12 = 2013265920;
      v35 = 2013265920;
    }
    else
    {
      v29 = *(_DWORD *)v6;
      if ( (*((_WORD *)v6 + 5) || v29 > 1) && v29 <= 33 )
      {
        sub_3326F0((unsigned int)v6, &v32, 0);
        v11 = v6[8];
      }
      if ( (v11 & 0x20) != 0 )
        v12 = v35 | 0x7C000000;
      else
        v12 = v35 | 0x7E000000;
      v35 = v12;
    }
  }
  else
  {
    v18 = *((unsigned __int16 *)v6 + 5);
    v19 = *((_DWORD *)v6 + 1);
    if ( *((_WORD *)v6 + 5) || *(_DWORD *)v6 != 1 )
    {
      v20 = v19 + 6176;
      v21 = v20 >= 0x3000;
      if ( v20 < 0x3000 )
      {
        v3 = 67092480;
        v22 = 0;
      }
      else
      {
        v22 = v20 - 12224;
      }
      if ( v20 < 0x3000 )
      {
        v3 &= v20 << 14;
      }
      else
      {
        v3 = 49152;
        v22 -= 63;
        v20 = 12287;
      }
      if ( v21 )
      {
        v5 |= 0x400u;
        HIWORD(v3) = 1023;
      }
      sub_3326F0((unsigned int)v6, &v32, v22);
      v23 = v35 & 0x3FFF;
      v24 = v35 >> 14;
      if ( v35 >> 14 > 7 )
      {
        v20 >>= 11;
        v11 = v6[8];
        v25 = (v35 & 0x4000) != 0;
      }
      else
      {
        v25 = v20 >> 9;
      }
      if ( v35 >> 14 > 7 )
      {
        v24 = v25 | 0x18;
        v26 = v20 & 6;
      }
      else
      {
        v26 = v25 & 0x18;
      }
      v27 = v26 | v24;
      if ( v35 >> 14 <= 7 )
        v11 = v6[8];
      v28 = v27 << 26;
    }
    else
    {
      v30 = -6176;
      if ( v19 < -6176 )
      {
        v3 = *((unsigned __int16 *)v6 + 5);
        v5 |= 0x400u;
        v28 = v3;
      }
      else
      {
        v31 = v19 + 6176;
        if ( v31 >= 12288 )
        {
          LOWORD(v3) = -16384;
        }
        else
        {
          v18 = 67092480;
          v30 = v31 << 17;
        }
        if ( v31 >= 12288 )
        {
          v5 |= 0x400u;
          HIWORD(v3) = 1023;
          v28 = 0x40000000;
        }
        else
        {
          v3 = v18 & (v31 << 14);
          v28 = v30 & 0x60000000;
        }
      }
      v23 = v35;
    }
    v12 = v23 | v28 | v3;
    v35 = v12;
  }
  v13 = (v11 & 0x80) == 0;
  v14 = v32;
  if ( v11 < 0 )
    v12 |= 0x80000000;
  v15 = v33;
  v16 = v34;
  if ( !v13 )
    v35 = v12;
  a1[3] = v12;
  *a1 = v14;
  a1[1] = v15;
  a1[2] = v16;
  if ( v5 )
    sub_3313E4(a3, v5);
  return a1;
}
