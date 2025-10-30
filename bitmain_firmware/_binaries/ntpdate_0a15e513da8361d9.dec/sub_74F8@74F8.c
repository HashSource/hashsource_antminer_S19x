int __fastcall sub_74F8(unsigned __int8 *a1, int *a2)
{
  const unsigned __int16 **v4; // r0
  unsigned __int8 *v5; // r2
  const unsigned __int16 *v6; // r8
  int v7; // r6
  unsigned __int8 *v8; // r7
  int v9; // r4
  int result; // r0
  int v11; // r1
  int v12; // t1
  char *v13; // r0
  int v14; // r3
  unsigned __int8 *v15; // r7
  unsigned int v16; // r5
  unsigned int v17; // r8
  unsigned __int8 *v18; // r4
  int v19; // r6
  int v20; // t1
  char *v21; // r0
  unsigned __int8 *v22; // r1
  int v23; // r2
  int v24; // r11
  const unsigned __int16 *v25; // r8
  unsigned __int16 v26; // r3
  int v27; // r2
  int v28; // t1
  int v29; // r12
  int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r1
  int v33; // r6
  int v34; // r3
  int v35; // [sp+4h] [bp-18h]
  int v36; // [sp+8h] [bp-14h]
  const unsigned __int16 *v37; // [sp+Ch] [bp-10h]

  if ( !a1 )
    sub_10C38("atolfp.c", 43, 0, "str != ((void *)0)");
  v4 = _ctype_b_loc();
  v5 = a1;
  v6 = *v4;
  do
  {
    v7 = *v5;
    v8 = v5++;
    v9 = v6[v7] & 0x2000;
  }
  while ( (v6[v7] & 0x2000) != 0 );
  if ( v7 == 45 )
  {
    v7 = v8[1];
    v8 = v5;
    v9 = 1;
  }
  if ( v7 == 43 )
    v7 = *++v8;
  if ( v7 != 46 )
  {
    result = v6[v7] & 0x800;
    if ( (v6[v7] & 0x800) == 0 )
      return result;
    if ( !v7 )
      goto LABEL_40;
  }
  v11 = v7;
  v7 = 0;
  while ( 1 )
  {
    v13 = strchr("0123456789", v11);
    if ( !v13 )
      break;
    v12 = *++v8;
    v11 = v12;
    v7 = 10 * v7 + v13 - "0123456789";
    if ( !v12 )
      goto LABEL_40;
  }
  v14 = *v8;
  if ( !*v8 || (result = v6[v14] & 0x2000, (v6[v14] & 0x2000) != 0) )
  {
LABEL_40:
    v29 = 0;
LABEL_41:
    if ( !v9 )
      goto LABEL_38;
    goto LABEL_34;
  }
  if ( v14 != 46 )
    return result;
  v15 = v8 + 1;
  v37 = v6;
  v16 = v6[46] & 0x2000;
  v17 = v16;
  v35 = v7;
  v36 = v9;
  do
  {
    v18 = v15;
    v20 = *v15++;
    v19 = v20;
    if ( !v20 )
    {
      v24 = v17;
      v25 = v37;
      v22 = v18;
      v7 = v35;
      v9 = v36;
      if ( (*v37 & 0x800) == 0 )
        goto LABEL_25;
      goto LABEL_22;
    }
    v21 = strchr("0123456789", v19);
    if ( !v21 )
    {
      v24 = v17;
      v25 = v37;
      v34 = v19;
      v22 = v18;
      v7 = v35;
      v26 = v37[v34];
      v9 = v36;
      if ( (v26 & 0x800) == 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
    ++v17;
    v22 = v15;
    v16 = 10 * v16 + v21 - "0123456789";
  }
  while ( v17 != 9 );
  v23 = v18[1];
  v24 = 9;
  v25 = v37;
  v7 = v35;
  v9 = v36;
  v26 = v37[v23];
  if ( (v26 & 0x800) == 0 )
  {
    if ( !v23 )
      goto LABEL_27;
    goto LABEL_24;
  }
  do
  {
LABEL_22:
    v28 = *++v22;
    v27 = v28;
    v26 = v25[v28];
  }
  while ( (v26 & 0x800) != 0 );
  if ( !v27 )
    goto LABEL_25;
LABEL_24:
  result = v26 & 0x2000;
  if ( (v26 & 0x2000) == 0 )
    return result;
LABEL_25:
  if ( !v24 )
  {
    v29 = v16;
    goto LABEL_41;
  }
LABEL_27:
  v30 = 32;
  v31 = 0x80000000;
  v29 = 0;
  v32 = dword_1D52C[v24];
  do
  {
    v16 *= 2;
    if ( v32 <= v16 )
    {
      v29 |= v31;
      v16 -= v32;
    }
    --v30;
    v31 >>= 1;
  }
  while ( v30 );
  if ( v32 < 2 * v16 )
    ++v29;
  if ( v9 )
  {
LABEL_34:
    v29 = -v29;
    if ( v29 )
      v33 = -v7;
    else
      v33 = 1 - v7;
    v7 = v33 - 1;
  }
LABEL_38:
  result = 1;
  *a2 = v7;
  a2[1] = v29;
  return result;
}
