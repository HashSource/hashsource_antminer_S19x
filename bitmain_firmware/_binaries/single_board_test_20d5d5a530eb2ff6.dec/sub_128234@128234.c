void *__fastcall sub_128234(int (__fastcall *a1)(int, void **), int *a2, int *a3, int a4, int a5, int a6, _DWORD *a7)
{
  int *v10; // r7
  int v11; // r8
  int v12; // r11
  int *v13; // r9
  _DWORD *v14; // r2
  _DWORD *v15; // r0
  char **v16; // r0
  void *v17; // r0
  size_t v18; // r11
  void *v19; // r6
  void *v20; // r4
  void *v21; // r0
  bool v22; // zf
  void *v23; // r8
  int v24; // r3
  int v26; // r3
  void *v27; // r2
  _DWORD *v28; // r0
  char **v29; // r0
  __int16 v30; // r2
  _DWORD *v31; // r0
  char **v32; // r0
  int v33; // [sp+0h] [bp-1Ch]
  _DWORD *v34; // [sp+8h] [bp-14h]
  void *v36; // [sp+10h] [bp-Ch] BYREF
  void *v37; // [sp+14h] [bp-8h] BYREF

  v10 = (int *)sub_D14F4();
  v37 = 0;
  if ( !v10 )
  {
    v20 = 0;
    sub_D0048(13, 128, 65, (int)"crypto/asn1/a_sign.c", 37);
    v18 = 0;
    v23 = 0;
    v19 = 0;
    goto LABEL_27;
  }
  if ( a3 )
  {
    v11 = 1;
    if ( a2 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = v12 ? a3 : a2;
        if ( a7[1] == 113 )
        {
          ASN1_TYPE_free(v13[1]);
          v13[1] = 0;
        }
        else
        {
          v14 = (_DWORD *)v13[1];
          if ( !v14 || *v14 != 5 )
          {
            ASN1_TYPE_free((int)v14);
            v15 = (_DWORD *)sub_B2408();
            v13[1] = (int)v15;
            if ( !v15 )
              goto LABEL_56;
            *v15 = 5;
          }
        }
        ++v12;
        ASN1_OBJECT_free(*v13);
        v16 = sub_EAA20(a7[1]);
        *v13 = (int)v16;
        if ( !v16 )
          break;
        if ( !v16[3] )
          goto LABEL_52;
        if ( v12 == 2 )
          goto LABEL_16;
      }
    }
    else
    {
      while ( 1 )
      {
        do
          ++v11;
        while ( v11 == 1 );
        if ( a7[1] == 113 )
        {
          ASN1_TYPE_free(a3[1]);
          a3[1] = 0;
        }
        else
        {
          v28 = (_DWORD *)a3[1];
          if ( !v28 || *v28 != 5 )
          {
            ASN1_TYPE_free((int)v28);
            v15 = (_DWORD *)sub_B2408();
            a3[1] = (int)v15;
            if ( !v15 )
              goto LABEL_56;
            *v15 = 5;
          }
        }
        ASN1_OBJECT_free(*a3);
        v29 = sub_EAA20(a7[1]);
        *a3 = (int)v29;
        if ( !v29 )
          break;
        if ( !v29[3] )
          goto LABEL_52;
        if ( v11 == 2 )
          goto LABEL_16;
      }
    }
LABEL_54:
    v33 = 64;
    v30 = 162;
    goto LABEL_42;
  }
  if ( a2 )
  {
    v31 = (_DWORD *)a2[1];
    if ( a7[1] == 113 )
    {
      ASN1_TYPE_free((int)v31);
      a2[1] = 0;
    }
    else if ( !v31 || *v31 != 5 )
    {
      ASN1_TYPE_free((int)v31);
      v15 = (_DWORD *)sub_B2408();
      a2[1] = (int)v15;
      if ( !v15 )
      {
LABEL_56:
        v20 = v15;
        v18 = (size_t)v15;
        v23 = v15;
        v19 = v15;
        goto LABEL_27;
      }
      *v15 = 5;
    }
    ASN1_OBJECT_free(*a2);
    v32 = sub_EAA20(a7[1]);
    *a2 = (int)v32;
    if ( !v32 )
      goto LABEL_54;
    if ( !v32[3] )
    {
LABEL_52:
      v33 = 69;
      v30 = 154;
      goto LABEL_42;
    }
  }
LABEL_16:
  v17 = (void *)a1(a5, 0);
  if ( (int)v17 <= 0 )
  {
    v33 = 75;
    v30 = 68;
LABEL_42:
    v20 = 0;
    v18 = 0;
    sub_D0048(13, 128, v30, (int)"crypto/asn1/a_sign.c", v33);
    v23 = 0;
    v19 = 0;
    goto LABEL_27;
  }
  v18 = (size_t)v17;
  v19 = CRYPTO_malloc(v17);
  v20 = (void *)sub_D9AF8(a6);
  v37 = v20;
  v21 = CRYPTO_malloc(v20);
  v22 = v21 == 0;
  if ( v21 )
    v22 = v19 == 0;
  v23 = v21;
  v24 = v22;
  v34 = (_DWORD *)v24;
  if ( v22 )
  {
    v37 = 0;
    sub_D0048(13, 128, 65, (int)"crypto/asn1/a_sign.c", 84);
  }
  else
  {
    v36 = v19;
    a1(a5, &v36);
    if ( sub_D1520(v10, a7, v34) && sub_D16D8((int)v10, (int)v19, v18) && sub_15EF08(v10, v23, &v37, a6) )
    {
      CRYPTO_free(*(void **)(a4 + 8));
      v26 = *(_DWORD *)(a4 + 12);
      v27 = v37;
      *(_DWORD *)(a4 + 8) = v23;
      v23 = v34;
      *(_DWORD *)a4 = v27;
      *(_DWORD *)(a4 + 12) = v26 & 0xFFFFFFF0 | 8;
    }
    else
    {
      v37 = 0;
      sub_D0048(13, 128, 6, (int)"crypto/asn1/a_sign.c", 95);
    }
  }
LABEL_27:
  sub_D1504(v10);
  sub_E0758(v19, v18, (size_t)"crypto/asn1/a_sign.c");
  sub_E0758(v23, (size_t)v20, (size_t)"crypto/asn1/a_sign.c");
  return v37;
}
