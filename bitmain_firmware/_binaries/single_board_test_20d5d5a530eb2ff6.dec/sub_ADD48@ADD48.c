int __fastcall sub_ADD48(unsigned __int8 **a1, int *a2, int *a3, int *a4, int a5)
{
  unsigned __int8 *v5; // r12
  unsigned __int8 v7; // lr
  int v8; // r0
  int v9; // r5
  int v11; // r5
  unsigned __int8 *v12; // r7
  int v13; // r8
  _BOOL4 v14; // r0
  int v15; // r0
  int v16; // t1
  int v17; // r11
  unsigned __int8 *v18; // r10
  int v19; // r2
  unsigned __int8 v20; // r8
  int v21; // r3
  unsigned __int8 *v22; // r7
  int v23; // r5
  int v24; // lr
  unsigned __int8 *v25; // r10
  int v26; // r2

  if ( !a5 )
    goto LABEL_4;
  v5 = *a1;
  v7 = **a1;
  v8 = v7 & 0x1F;
  if ( v8 == 31 )
  {
    v11 = a5 - 1;
    if ( a5 == 1 )
      goto LABEL_4;
    v12 = v5 + 1;
    v13 = 0;
    while ( 1 )
    {
      v16 = *v12++;
      v15 = v16;
      v17 = v16 & 0x7F;
      if ( (v16 & 0x80) == 0 )
        break;
      --v11;
      v13 = v17 | (v13 << 7);
      v14 = v11 == 0;
      if ( v13 > 0xFFFFFF )
        v14 = 1;
      if ( v14 )
        goto LABEL_4;
    }
    v9 = v11 - 1;
    if ( !v9 )
      goto LABEL_4;
    v18 = v12;
    v8 = v15 | (v13 << 7);
  }
  else
  {
    v9 = a5 - 1;
    if ( a5 == 1 )
    {
LABEL_4:
      sub_D0048(13, 114, 123, "crypto/asn1/asn1_lib.c", 101);
      return 128;
    }
    v18 = v5 + 1;
  }
  *a3 = v8;
  *a4 = v7 & 0xC0;
  if ( v9 <= 0 )
    goto LABEL_4;
  v19 = *v18;
  v20 = v7 & 0x20;
  if ( v19 != 128 )
  {
    v21 = v19 & 0x7F;
    v22 = v18 + 1;
    if ( (v19 & 0x80) != 0 )
    {
      if ( v9 - 1 <= v21 )
        goto LABEL_4;
      if ( (v19 & 0x7F) != 0 )
      {
        if ( v18[1] )
        {
LABEL_32:
          if ( v21 > 4 )
            goto LABEL_4;
          v26 = *v22;
          if ( v21 != 1 )
          {
            v26 = v22[1] | (v26 << 8);
            if ( v21 != 2 )
            {
              v26 = v22[2] | (v26 << 8);
              if ( v21 != 3 )
                v26 = v22[3] | (v26 << 8);
            }
          }
          v22 += v21;
          if ( v26 < 0 )
            goto LABEL_4;
          v21 = v26;
          goto LABEL_18;
        }
        v25 = v18 + 2;
        while ( 1 )
        {
          --v21;
          v22 = v25++;
          if ( !v21 )
            break;
          if ( *v22 )
            goto LABEL_32;
        }
      }
      v21 = 0;
    }
LABEL_18:
    v23 = 0;
    *a2 = v21;
    goto LABEL_19;
  }
  v21 = 0;
  v22 = v18 + 1;
  *a2 = 0;
  v23 = 1;
  if ( (v7 & 0x20) == 0 )
    goto LABEL_4;
LABEL_19:
  if ( a5 - (v22 - v5) < v21 )
  {
    sub_D0048(13, 114, 155, "crypto/asn1/asn1_lib.c", 91);
    v24 = v20 | 0x80;
  }
  else
  {
    v24 = v7 & 0x20;
  }
  *a1 = v22;
  return v24 | v23;
}
