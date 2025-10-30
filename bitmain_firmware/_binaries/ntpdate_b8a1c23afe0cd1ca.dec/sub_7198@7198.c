int __fastcall sub_7198(unsigned __int8 *a1, int *a2)
{
  const unsigned __int16 *v4; // r7
  unsigned __int8 *v5; // r2
  unsigned int v6; // r4
  unsigned int v7; // r10
  int v8; // r6
  int result; // r0
  int v10; // r5
  char *v11; // r0
  unsigned int v12; // t1
  unsigned __int8 *v13; // r11
  unsigned __int8 *v14; // r5
  int v15; // r6
  int v16; // r10
  unsigned __int8 *v17; // r9
  unsigned __int8 *v18; // r7
  char *v19; // r0
  const unsigned __int16 *v20; // r7
  int v21; // r1
  unsigned __int8 *v22; // r3
  int v23; // t1
  int v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r1
  const unsigned __int16 *v27; // [sp+0h] [bp-24h]
  int v28; // [sp+4h] [bp-20h]
  int v29; // [sp+8h] [bp-1Ch]
  int *v30; // [sp+Ch] [bp-18h]
  unsigned __int8 *v31; // [sp+14h] [bp-10h]

  if ( !a1 )
    sub_1073C("atolfp.c", 43, 0, "str != ((void *)0)");
  v4 = *_ctype_b_loc();
  v5 = a1;
  do
  {
    v6 = *v5;
    v7 = (unsigned int)v5++;
    v8 = v4[v6] & 0x2000;
  }
  while ( (v4[v6] & 0x2000) != 0 );
  if ( v6 == 45 )
  {
    v6 = *(unsigned __int8 *)(v7 + 1);
    v8 = 1;
    v7 = (unsigned int)v5;
  }
  if ( v6 == 43 )
    v6 = *(unsigned __int8 *)++v7;
  if ( v6 == 46 )
  {
    v10 = v4[46] & 0x2000;
    if ( (v4[46] & 0x2000) == 0 )
      goto LABEL_24;
LABEL_20:
    v10 = 0;
    v6 = 0;
    goto LABEL_14;
  }
  result = v4[v6] & 0x800;
  if ( (v4[v6] & 0x800) == 0 )
    return result;
  if ( !v6 )
    goto LABEL_20;
  v10 = 0;
  while ( 1 )
  {
    v11 = strchr("0123456789", v6);
    if ( !v11 )
      break;
    v12 = *(unsigned __int8 *)++v7;
    v6 = v12;
    v10 = v11 - "0123456789" + 10 * v10;
    if ( !v12 )
      goto LABEL_14;
  }
  if ( (v4[v6] & 0x2000) != 0 )
    goto LABEL_40;
  if ( v6 != 46 )
    return v4[v6] & 0x2000;
LABEL_24:
  v28 = v8;
  v29 = v10;
  v13 = (unsigned __int8 *)(v7 + 1);
  v6 = 0;
  v14 = (unsigned __int8 *)(v7 + 10);
  v15 = ~v7;
  v31 = (unsigned __int8 *)(v7 + 10);
  v27 = v4;
  v30 = a2;
  while ( 1 )
  {
    v16 = *v13;
    v17 = v13;
    v18 = &(v13++)[v15];
    if ( !v16 )
      break;
    v19 = strchr("0123456789", v16);
    if ( !v19 )
      break;
    v6 = v19 - "0123456789" + 10 * v6;
    if ( v14 == v13 )
    {
      v20 = v27;
      v16 = v17[1];
      v21 = 9;
      v8 = v28;
      v10 = v29;
      a2 = v30;
      v22 = v31;
      goto LABEL_30;
    }
  }
  v21 = (int)v18;
  v22 = v17;
  v20 = v27;
  v8 = v28;
  v10 = v29;
  a2 = v30;
LABEL_30:
  while ( (v20[v16] & 0x800) != 0 )
  {
    v23 = *++v22;
    v16 = v23;
  }
  if ( !v16 || (result = v20[v16] & 0x2000, (v20[v16] & 0x2000) != 0) )
  {
    if ( v21 )
    {
      v24 = 32;
      v25 = 0x80000000;
      v11 = 0;
      v26 = dword_1CF88[v21];
      do
      {
        v6 *= 2;
        if ( v26 <= v6 )
        {
          v11 = (char *)((unsigned int)v11 | v25);
          v6 -= v26;
        }
        --v24;
        v25 >>= 1;
      }
      while ( v24 );
      if ( v26 < 2 * v6 )
      {
        v6 = (unsigned int)(v11 + 1);
        goto LABEL_14;
      }
LABEL_40:
      v6 = (unsigned int)v11;
    }
LABEL_14:
    if ( v8 )
    {
      v6 = -v6;
      v10 = ~v10;
      if ( !v6 )
        ++v10;
    }
    result = 1;
    *a2 = v10;
    a2[1] = v6;
  }
  return result;
}
