int *__fastcall sub_33294C(int *a1, int *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  _BYTE *v5; // r4
  bool v6; // cc
  char v9; // r12
  char v10; // r12
  int v11; // r3
  int v12; // lr
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r2
  int v16; // r0
  int v17; // r1
  unsigned int v18; // r4
  unsigned int v19; // r3
  int v20; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r8
  int *v25; // r1
  unsigned __int16 *v26; // r4
  int v27; // r0
  int v28; // t1
  int v29; // [sp+4h] [bp-58h] BYREF
  unsigned int v30; // [sp+8h] [bp-54h]
  _BYTE v31[8]; // [sp+Ch] [bp-50h] BYREF
  char v32; // [sp+14h] [bp-48h]
  int v33; // [sp+24h] [bp-38h] BYREF
  int v34; // [sp+28h] [bp-34h]
  int v35; // [sp+2Ch] [bp-30h]
  unsigned int v36; // [sp+30h] [bp-2Ch]
  int v37; // [sp+34h] [bp-28h]
  unsigned int v38; // [sp+38h] [bp-24h]
  _BYTE v39[12]; // [sp+3Ch] [bp-20h] BYREF
  int v40; // [sp+48h] [bp-14h]
  int v41; // [sp+50h] [bp-Ch]

  v3 = *a2;
  v4 = 0;
  v5 = a2;
  v6 = *a2 <= 16;
  v29 = 0;
  v30 = 0;
  if ( v6 && (unsigned int)(v3 + a2[1] + 382) < 0x300 )
  {
    v10 = *((_BYTE *)a2 + 8);
  }
  else
  {
    sub_3312AC((int)v39, 64);
    v40 = *(_DWORD *)(a3 + 12);
    sub_32D1B8((int)v31, (unsigned int)v5, (int)v39);
    v9 = v5[8];
    v5 = v31;
    v4 = v41;
    v10 = v9 & 0x80 | v32;
    v32 = v10;
  }
  if ( (v10 & 0x70) == 0 )
  {
    v13 = *((unsigned __int16 *)v5 + 5);
    v14 = *((_DWORD *)v5 + 1);
    if ( !*((_WORD *)v5 + 5) && *(_DWORD *)v5 == 1 )
    {
      if ( v14 >= -398 )
      {
        v22 = v14 + 398;
        if ( v22 >= 768 )
        {
          v4 |= 0x400u;
          v16 = 66846720;
          v13 = 0x40000000;
        }
        else
        {
          v13 = (v22 << 21) & 0x60000000;
          v16 = (v22 << 18) & 0x3FC0000;
        }
      }
      else
      {
        v16 = *((unsigned __int16 *)v5 + 5);
        v4 |= 0x400u;
      }
      v17 = v30;
      v12 = v29;
LABEL_18:
      v11 = v17 | v13 | v16;
      v30 = v11;
      goto LABEL_19;
    }
    v15 = v14 + 398;
    if ( v15 >= 0x300 )
    {
      sub_3326F0((unsigned int)v5, &v29, v15 - 767);
      v4 |= 0x400u;
      v12 = v29;
      v16 = 66846720;
      v10 = v5[8];
      v15 = 767;
      v17 = v30 & 0x3FFFF;
      v18 = v30 >> 18;
LABEL_11:
      if ( v18 <= 7 )
        v19 = v15 >> 5;
      else
        v19 = v15 >> 7;
      if ( v18 <= 7 )
      {
        v20 = v19 & 0x18;
      }
      else
      {
        v20 = v19 & 6;
        v18 = v18 & 1 | 0x18;
      }
      v13 = (v20 | v18) << 26;
      goto LABEL_18;
    }
    v24 = *(_DWORD *)v5;
    v34 = 0;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    if ( v24 <= 0 )
    {
      v18 = 0;
      v12 = 0;
      v29 = 0;
    }
    else
    {
      v25 = &v33;
      v26 = (unsigned __int16 *)(v5 + 12);
      v27 = v24;
      while ( 1 )
      {
        v27 -= 3;
        *v25++ = word_43A6A8[v13];
        if ( v27 <= 0 )
          break;
        v28 = *v26++;
        v13 = v28;
      }
      v18 = v38;
      v12 = (v35 << 20) | (v34 << 10) | v33;
      v29 = v12;
      if ( v24 > 6 )
      {
        v12 |= v36 << 30;
        v17 = (v36 >> 2) | (v37 << 8);
        v29 = v12;
LABEL_45:
        v16 = (v15 << 18) & 0x3FC0000;
        goto LABEL_11;
      }
    }
    v17 = v30;
    goto LABEL_45;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v11 = 2013265920;
    v12 = v29;
    v30 = 2013265920;
  }
  else
  {
    v23 = *(_DWORD *)v5;
    if ( (*((_WORD *)v5 + 5) || v23 > 1) && v23 <= 15 )
    {
      sub_3326F0((unsigned int)v5, &v29, 0);
      v10 = v5[8];
    }
    v12 = v29;
    if ( (v10 & 0x20) != 0 )
      v11 = v30 | 0x7C000000;
    else
      v11 = v30 | 0x7E000000;
    v30 = v11;
  }
LABEL_19:
  *a1 = v12;
  if ( v10 < 0 )
  {
    v11 |= 0x80000000;
    v30 = v11;
  }
  a1[1] = v11;
  if ( v4 )
    sub_3313E4(a3, v4);
  return a1;
}
