int __fastcall sub_12B944(int (__fastcall *a1)(int, void **), int *a2, _DWORD *a3, int a4, int a5)
{
  int *v9; // r4
  char *v10; // r0
  char *v11; // r0
  _DWORD *v12; // r7
  void *v13; // r0
  size_t v14; // r10
  void *v15; // r5
  int v16; // r6
  int v17; // r2
  int v19; // r2
  void *v20; // [sp+Ch] [bp-8h] BYREF

  v9 = (int *)sub_D14F4();
  if ( !v9 )
  {
    v19 = 35;
LABEL_18:
    sub_D0048(13, 137, 65, (int)"crypto/asn1/a_verify.c", v19);
    v16 = -1;
    goto LABEL_9;
  }
  v10 = sub_EAC84(*a2);
  v11 = sub_EAAB4((unsigned int)v10);
  v12 = (_DWORD *)sub_D99DC((int)v11);
  if ( !v12 )
  {
    v16 = -1;
    sub_D0048(13, 137, 161, (int)"crypto/asn1/a_verify.c", 41);
    goto LABEL_9;
  }
  if ( a3[1] == 3 && a3[3] << 29 )
  {
    v16 = -1;
    sub_D0048(13, 137, 220, (int)"crypto/asn1/a_verify.c", 46);
    goto LABEL_9;
  }
  v13 = (void *)a1(a4, 0);
  v14 = (size_t)v13;
  if ( (int)v13 <= 0 )
  {
    v16 = -1;
    sub_D0048(13, 137, 68, (int)"crypto/asn1/a_verify.c", 52);
    goto LABEL_9;
  }
  v15 = CRYPTO_malloc(v13);
  if ( !v15 )
  {
    v19 = 57;
    goto LABEL_18;
  }
  v20 = v15;
  a1(a4, &v20);
  if ( !sub_D1520(v9, v12, 0) || !sub_D16D8((int)v9, (int)v15, v14) )
  {
    v16 = 0;
    sub_E0758(v15, v14, (size_t)"crypto/asn1/a_verify.c");
    v17 = 69;
LABEL_8:
    sub_D0048(13, 137, 6, (int)"crypto/asn1/a_verify.c", v17);
LABEL_9:
    sub_D1504(v9);
    return v16;
  }
  sub_E0758(v15, v14, (size_t)"crypto/asn1/a_verify.c");
  if ( sub_15EFFC(v9, a3[2], *a3, a5) <= 0 )
  {
    v17 = 76;
    v16 = 0;
    goto LABEL_8;
  }
  sub_D1504(v9);
  return 1;
}
