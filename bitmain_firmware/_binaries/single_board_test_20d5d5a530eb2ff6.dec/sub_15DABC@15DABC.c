int __fastcall sub_15DABC(signed int *a1, _BYTE *a2, int *a3, char *src, int n)
{
  signed int v5; // r7
  int v7; // r3
  int v9; // r5
  signed int v10; // r11
  int v13; // r4
  int v14; // r0
  signed int v15; // r3
  signed int v16; // r2
  int v18; // r0
  signed int v19; // r3

  v5 = n;
  *a3 = 0;
  if ( n <= 0 )
    return 0;
  v7 = a1[1];
  if ( v7 > 80 )
    sub_BC328("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)", "crypto/evp/encode.c", 171);
  v9 = *a1;
  v10 = v7 - *a1;
  if ( n < v10 )
  {
    memcpy((char *)a1 + v9 + 8, src, n);
    *a1 += n;
    return 1;
  }
  if ( v9 )
  {
    memcpy((char *)a1 + v9 + 8, src, v7 - *a1);
    v18 = sub_15D868((int)a1, a2, (int)(a1 + 2), a1[1]);
    v19 = a1[23];
    a2 += v18;
    *a1 = 0;
    v9 = v18;
    v5 = n - v10;
    src += v10;
    if ( (v19 & 1) == 0 )
    {
      v9 = v18 + 1;
      *a2++ = 10;
    }
    *a2 = 0;
    v7 = a1[1];
    if ( v5 >= v7 )
    {
      if ( v9 < 0 )
        goto LABEL_21;
      while ( 1 )
      {
LABEL_9:
        v14 = sub_15D868((int)a1, a2, (int)src, v7);
        v15 = a1[1];
        a2 += v14;
        v16 = a1[23];
        v9 += v14;
        v5 -= v15;
        src += v15;
        if ( (v16 & 1) == 0 )
          *a2++ = 10;
        *a2 = 0;
        if ( (v16 & 1) == 0 )
          ++v9;
        v7 = a1[1];
        if ( v7 > v5 )
          break;
        if ( v9 < 0 )
          goto LABEL_21;
      }
    }
    v13 = v9;
    if ( v9 >= 0 )
    {
      if ( !v5 )
      {
        *a1 = 0;
        *a3 = v9;
        return 1;
      }
      goto LABEL_24;
    }
LABEL_21:
    *a3 = 0;
    return 0;
  }
  if ( n >= v7 )
    goto LABEL_9;
  v13 = *a1;
LABEL_24:
  memcpy(a1 + 2, src, v5);
  *a1 = v5;
  *a3 = v13;
  return 1;
}
