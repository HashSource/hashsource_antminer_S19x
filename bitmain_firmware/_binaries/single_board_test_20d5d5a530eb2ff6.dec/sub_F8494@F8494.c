int __fastcall sub_F8494(int a1, int a2, int a3, int a4, int a5)
{
  bool v5; // zf
  bool v6; // zf
  int v7; // r8
  int v13; // r0
  int v14; // r10
  int *v15; // r6
  int **v16; // r7
  int **v17; // r5
  int v18; // t1
  int *v19; // t1
  int *v20; // t1
  int v21; // r0
  int **v22; // r0
  int **v23; // r4
  int v25; // [sp+4h] [bp-8h]

  v5 = a3 == 0;
  if ( a3 )
    v5 = a2 == 0;
  if ( v5 )
    return 0;
  v6 = a5 == 0;
  if ( a5 )
    v6 = a4 == 0;
  if ( v6 )
    return 0;
  v7 = 0;
  v13 = sub_10BF44(0, a5);
  v14 = v13;
  if ( !v13 )
    return 0;
  v25 = *(_DWORD *)(a1 + 48);
  if ( a5 > 0 )
  {
    v15 = (int *)(a2 - 4);
    v16 = (int **)(a3 - 4);
    v17 = (int **)(a4 - 4);
    do
    {
      v22 = (int **)sub_F8A3C();
      ++v7;
      v23 = v22;
      if ( !v22 )
        goto LABEL_17;
      v18 = v15[1];
      ++v15;
      if ( !v18 || (v19 = v16[1], ++v16, !v19) || (v20 = v17[1], ++v17, !v20) )
      {
        rsa_multip_info_free(v22);
        sub_10BFDC(v14, rsa_multip_info_free_ex);
        return 0;
      }
      sub_B87C8(*v22);
      sub_B87C8(v23[1]);
      sub_B87C8(v23[2]);
      v21 = *v15;
      *v23 = (int *)*v15;
      v23[1] = *v16;
      v23[2] = *v17;
      sub_B87B8(v21, 4);
      sub_B87B8((int)v23[1], 4);
      sub_B87B8((int)v23[2], 4);
      sub_10BD3C(v14, v23);
    }
    while ( a5 != v7 );
  }
  *(_DWORD *)(a1 + 48) = v14;
  if ( !sub_F8AC0(a1) )
  {
    *(_DWORD *)(a1 + 48) = v25;
LABEL_17:
    sub_10BFDC(v14, rsa_multip_info_free_ex);
    return 0;
  }
  if ( v25 )
    sub_10BFDC(v25, rsa_multip_info_free);
  *(_DWORD *)(a1 + 4) = 1;
  return 1;
}
