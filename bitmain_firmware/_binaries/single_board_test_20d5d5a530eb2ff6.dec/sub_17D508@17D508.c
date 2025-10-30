int __fastcall sub_17D508(int a1, char *a2, int *a3, int *a4, int **a5)
{
  char *v6; // r8
  int *v8; // r6
  int *v9; // r9
  _DWORD *v10; // r5
  signed int v11; // r4
  int *v12; // r10
  int v13; // r6
  char *v14; // r0
  _DWORD *v15; // r0
  int v16; // r6
  int *v17; // r3
  int *v18; // r2
  int v19; // r1
  int *i; // r4
  int *v22; // r0
  bool v23; // zf
  int v24; // r5
  int *v25; // r0
  int v26; // r0

  v6 = a2;
  v8 = a3;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a1 )
  {
    sub_D0048(35, 118, 105, (int)"crypto/pkcs12/p12_kiss.c", 47);
    return 0;
  }
  if ( a2 && *a2 )
  {
    if ( !sub_17D9B0(a1, a2, -1) )
    {
      i = 0;
      v9 = 0;
      sub_D0048(35, 118, 113, (int)"crypto/pkcs12/p12_kiss.c", 70);
      goto LABEL_23;
    }
  }
  else
  {
    v6 = 0;
    if ( !sub_17D9B0(a1, 0, 0) )
    {
      v6 = &byte_1A4198;
      if ( !sub_17D9B0(a1, &byte_1A4198, 0) )
      {
        i = 0;
        v9 = 0;
        sub_D0048(35, 118, 113, (int)"crypto/pkcs12/p12_kiss.c", 66);
        goto LABEL_23;
      }
    }
  }
  v9 = (int *)sub_10BFCC();
  if ( !v9 )
  {
    i = 0;
    sub_D0048(35, 118, 65, (int)"crypto/pkcs12/p12_kiss.c", 78);
    goto LABEL_23;
  }
  v10 = (_DWORD *)sub_188F3C(a1);
  if ( !v10 )
  {
LABEL_22:
    i = 0;
    sub_D0048(35, 118, 114, (int)"crypto/pkcs12/p12_kiss.c", 83);
LABEL_23:
    if ( v8 )
    {
      sub_DA240(*v8);
      *v8 = 0;
    }
    if ( a4 )
    {
      X509_free(*a4);
      *a4 = 0;
    }
    X509_free((int)i);
    sub_10BFDC((int)v9, (void (__fastcall *)(int))X509_free);
    return 0;
  }
  v11 = 0;
  v12 = v8;
  while ( v11 < sub_10C010((int)v10) )
  {
    v13 = sub_10C01C(v10, v11);
    v14 = sub_EAC84(*(_DWORD *)(v13 + 16));
    if ( v14 == (char *)21 )
    {
      v15 = (_DWORD *)sub_188D7C(v13);
      v16 = (int)v15;
      v17 = v9;
      v18 = v12;
      v19 = (int)v6;
      if ( !v15 )
        goto LABEL_21;
    }
    else
    {
      if ( v14 != (char *)26 )
        goto LABEL_13;
      v15 = (_DWORD *)sub_188EC8(v13, v6, -1);
      v16 = (int)v15;
      v17 = v9;
      v18 = v12;
      v19 = (int)v6;
      if ( !v15 )
      {
LABEL_21:
        v8 = v12;
        sub_10BFDC((int)v10, (void (__fastcall *)(int))PKCS7_free);
        goto LABEL_22;
      }
    }
    if ( !sub_17D3C8(v15, v19, v18, v17) )
    {
      v26 = v16;
      v8 = v12;
      sub_10BFDC(v26, (void (__fastcall *)(int))PKCS12_SAFEBAG_free);
      sub_10BFDC((int)v10, (void (__fastcall *)(int))PKCS7_free);
      goto LABEL_22;
    }
    sub_10BFDC(v16, (void (__fastcall *)(int))PKCS12_SAFEBAG_free);
LABEL_13:
    ++v11;
  }
  v8 = v12;
  sub_10BFDC((int)v10, (void (__fastcall *)(int))PKCS7_free);
  v22 = sub_10BD80(v9);
  for ( i = v22; i; i = sub_10BD80(v9) )
  {
    if ( !v12 )
      goto LABEL_36;
    v23 = *v12 == 0;
    if ( *v12 )
      v23 = a4 == 0;
    if ( v23 || (v24 = *a4) != 0 )
    {
LABEL_36:
      v24 = (int)a5;
      if ( a5 )
        v24 = 1;
    }
    else
    {
      sub_D1260();
      if ( sub_10E8B4((int)i, (_DWORD *)*v12) )
      {
        *a4 = (int)i;
        i = 0;
      }
      else
      {
        v24 = (int)a5;
        if ( a5 )
          v24 = 1;
      }
      sub_D128C();
    }
    if ( v24 )
    {
      v25 = *a5;
      if ( !*a5 )
      {
        v25 = (int *)sub_10BFCC();
        *a5 = v25;
        if ( !v25 )
          goto LABEL_23;
      }
      if ( !sub_10BD3C(v25, (int)i) )
        goto LABEL_23;
      i = 0;
    }
    X509_free((int)i);
  }
  sub_10BFDC((int)v9, (void (__fastcall *)(int))X509_free);
  return 1;
}
