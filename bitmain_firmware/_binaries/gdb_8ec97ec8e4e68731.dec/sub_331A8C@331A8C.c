int *__fastcall sub_331A8C(int *a1, int *a2, int a3)
{
  int v3; // r3
  int v4; // r4
  _BYTE *v5; // r7
  bool v6; // cc
  char v9; // r0
  char v10; // r0
  int v11; // r3
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r1
  int v16; // r2
  int v17; // r12
  unsigned int v18; // lr
  int v19; // r3
  int v20; // r2
  int v21; // r8
  unsigned int v22; // [sp+0h] [bp-30h] BYREF
  _BYTE v23[8]; // [sp+4h] [bp-2Ch] BYREF
  char v24; // [sp+Ch] [bp-24h]
  _BYTE v25[12]; // [sp+14h] [bp-1Ch] BYREF
  int v26; // [sp+20h] [bp-10h]
  int v27; // [sp+28h] [bp-8h]

  v3 = *a2;
  v4 = 0;
  v5 = a2;
  v6 = *a2 <= 7;
  v22 = 0;
  if ( v6 && (unsigned int)(v3 + a2[1] + 94) <= 0xBF )
  {
    v10 = *((_BYTE *)a2 + 8);
  }
  else
  {
    sub_3312AC((int)v25, 32);
    v26 = *(_DWORD *)(a3 + 12);
    sub_32D1B8((int)v23, (unsigned int)v5, (int)v25);
    v9 = v5[8];
    v5 = v23;
    v4 = v27;
    v10 = v9 & 0x80 | v24;
    v24 = v10;
  }
  if ( (v10 & 0x70) == 0 )
  {
    v13 = *((unsigned __int16 *)v5 + 5);
    v14 = *((_DWORD *)v5 + 1);
    if ( !*((_WORD *)v5 + 5) && *(_DWORD *)v5 == 1 )
    {
      if ( v14 >= -101 )
      {
        v20 = v14 + 101;
        if ( v20 > 191 )
        {
          v4 |= 0x400u;
          v16 = 66060288;
          v13 = 0x40000000;
        }
        else
        {
          v13 = (v20 << 23) & 0x60000000;
          v16 = (v20 << 20) & 0x3F00000;
        }
      }
      else
      {
        v16 = *((unsigned __int16 *)v5 + 5);
        v4 |= 0x400u;
      }
      v17 = v22;
      goto LABEL_19;
    }
    v15 = v14 + 101;
    if ( (unsigned int)(v14 + 101) <= 0xBF )
    {
      v21 = *(_DWORD *)v5;
      v17 = word_43A6A8[v13];
      v6 = *(_DWORD *)v5 <= 3;
      v16 = (v15 << 20) & 0x3F00000;
      v22 = v17;
      if ( v6 || (v17 |= word_43A6A8[*((unsigned __int16 *)v5 + 6)] << 10, v22 = v17, v21 != 7) )
      {
        v18 = 0;
        goto LABEL_18;
      }
      v18 = *((unsigned __int16 *)v5 + 7);
    }
    else
    {
      v4 |= 0x400u;
      sub_3326F0(v5, &v22, v14 - 90);
      v16 = 66060288;
      v10 = v5[8];
      v15 = 191;
      v17 = v22 & 0xFFFFF;
      v18 = v22 >> 20;
      v22 &= 0xFFFFFu;
    }
    if ( v18 > 7 )
    {
      v13 = ((v15 >> 5) & 6 | v18 & 1 | 0x18) << 26;
      goto LABEL_19;
    }
LABEL_18:
    v13 = ((v15 >> 3) & 0x18 | v18) << 26;
LABEL_19:
    v11 = v13 | v17 | v16;
    v22 = v11;
    goto LABEL_9;
  }
  if ( (v10 & 0x40) != 0 )
  {
    v11 = 2013265920;
    v22 = 2013265920;
  }
  else
  {
    v19 = *(_DWORD *)v5;
    if ( (*((_WORD *)v5 + 5) || v19 > 1) && v19 <= 6 )
    {
      sub_3326F0(v5, &v22, 0);
      v10 = v5[8];
    }
    if ( (v10 & 0x20) != 0 )
      v11 = v22 | 0x7C000000;
    else
      v11 = v22 | 0x7E000000;
    v22 = v11;
  }
LABEL_9:
  if ( v10 < 0 )
  {
    v11 |= 0x80000000;
    v22 = v11;
  }
  *a1 = v11;
  if ( v4 )
    sub_3313E4(a3, v4);
  return a1;
}
