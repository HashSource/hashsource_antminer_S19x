void *__fastcall sub_1284E8(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, int a4, size_t *a5, int a6)
{
  void *v6; // r4
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int (__fastcall *v16)(int, unsigned __int8 *, size_t *, _DWORD *, _DWORD *, int); // r11
  int v17; // r0
  int v18; // r7
  void *v19; // r0
  void *v20; // r6
  bool v21; // zf
  int v22; // r5
  int v23; // r3
  void *v24; // r2
  int v26; // r0
  int v27; // r4
  char **v28; // r0
  char **v29; // r0
  __int16 v30; // r2
  int v31; // [sp+0h] [bp-1Ch]
  int v32; // [sp+Ch] [bp-10h] BYREF
  void *v33; // [sp+10h] [bp-Ch] BYREF
  unsigned int v34; // [sp+14h] [bp-8h] BYREF

  v6 = 0;
  v32 = 0;
  v33 = 0;
  v11 = sub_D8D8C(a6);
  v12 = sub_D8D94(a6);
  v13 = sub_DB988(v12);
  v14 = v13;
  if ( !v13 )
  {
    v6 = 0;
    v31 = 154;
    v30 = 217;
    goto LABEL_31;
  }
  v15 = *(_DWORD *)(v13 + 12);
  if ( !v15 )
  {
    v6 = 0;
    v31 = 159;
    v30 = 198;
    goto LABEL_31;
  }
  v16 = *(int (__fastcall **)(int, unsigned __int8 *, size_t *, _DWORD *, _DWORD *, int))(v15 + 108);
  if ( !v16 )
    goto LABEL_17;
  v17 = v16(a6, a1, a5, a2, a3, a4);
  if ( v17 == 1 )
  {
    v18 = 0;
    v20 = 0;
    v33 = *(void **)a4;
    goto LABEL_16;
  }
  if ( v17 <= 0 )
  {
    v30 = 6;
    v31 = 175;
    goto LABEL_31;
  }
  if ( v17 == 2 )
  {
LABEL_17:
    if ( v11 )
    {
      v26 = sub_D8C70(v11);
      if ( sub_EB40C(&v34, v26, **(_DWORD **)(v14 + 12)) )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(v14 + 12) + 8) & 4) != 0 )
          v27 = 5;
        else
          v27 = -1;
        if ( a2 )
        {
          v28 = sub_EAA20(v34);
          sub_B28F8(a2, (int)v28, v27, 0);
        }
        if ( a3 )
        {
          v29 = sub_EAA20(v34);
          sub_B28F8(a3, (int)v29, v27, 0);
        }
        goto LABEL_7;
      }
      v6 = 0;
      v31 = 191;
      v30 = 198;
    }
    else
    {
      v6 = 0;
      v31 = 184;
      v30 = 217;
    }
LABEL_31:
    v18 = 0;
    v20 = 0;
    sub_D0048(13, 220, v30, (int)"crypto/asn1/a_sign.c", v31);
    goto LABEL_16;
  }
LABEL_7:
  v18 = sub_B0FDC(a5, (_BYTE **)&v32, a1);
  if ( v18 <= 0 )
  {
    v6 = 0;
    v33 = 0;
    v18 = 0;
    v20 = 0;
    sub_D0048(13, 220, 68, (int)"crypto/asn1/a_sign.c", 210);
  }
  else
  {
    v6 = (void *)sub_D9AF8(v14);
    v33 = v6;
    v19 = CRYPTO_malloc(v6);
    v20 = v19;
    v21 = v32 == 0;
    if ( v32 )
      v21 = v19 == 0;
    v22 = v21;
    if ( v21 )
    {
      v33 = 0;
      sub_D0048(13, 220, 65, (int)"crypto/asn1/a_sign.c", 218);
    }
    else if ( sub_D97AC(a6, (int)v19, (int)&v33, v32, v18) )
    {
      CRYPTO_free(*(void **)(a4 + 8));
      v23 = *(_DWORD *)(a4 + 12);
      v24 = v33;
      *(_DWORD *)(a4 + 8) = v20;
      v20 = (void *)v22;
      *(_DWORD *)a4 = v24;
      *(_DWORD *)(a4 + 12) = v23 & 0xFFFFFFF0 | 8;
    }
    else
    {
      v33 = 0;
      sub_D0048(13, 220, 6, (int)"crypto/asn1/a_sign.c", 224);
    }
  }
LABEL_16:
  sub_E0758((void *)v32, v18, (size_t)"crypto/asn1/a_sign.c");
  sub_E0758(v20, (size_t)v6, (size_t)"crypto/asn1/a_sign.c");
  return v33;
}
