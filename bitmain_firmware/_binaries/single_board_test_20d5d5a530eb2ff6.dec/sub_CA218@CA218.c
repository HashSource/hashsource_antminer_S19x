int __fastcall sub_CA218(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v10; // r10
  int v11; // r0
  int *v12; // r0
  int v13; // r5
  int result; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  int *v18; // r0

  v5 = a5;
  v10 = 0;
  if ( a5 )
  {
LABEL_2:
    v11 = sub_130BC0(v5);
    v12 = (int *)sub_134E20(v11);
    if ( sub_B82F8(v12, a2) )
    {
      v15 = (int *)sub_134E2C();
      if ( sub_B82F8(v15, a2) )
      {
        v16 = (int *)sub_134E38();
        if ( sub_B82F8(v16, a2) )
        {
          v17 = (int *)sub_134E44();
          if ( sub_B82F8(v17, a2) )
          {
            v18 = (int *)sub_134E50();
            if ( sub_B82F8(v18, a2) )
            {
              v13 = 0;
              sub_D0048(16, 202, 135, "crypto/ec/ecp_nist.c", 108);
              goto LABEL_5;
            }
            *(_DWORD *)(a1 + 88) = BN_nist_mod_521;
          }
          else
          {
            *(_DWORD *)(a1 + 88) = BN_nist_mod_384;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 88) = BN_nist_mod_256;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 88) = BN_nist_mod_224;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 88) = BN_nist_mod_192;
    }
    v13 = sub_CBBC4(a1, a2, a3, a4, v5);
LABEL_5:
    sub_130C74(v5);
    sub_130B5C(v10);
    return v13;
  }
  result = sub_130B08(a1);
  v5 = result;
  if ( result )
  {
    v10 = result;
    goto LABEL_2;
  }
  return result;
}
