int __fastcall sub_4ECC4(char *a1, char *dest, unsigned int a3, int a4, int a5)
{
  char *v5; // r8
  unsigned int v7; // r7
  char *v8; // r4
  char *v9; // r2
  int v10; // r11
  unsigned int v11; // r3
  const void *v12; // r1
  int v13; // r5
  char *v14; // r0
  size_t v15; // r2
  char *v16; // r4
  unsigned int v17; // r6
  unsigned int v18; // r6
  size_t v19; // r5
  char *v20; // r10
  char *v21; // r0
  char *v22; // r3
  int v23; // r0
  unsigned int v24; // r5
  unsigned int v25; // r3
  char *v26; // r3
  char *v27; // r2
  char *v28; // r0
  char v29; // t1
  void *src[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = &dest[a3];
  v7 = a3;
  v8 = dest;
  v9 = a1;
  v10 = a4 + a5;
  while ( 1 )
  {
    src[0] = v9 + 1;
    v18 = (unsigned __int8)*v9;
    v19 = v18 >> 4;
    if ( v18 >> 4 == 15 )
      v19 = sub_4ECB0((unsigned __int8 **)src) + 15;
    if ( v7 < v19 )
      return -1;
    v20 = (char *)src[0];
    v21 = v8;
    v16 = &v8[v19];
    memmove(v21, src[0], v19);
    v22 = &v20[v19];
    src[0] = &v20[v19];
    if ( (unsigned int)(v5 - v16) <= 0xB )
      break;
    v23 = v18 & 0xF;
    v24 = *(unsigned __int16 *)v22;
    src[0] = v22 + 2;
    if ( v23 == 15 )
      v23 = sub_4ECB0((unsigned __int8 **)src) + 15;
    v17 = v23 + 4;
    if ( v5 - v16 < (unsigned int)(v23 + 4) )
      return -1;
    v25 = v16 - dest;
    if ( v24 > a5 + v16 - dest )
      return -1;
    if ( v24 > v25 )
    {
      v11 = v25 - v24;
      v12 = (const void *)(v10 + v11);
      v13 = -v11;
      if ( v17 < -v11 )
      {
        v14 = v16;
        v15 = v17;
        v16 += v17;
        v17 = 0;
        memmove(v14, v12, v15);
LABEL_4:
        v8 = &v16[v17];
        v7 = v5 - v8;
        if ( (unsigned int)(v5 - v8) <= 4 )
          return -1;
        goto LABEL_5;
      }
      memmove(v16, v12, -v11);
      v17 -= v13;
      v16 += v13;
      v26 = dest;
    }
    else
    {
      v26 = &v16[-v24];
    }
    if ( !v17 )
      goto LABEL_4;
    v27 = v16 - 1;
    v28 = &v26[v17];
    do
    {
      v29 = *v26++;
      *++v27 = v29;
    }
    while ( v28 != v26 );
    v8 = &v16[v17];
    v7 = v5 - v8;
    if ( (unsigned int)(v5 - v8) <= 4 )
      return -1;
LABEL_5:
    v9 = (char *)src[0];
  }
  if ( v5 != v16 )
    return -1;
  return &v20[v19] - a1;
}
