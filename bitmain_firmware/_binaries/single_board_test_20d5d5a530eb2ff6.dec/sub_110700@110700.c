int __fastcall sub_110700(int a1, int *a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r10
  int v7; // r3
  int v8; // r4
  void *v9; // r0
  int v11; // r11
  int v12; // r9
  unsigned int v13; // r8
  unsigned int v14; // r4
  int *v15; // r10
  int v16; // r7
  const void **v17; // r0
  int v18; // r6
  const void **v19; // r5
  int v20; // r7
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r3
  size_t v24; // r1
  _DWORD *v25; // r3
  size_t v26; // r2
  int v27; // r2
  void *v28; // r0
  int v29; // [sp+8h] [bp-74h]
  void *v30; // [sp+Ch] [bp-70h]
  unsigned int v31; // [sp+10h] [bp-6Ch]
  size_t v32; // [sp+14h] [bp-68h]
  _BYTE *s1; // [sp+1Ch] [bp-60h]
  size_t n; // [sp+30h] [bp-4Ch] BYREF
  void *v37; // [sp+34h] [bp-48h] BYREF
  _BYTE v38[68]; // [sp+38h] [bp-44h] BYREF

  if ( a4 )
    v4 = 1;
  if ( a4 )
  {
    v6 = 5;
  }
  else
  {
    v4 = 2;
    v6 = 10;
  }
  if ( a4 >= a1 )
    v6 = v4;
  v7 = a2[5];
  if ( a2[6] >= 0 )
    v6 &= 0xFFFFFFFC;
  n = 0;
  if ( (v6 & v7) == 0 || (v11 = sub_10C010(a2[1]), v11 <= 0) )
  {
    v8 = 0;
    v9 = 0;
    goto LABEL_12;
  }
  v12 = 256;
  v13 = v6;
  v31 = 256;
  v29 = 256;
  v32 = 0;
  v14 = 0;
  s1 = 0;
  v30 = 0;
  v15 = a2;
  v16 = 256;
  while ( 1 )
  {
    v17 = (const void **)sub_10C01C((_DWORD *)v15[1], v14);
    v18 = *(unsigned __int8 *)v17;
    v19 = v17;
    if ( ((v13 >> v18) & 1) != 0 )
      break;
LABEL_31:
    if ( v11 == ++v14 )
    {
      v8 = 0;
      v9 = v30;
      goto LABEL_12;
    }
  }
  if ( v18 != v16 )
  {
    v12 = 256;
    v31 = *(unsigned __int8 *)(*(_DWORD *)(*v15 + 4) + *((unsigned __int8 *)v17 + 2));
  }
  v20 = *((unsigned __int8 *)v17 + 1);
  if ( v20 == v29 )
  {
    v27 = *((unsigned __int8 *)v17 + 2);
    if ( *((_BYTE *)v17 + 2) && *(unsigned __int8 *)(*(_DWORD *)(*v15 + 4) + v27) < v31 )
      goto LABEL_30;
    if ( v12 == v27 )
    {
      v26 = n;
      if ( (const void *)n != v17[2] )
        goto LABEL_29;
LABEL_37:
      if ( memcmp(s1, v19[1], v26) )
        goto LABEL_29;
      if ( ((0xCu >> v18) & 1) != 0 )
      {
        v8 = 1;
LABEL_40:
        v28 = (void *)v15[4];
        v15[6] = a4;
        v15[3] = (int)v19;
        CRYPTO_free(v28);
        v15[4] = a3;
        sub_10FD18(a3);
        v9 = v30;
        goto LABEL_12;
      }
      v8 = 0;
      if ( v15[6] < 0 )
        goto LABEL_40;
      v9 = v30;
LABEL_12:
      CRYPTO_free(v9);
      return v8;
    }
    v23 = (_DWORD *)*v15;
    v12 = *((unsigned __int8 *)v17 + 2);
    v24 = v32;
LABEL_25:
    v25 = *(_DWORD **)(*v23 + 4 * v12);
    n = v24;
    if ( v25 )
    {
      if ( !sub_D18F0((int)v30, v24, (int)v38, &n, v25, 0) )
      {
        v8 = -1;
        v9 = v30;
        goto LABEL_12;
      }
      v26 = n;
      s1 = v38;
    }
    else
    {
      v26 = v24;
      s1 = v30;
    }
    if ( (const void *)v26 != v19[2] )
    {
LABEL_29:
      v29 = v20;
LABEL_30:
      v16 = v18;
      goto LABEL_31;
    }
    goto LABEL_37;
  }
  CRYPTO_free(v30);
  v37 = 0;
  if ( v20 )
  {
    if ( v20 != 1 )
    {
      sub_D0048(11, 107, 133, (int)"crypto/x509/x509_vfy.c", 2612);
      return -1;
    }
    v21 = sub_10FD5C(a3);
    v22 = sub_1160D4(v21, &v37);
  }
  else
  {
    v22 = i2d_X509(a3, &v37);
  }
  if ( v22 >= 0 )
  {
    v30 = v37;
    if ( v37 )
    {
      v23 = (_DWORD *)*v15;
      v24 = v22;
      v12 = *((unsigned __int8 *)v19 + 2);
      v32 = v22;
      v31 = *(unsigned __int8 *)(*(_DWORD *)(*v15 + 4) + v12);
      goto LABEL_25;
    }
  }
  sub_D0048(11, 107, 65, (int)"crypto/x509/x509_vfy.c", 2617);
  return -1;
}
