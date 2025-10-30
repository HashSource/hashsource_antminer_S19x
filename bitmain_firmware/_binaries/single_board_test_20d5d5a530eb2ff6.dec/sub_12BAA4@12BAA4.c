int __fastcall sub_12BAA4(unsigned __int8 *a1, int *a2, int *a3, size_t *a4, int a5)
{
  int *v9; // r6
  char *v10; // r0
  _DWORD *v11; // r5
  int v12; // r3
  int (__fastcall *v13)(int *, unsigned __int8 *, size_t *, int *, int *, int); // r11
  int v14; // r4
  char *v16; // r0
  int v17; // r0
  int v18; // [sp+Ch] [bp-10h] BYREF
  _DWORD *v19; // [sp+10h] [bp-Ch] BYREF
  int v20; // [sp+14h] [bp-8h] BYREF

  v18 = 0;
  if ( !a5 )
  {
    sub_D0048(13, 197, 67, (int)"crypto/asn1/a_verify.c", 98);
    return -1;
  }
  if ( a3[1] == 3 && a3[3] << 29 )
  {
    sub_D0048(13, 197, 220, (int)"crypto/asn1/a_verify.c", 103);
    return -1;
  }
  v9 = (int *)sub_D14F4();
  if ( !v9 )
  {
    sub_D0048(13, 197, 65, (int)"crypto/asn1/a_verify.c", 109);
    goto LABEL_17;
  }
  v10 = sub_EAC84(*a2);
  v11 = (_DWORD *)sub_EB3A8((int)v10, &v19, &v20);
  if ( !v11 )
  {
    v14 = -1;
    sub_D0048(13, 197, 199, (int)"crypto/asn1/a_verify.c", 115);
    goto LABEL_9;
  }
  v11 = v19;
  if ( v19 )
  {
    v16 = sub_EAAB4((unsigned int)v19);
    v11 = (_DWORD *)sub_D99DC((int)v16);
    if ( !v11 )
    {
      v14 = -1;
      sub_D0048(13, 197, 161, (int)"crypto/asn1/a_verify.c", 138);
      goto LABEL_9;
    }
    if ( sub_DA17C(v20) == **(_DWORD **)(a5 + 12) )
    {
      if ( !sub_D954C(v9, 0, v11, 0, a5) )
      {
        v11 = 0;
        v14 = 0;
        sub_D0048(13, 197, 6, (int)"crypto/asn1/a_verify.c", 149);
        goto LABEL_9;
      }
      goto LABEL_18;
    }
    sub_D0048(13, 197, 200, (int)"crypto/asn1/a_verify.c", 144);
LABEL_17:
    v11 = 0;
    v14 = -1;
    goto LABEL_9;
  }
  v12 = *(_DWORD *)(a5 + 12);
  if ( !v12 || (v13 = *(int (__fastcall **)(int *, unsigned __int8 *, size_t *, int *, int *, int))(v12 + 104)) == 0 )
  {
    sub_D0048(13, 197, 199, (int)"crypto/asn1/a_verify.c", 121);
    goto LABEL_17;
  }
  v14 = v13(v9, a1, a4, a2, a3, a5);
  if ( v14 == 2 )
  {
LABEL_18:
    v17 = sub_B0FDC(a4, (_BYTE **)&v18, a1);
    if ( v17 > 0 )
    {
      if ( v18 )
      {
        v11 = (_DWORD *)v17;
        v14 = sub_D98A4((int)v9, a3[2], *a3, v18, v17);
        if ( v14 <= 0 )
          sub_D0048(13, 197, 6, (int)"crypto/asn1/a_verify.c", 170);
        else
          v14 = 1;
      }
      else
      {
        v11 = 0;
        v14 = -1;
        sub_D0048(13, 197, 65, (int)"crypto/asn1/a_verify.c", 162);
      }
      goto LABEL_9;
    }
    sub_D0048(13, 197, 68, (int)"crypto/asn1/a_verify.c", 158);
    goto LABEL_17;
  }
LABEL_9:
  sub_E0758((void *)v18, (size_t)v11, (size_t)"crypto/asn1/a_verify.c");
  sub_D1504(v9);
  return v14;
}
