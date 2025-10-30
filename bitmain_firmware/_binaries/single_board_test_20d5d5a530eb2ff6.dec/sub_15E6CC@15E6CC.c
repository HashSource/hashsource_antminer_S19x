int __fastcall sub_15E6CC(int *a1, const char *a2, size_t a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7)
{
  int **v11; // r6
  size_t v12; // r8
  size_t v13; // r10
  int v14; // r0
  int v15; // r11
  int *v16; // r0
  int *v17; // r9
  int v18; // r0
  int v19; // r4
  int v20; // r6
  int v21; // r5
  int v22; // [sp+8h] [bp-9Ch]
  int v23; // [sp+Ch] [bp-98h]
  _BYTE src[16]; // [sp+10h] [bp-94h] BYREF
  _BYTE v25[64]; // [sp+20h] [bp-84h] BYREF
  _BYTE dest[68]; // [sp+60h] [bp-44h] BYREF

  if ( !a4 || *a4 != 16 || !a4[1] )
  {
    sub_D0048(6, 117, 114, (int)"crypto/evp/p5_crpt.c", 41);
    return 0;
  }
  v11 = (int **)sub_AD8B0((int)&PBEPARAM_it, a4);
  if ( !v11 )
  {
    sub_D0048(6, 117, 114, (int)"crypto/evp/p5_crpt.c", 47);
    return 0;
  }
  v12 = sub_D8940((int)a5);
  if ( v12 > 0x10 )
  {
    sub_D0048(6, 117, 194, (int)"crypto/evp/p5_crpt.c", 53);
LABEL_18:
    sub_173170(v11);
    return 0;
  }
  v13 = sub_D8AD0((int)a5);
  if ( v13 > 0x40 )
  {
    sub_D0048(6, 117, 130, (int)"crypto/evp/p5_crpt.c", 59);
    goto LABEL_18;
  }
  v14 = (int)v11[1];
  v15 = 1;
  if ( v14 )
    v15 = sub_126F04(v14);
  v22 = (*v11)[2];
  v23 = **v11;
  if ( a2 )
  {
    if ( a3 == -1 )
      a3 = strlen(a2);
  }
  else
  {
    a3 = 0;
  }
  v16 = (int *)sub_D14F4();
  v17 = v16;
  if ( !v16 )
  {
    v19 = 0;
    sub_D0048(6, 117, 65, (int)"crypto/evp/p5_crpt.c", 78);
    goto LABEL_16;
  }
  v18 = sub_D1520(v16, a6, 0);
  if ( !v18 || (v18 = sub_D16D8((int)v17, (int)a2, a3)) == 0 || (v18 = sub_D16D8((int)v17, v22, v23)) == 0 )
  {
    v19 = v18;
LABEL_16:
    sub_173170(v11);
    sub_D1504(v17);
    return v19;
  }
  sub_173170(v11);
  if ( !sub_D16E4(v17, (int)v25, 0) )
  {
LABEL_22:
    v19 = 0;
    v11 = 0;
    goto LABEL_16;
  }
  v20 = sub_D8C78((int)a6);
  if ( v20 >= 0 )
  {
    if ( v15 <= 1 )
    {
LABEL_35:
      memcpy(dest, v25, v13);
      memcpy(src, &v25[16 - v12], v12);
      if ( sub_D8440(a1, a5, 0, (int)dest, src, a7) )
      {
        sub_E07F8(v25, 0x40u);
        sub_E07F8(dest, 0x40u);
        sub_E07F8(src, 0x10u);
        v19 = 1;
        v11 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v21 = 1;
      while ( 1 )
      {
        ++v21;
        if ( !sub_D1520(v17, a6, 0) || !sub_D16D8((int)v17, (int)v25, v20) || !sub_D16E4(v17, (int)v25, 0) )
          break;
        if ( v15 == v21 )
          goto LABEL_35;
      }
    }
    goto LABEL_22;
  }
  return 0;
}
