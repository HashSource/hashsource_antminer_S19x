char *__fastcall sub_10F99C(int *a1, char *a2, size_t a3)
{
  int v3; // r4
  int v4; // r7
  signed int v5; // r10
  int *v6; // r9
  char *v7; // r0
  char *v8; // r11
  size_t v9; // r0
  int *v10; // r2
  size_t v11; // r3
  int v12; // r4
  unsigned __int8 *v13; // r6
  int v14; // r5
  int v15; // r2
  int v16; // r1
  int v17; // r0
  int v18; // r6
  char *v19; // r2
  _BYTE *v20; // r7
  _BYTE *v21; // r2
  int v22; // r7
  int i; // r3
  int v24; // r1
  int v25; // r9
  char v26; // r1
  char v27; // r0
  char *result; // r0
  unsigned __int8 *v29; // r1
  char v30; // r2
  int v31; // t1
  _BYTE *v32; // r2
  int v33; // r2
  size_t *v34; // r0
  size_t *v35; // r4
  size_t *v36; // [sp+8h] [bp-7Ch]
  size_t n; // [sp+10h] [bp-74h]
  size_t na; // [sp+10h] [bp-74h]
  int v40; // [sp+18h] [bp-6Ch]
  char *dest; // [sp+1Ch] [bp-68h]
  int v42; // [sp+20h] [bp-64h]
  int v43; // [sp+24h] [bp-60h]
  int v44; // [sp+28h] [bp-5Ch]
  int v45; // [sp+2Ch] [bp-58h]
  _BYTE v46[84]; // [sp+30h] [bp-54h] BYREF

  v40 = a3;
  dest = a2;
  if ( !a2 )
  {
    v34 = (size_t *)sub_BADF8();
    v35 = v34;
    v36 = v34;
    if ( !v34 || !sub_BAE84(v34, 0xC8u) )
    {
LABEL_58:
      sub_D0048(11, 116, 65, (int)"crypto/x509/x509_obj.c", 177);
LABEL_51:
      sub_BAE3C((int)v36);
      return 0;
    }
    *(_BYTE *)v35[1] = 0;
    if ( a1 )
    {
      v40 = 200;
      goto LABEL_5;
    }
    v3 = 199;
    dest = (char *)v36[1];
    CRYPTO_free(v36);
    a3 = 200;
LABEL_57:
    strncpy(dest, "NO X509_NAME", a3);
    dest[v3] = 0;
    return dest;
  }
  if ( !a3 )
    return 0;
  v3 = a3 - 1;
  if ( !a1 )
    goto LABEL_57;
  v36 = 0;
LABEL_5:
  v4 = 0;
  v5 = 0;
  if ( sub_10C010(*a1) > 0 )
  {
    while ( 1 )
    {
      v6 = (int *)sub_10C01C((_DWORD *)*a1, v5);
      v7 = sub_EAC84(*v6);
      if ( !v7 || (v8 = sub_EAAB4((unsigned int)v7)) == 0 )
      {
        v8 = v46;
        sub_127D0C(v46, 80, *v6);
      }
      v9 = strlen(v8);
      v10 = (int *)v6[1];
      v11 = v9;
      v12 = *v10;
      if ( *v10 > 0x100000 )
      {
        v33 = 74;
        goto LABEL_50;
      }
      v13 = (unsigned __int8 *)v10[2];
      if ( v10[1] != 27 || (v12 & 3) != 0 )
        goto LABEL_10;
      v45 = 0;
      v44 = 0;
      v43 = 0;
      v42 = 0;
      if ( v12 <= 0 )
        goto LABEL_48;
      v29 = v13;
      do
      {
        v30 = (_BYTE)v29 - (_BYTE)v13;
        v31 = *v29++;
        v32 = &v46[4 * (v30 & 3) + 80];
        if ( v31 )
          *((_DWORD *)v32 - 24) = 1;
      }
      while ( v29 != &v13[v12] );
      if ( v43 | v42 | v44 )
      {
LABEL_10:
        v14 = 1;
        v45 = 1;
        v44 = 1;
        v43 = 1;
        v42 = 1;
      }
      else
      {
LABEL_48:
        v14 = 0;
        v44 = 0;
        v43 = 0;
        v42 = 0;
        v45 = 1;
      }
      if ( v12 <= 0 )
      {
        v17 = 0;
      }
      else
      {
        v15 = 0;
        v16 = v14;
        v17 = 0;
        while ( 1 )
        {
          if ( v16 )
          {
            if ( (unsigned int)v13[v15] - 32 > 0x5E )
              v17 += 4;
            else
              ++v17;
          }
          if ( v12 == ++v15 )
            break;
          v16 = *(&v42 + (v15 & 3));
        }
      }
      v18 = v11 + 2 + v17 + v4;
      if ( v18 > 0x100000 )
        break;
      if ( v36 )
      {
        n = v11;
        if ( !sub_BAE84(v36, v18 + 1) )
          goto LABEL_58;
        v11 = n;
        v19 = (char *)(v36[1] + v4);
      }
      else
      {
        if ( v18 >= v40 )
          goto LABEL_35;
        v19 = &dest[v4];
      }
      v20 = v19 + 1;
      *v19 = 47;
      na = v11;
      memcpy(v19 + 1, v8, v11);
      v20[na] = 61;
      v21 = &v20[na + 1];
      v22 = *(_DWORD *)(v6[1] + 8);
      if ( v12 > 0 )
      {
        for ( i = 0; ; v14 = *(&v42 + (i & 3)) )
        {
          if ( v14 )
          {
            v24 = *(unsigned __int8 *)(v22 + i);
            v25 = v24 >> 4;
            if ( (unsigned int)(v24 - 32) <= 0x5E )
            {
              *v21++ = v24;
            }
            else
            {
              v26 = a0123456789abcd_3[v24 & 0xF];
              v27 = a0123456789abcd_3[v25];
              *v21 = 92;
              v21[3] = v26;
              v21[2] = v27;
              v21[1] = 120;
              v21 += 4;
            }
          }
          if ( v12 == ++i )
            break;
        }
      }
      ++v5;
      *v21 = 0;
      v4 = v18;
      if ( v5 >= sub_10C010(*a1) )
        goto LABEL_33;
    }
    v33 = 123;
LABEL_50:
    sub_D0048(11, 116, 134, (int)"crypto/x509/x509_obj.c", v33);
    goto LABEL_51;
  }
LABEL_33:
  if ( v36 )
  {
    dest = (char *)v36[1];
    CRYPTO_free(v36);
  }
LABEL_35:
  result = dest;
  if ( !v5 )
    *dest = 0;
  return result;
}
