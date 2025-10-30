int __fastcall sub_15EC2C(int *a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7)
{
  int **v10; // r0
  int **v11; // r8
  char *v12; // r0
  char *v13; // r0
  char *v14; // r0
  _DWORD *v15; // r0
  int v16; // r4
  int v18; // r4
  int (__fastcall *v19)(int *, int, int, int, _DWORD, _DWORD, int); // [sp+14h] [bp-8h] BYREF

  v10 = (int **)sub_AD8B0((int)&PBE2PARAM_it, a4);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_EAC84(**v10);
    if ( sub_15E1BC(2, (int)v12, 0, 0, &v19) )
    {
      v13 = sub_EAC84(*v11[1]);
      v14 = sub_EAAB4((unsigned int)v13);
      v15 = (_DWORD *)sub_D99BC((int)v14);
      v16 = (int)v15;
      if ( !v15 )
      {
        sub_D0048(6, 118, 107, (int)"crypto/evp/p5_crpt2.c", 169);
        goto LABEL_5;
      }
      v16 = sub_D8440(a1, v15, 0, 0, 0, a7);
      if ( !v16 )
      {
LABEL_5:
        sub_173344(v11);
        return v16;
      }
      if ( sub_D89D0(a1, v11[1][1]) < 0 )
      {
        v16 = 0;
        sub_D0048(6, 118, 122, (int)"crypto/evp/p5_crpt2.c", 177);
        goto LABEL_5;
      }
      v18 = v19(a1, a2, a3, (*v11)[1], 0, 0, a7);
      sub_173344(v11);
      return v18;
    }
    else
    {
      sub_D0048(6, 118, 124, (int)"crypto/evp/p5_crpt2.c", 158);
      sub_173344(v11);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 118, 114, (int)"crypto/evp/p5_crpt2.c", 150);
    sub_173344(0);
    return 0;
  }
}
