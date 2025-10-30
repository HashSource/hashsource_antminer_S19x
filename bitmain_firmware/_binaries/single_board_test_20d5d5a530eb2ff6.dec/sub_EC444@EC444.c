char ***__fastcall sub_EC444(_DWORD *a1, int a2, int *a3, int *a4)
{
  char ***v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  char ***v12; // r4
  unsigned int v13; // r0
  char **v14; // r0
  char **v15; // r0
  size_t n; // [sp+Ch] [bp-44h] BYREF
  char v18[64]; // [sp+10h] [bp-40h] BYREF

  v8 = (char ***)sub_EB5F8();
  v12 = v8;
  if ( v8 )
  {
    ASN1_OBJECT_free(*v8, v9, v10, v11);
    v13 = sub_D8C70((int)a1);
    if ( v13 )
    {
      v14 = sub_EAA20(v13);
      *v12 = v14;
      if ( v14 )
      {
        v15 = (char **)sub_B2408();
        v12[1] = v15;
        if ( v15 )
        {
          *v15 = (char *)5;
          if ( sub_114AC4(a2, a1, v18, &n) )
          {
            if ( sub_1280A4((int)(v12 + 2), v18, n)
              && sub_D18F0(a3[2], *a3, (int)v18, &n, a1, 0)
              && sub_1280A4((int)(v12 + 6), v18, n)
              && (!a4 || sub_AE140((size_t *)v12 + 10, a4)) )
            {
              return v12;
            }
          }
          else
          {
            sub_D0048(39, 101, 102, (int)"crypto/ocsp/ocsp_lib.c", 85);
          }
        }
      }
    }
    else
    {
      sub_D0048(39, 101, 120, (int)"crypto/ocsp/ocsp_lib.c", 58);
    }
  }
  sub_EB60C((int)v12);
  return 0;
}
