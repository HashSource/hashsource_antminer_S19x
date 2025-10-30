int __fastcall sub_125B60(int a1, unsigned int **a2)
{
  int v4; // r0
  int result; // r0
  unsigned int *v6; // r5
  unsigned int v7; // r4
  unsigned int v8; // r7
  int v9; // r11
  int v10; // r9
  int v11; // r0
  bool v12; // cf
  unsigned __int8 *v13; // r9
  char v14; // r10
  unsigned int v15; // r3
  unsigned int v16; // r10
  unsigned int v17; // r7
  unsigned int v18; // r9
  int v19; // r8
  int v20; // r0
  unsigned int **v21; // r8
  int v22; // r2
  int v23; // r2
  int v24; // r2
  int v25; // [sp+0h] [bp-2Ch]
  unsigned int **v26; // [sp+10h] [bp-1Ch]
  unsigned int v27; // [sp+14h] [bp-18h]
  unsigned __int8 *v28; // [sp+18h] [bp-14h] BYREF
  unsigned int v29; // [sp+1Ch] [bp-10h] BYREF
  int v30; // [sp+20h] [bp-Ch] BYREF
  int v31; // [sp+24h] [bp-8h] BYREF

  v4 = sub_BADF8();
  if ( !v4 )
  {
    sub_D0048(13, 107, 65, (int)"crypto/asn1/a_d2i_fp.c", 110);
    return -1;
  }
  v6 = (unsigned int *)v4;
  v7 = 0;
  sub_D00F0();
  v8 = 0;
  v9 = 0;
  v26 = a2;
  while ( 1 )
  {
LABEL_4:
    v10 = v7 - v8;
    if ( v7 - v8 > 8 )
      goto LABEL_11;
LABEL_5:
    if ( v7 > v8 + 8 || !sub_BAF60(v6, v8 + 8) )
    {
      v24 = 120;
      goto LABEL_50;
    }
    v11 = sub_B6740(a1, v6[1] + v7, v8 + 8 - v7);
    if ( ((v8 == v7) & ((unsigned int)v11 >> 31)) != 0 )
    {
      v23 = 125;
LABEL_47:
      sub_D0048(13, 107, 142, (int)"crypto/asn1/a_d2i_fp.c", v23);
      goto LABEL_45;
    }
    if ( v11 <= 0 )
      goto LABEL_11;
    v12 = __CFADD__(v11, v7);
    v7 += v11;
    if ( v12 )
    {
      v22 = 130;
      goto LABEL_44;
    }
    v10 = v7 - v8;
    while ( 1 )
    {
LABEL_11:
      v25 = v10;
      v13 = (unsigned __int8 *)(v6[1] + v8);
      v28 = v13;
      v14 = sub_ADD48(&v28, (int *)&v29, &v30, &v31, v25);
      if ( v14 < 0 )
      {
        if ( (sub_D0760() & 0xFFF) != 0x9B )
          goto LABEL_45;
        sub_D00F0();
      }
      v8 += v28 - v13;
      if ( (v14 & 1) == 0 )
        break;
      if ( v9 == -1 )
      {
        sub_D0048(13, 107, 123, (int)"crypto/asn1/a_d2i_fp.c", 156);
        goto LABEL_45;
      }
      v10 = v7 - v8;
      ++v9;
      if ( v7 - v8 <= 8 )
        goto LABEL_5;
    }
    if ( !v9 || v29 )
      break;
    if ( !v30 && !--v9 )
    {
      v21 = v26;
      result = v8;
LABEL_41:
      if ( result >= 0 )
      {
        *v21 = v6;
        return result;
      }
      v22 = 225;
      goto LABEL_44;
    }
  }
  v15 = v29 + v8;
  if ( v29 <= v7 - v8 )
    goto LABEL_33;
  v16 = v15 - v7;
  if ( (int)(v15 - v7) < 0 || v7 > v15 )
  {
    v22 = 177;
    goto LABEL_44;
  }
  if ( !v16 )
  {
LABEL_33:
    if ( v8 <= v15 )
    {
      if ( v9 )
      {
        v8 = v15;
        goto LABEL_4;
      }
      result = v15;
      v21 = v26;
      goto LABEL_41;
    }
    v22 = 213;
LABEL_44:
    sub_D0048(13, 107, 155, (int)"crypto/asn1/a_d2i_fp.c", v22);
    goto LABEL_45;
  }
  v27 = v8;
  v17 = 0x4000;
  while ( 1 )
  {
    v18 = v17;
    if ( v17 >= v16 )
      v18 = v16;
    if ( !sub_BAF60(v6, v18 + v7) )
      break;
    v19 = v18;
    do
    {
      v20 = sub_B6740(a1, v6[1] + v7, v19);
      v7 += v20;
      if ( v20 <= 0 )
      {
        v23 = 198;
        goto LABEL_47;
      }
      v19 -= v20;
    }
    while ( v19 );
    if ( v17 <= 0x3FFFFFFE )
      v17 *= 2;
    v16 -= v18;
    if ( !v16 )
    {
      v8 = v27;
      v15 = v29 + v27;
      goto LABEL_33;
    }
  }
  v24 = 190;
LABEL_50:
  sub_D0048(13, 107, 65, (int)"crypto/asn1/a_d2i_fp.c", v24);
LABEL_45:
  sub_BAE3C((int)v6);
  return -1;
}
