int __fastcall sub_1279C8(int a1, int a2, char *s, int a4)
{
  int result; // r0
  unsigned int v5; // r10
  int v6; // r5
  char *v7; // r6
  int v8; // r7
  bool v9; // zf
  int v10; // r7
  unsigned int v11; // r4
  int v12; // r7
  unsigned int v13; // r10
  unsigned int v14; // t1
  bool v15; // zf
  int v16; // r3
  _BOOL4 v17; // r3
  int v18; // r7
  _BYTE *v19; // r2
  char v20; // r3
  int v21; // r7
  _BYTE *v22; // r1
  _BYTE *v23; // r0
  char v24; // t1
  bool v25; // zf
  size_t v26; // r0
  int v27; // r0
  int v28; // r4
  _BYTE *v29; // r11
  int v30; // r0
  int **v31; // r8
  char *v32; // [sp+Ch] [bp-40h]
  _BYTE *v33; // [sp+Ch] [bp-40h]
  int v35; // [sp+14h] [bp-38h]
  int v37; // [sp+20h] [bp-2Ch]
  unsigned int v38; // [sp+24h] [bp-28h]
  int v39; // [sp+28h] [bp-24h]
  int v40; // [sp+2Ch] [bp-20h]
  _BYTE v41[28]; // [sp+30h] [bp-1Ch] BYREF

  result = a4;
  if ( !a4 )
    return result;
  if ( a4 != -1 )
  {
    v5 = (unsigned __int8)*s - 48;
    if ( v5 <= 2 )
      goto LABEL_4;
LABEL_59:
    sub_D0048(13, 100, 122, (int)"crypto/asn1/a_object.c", 73);
LABEL_60:
    v31 = 0;
    goto LABEL_52;
  }
  v32 = s;
  v26 = strlen(s);
  s = v32;
  a4 = v26;
  v5 = (unsigned __int8)*v32 - 48;
  if ( v5 > 2 )
    goto LABEL_59;
LABEL_4:
  if ( a4 <= 1 )
  {
    sub_D0048(13, 100, 138, (int)"crypto/asn1/a_object.c", 78);
    goto LABEL_60;
  }
  v6 = a4 - 2;
  v7 = s + 2;
  v8 = (unsigned __int8)s[1];
  if ( a4 == 2 )
  {
    v31 = (int **)(a4 - 2);
    v35 = a4 - 2;
    goto LABEL_80;
  }
  v9 = v8 == 32;
  if ( v8 != 32 )
    v9 = v8 == 46;
  v10 = !v9;
  if ( !v9 )
  {
    v31 = 0;
    v33 = v41;
    goto LABEL_49;
  }
  v31 = (int **)v10;
  v35 = v10;
  v37 = v5;
  v38 = 40 * v5;
  v40 = -1840700269;
  v33 = v41;
  v39 = 24;
  while ( 2 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v14 = (unsigned __int8)*v7++;
      v13 = v14;
      --v6;
      v15 = v14 == 46;
      if ( v14 != 46 )
        v15 = v13 == 32;
      if ( v15 )
        break;
      if ( !sub_BDB10(v13, 4) )
      {
        sub_D0048(13, 100, 130, (int)"crypto/asn1/a_object.c", 100);
        goto LABEL_50;
      }
      if ( v11 > 0x19999990 )
        v16 = ((unsigned __int8)v12 ^ 1) & 1;
      else
        v16 = 0;
      if ( v16 )
      {
        if ( !v31 )
        {
          v31 = (int **)sub_B822C();
          if ( !v31 )
            goto LABEL_50;
        }
        if ( !sub_B8930(v31, v11) )
          goto LABEL_50;
        v12 = 1;
        goto LABEL_26;
      }
      if ( v12 )
      {
LABEL_26:
        if ( !sub_BADB4(v31, 10) || !sub_BAD28((int)v31, v13 - 48) )
          goto LABEL_50;
        if ( !v6 )
          break;
      }
      else
      {
        v11 = v13 - 48 + 10 * v11;
        if ( !v6 )
          break;
      }
    }
    if ( v35 )
    {
      if ( !v12 )
        goto LABEL_35;
LABEL_64:
      v27 = sub_B85BC(v31);
      v28 = ((int)(v27 + 6 + ((unsigned __int64)((v27 + 6) * (__int64)v40) >> 32)) >> 2) - ((v27 + 6) >> 31);
      if ( v39 >= v28 )
      {
        if ( !v28 )
        {
          v18 = 0;
          goto LABEL_37;
        }
      }
      else
      {
        if ( v33 != v41 )
          CRYPTO_free(v33);
        v39 = v28 + 32;
        v33 = CRYPTO_malloc((void *)(v28 + 32));
        if ( !v33 )
          goto LABEL_51;
      }
      v18 = 0;
      v29 = v33 - 1;
      while ( 1 )
      {
        v30 = sub_BABE0((void **)v31, 128);
        ++v18;
        if ( v30 == -1 )
          break;
        *++v29 = v30;
        if ( v28 == v18 )
          goto LABEL_37;
      }
LABEL_50:
      if ( v33 == v41 )
      {
LABEL_52:
        sub_B895C((int)v31);
        return 0;
      }
LABEL_51:
      CRYPTO_free(v33);
      goto LABEL_52;
    }
    v17 = v37 <= 1;
    if ( v11 <= 0x27 )
      v17 = 0;
    if ( v17 )
    {
      sub_D0048(13, 100, 147, (int)"crypto/asn1/a_object.c", 120);
      goto LABEL_50;
    }
    if ( v12 )
    {
      if ( !sub_BAD28((int)v31, v38) )
        goto LABEL_50;
      goto LABEL_64;
    }
    v11 += v38;
LABEL_35:
    v18 = 0;
    v19 = v33 - 1;
    do
    {
      v20 = v11 & 0x7F;
      v11 >>= 7;
      ++v18;
      *++v19 = v20;
    }
    while ( v11 );
LABEL_37:
    if ( !a1 )
    {
      v35 += v18;
      goto LABEL_45;
    }
    if ( v18 + v35 > a2 )
    {
      sub_D0048(13, 100, 107, (int)"crypto/asn1/a_object.c", 160);
      goto LABEL_50;
    }
    if ( v18 > 1 )
    {
      v22 = &v33[v18];
      v23 = (_BYTE *)(a1 + v35);
      do
      {
        v24 = *--v22;
        *v23++ = v24 | 0x80;
      }
      while ( v33 + 1 != v22 );
      v21 = v18 + v35 - 1;
    }
    else
    {
      v21 = v35;
    }
    v35 = v21 + 1;
    *(_BYTE *)(a1 + v21) = *v33;
LABEL_45:
    if ( v6 )
    {
      v25 = v13 == 46;
      if ( v13 != 46 )
        v25 = v13 == 32;
      if ( !v25 )
      {
LABEL_49:
        sub_D0048(13, 100, 131, (int)"crypto/asn1/a_object.c", 87);
        goto LABEL_50;
      }
      continue;
    }
    break;
  }
  if ( v33 != v41 )
    CRYPTO_free(v33);
LABEL_80:
  sub_B895C((int)v31);
  return v35;
}
