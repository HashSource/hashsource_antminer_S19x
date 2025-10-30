int __fastcall sub_112694(int a1)
{
  int v2; // r0
  int v3; // r6
  int *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r6
  int v14; // r8
  int *v15; // r1
  int v16; // r2
  int v17; // r9
  int v18; // r5
  int result; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r0
  int v25; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
  {
    sub_D0048(11, 127, 105, (int)"crypto/x509/x509_vfy.c", 260);
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    sub_D0048(11, 127, 66, (int)"crypto/x509/x509_vfy.c", 270);
LABEL_35:
    *(_DWORD *)(a1 + 96) = 69;
    return -1;
  }
  v3 = *(_DWORD *)(a1 + 128);
  if ( !sub_10FD18(v2) )
  {
    sub_D0048(11, 127, 68, (int)"crypto/x509/x509_vfy.c", 276);
    *(_DWORD *)(a1 + 96) = 1;
    return -1;
  }
  v4 = (int *)sub_10BFCC();
  *(_DWORD *)(a1 + 80) = v4;
  if ( !v4 || !sub_10BD3C(v4, *(_DWORD *)(a1 + 4)) )
  {
    X509_free(*(_DWORD *)(a1 + 4), v5, v6);
    sub_D0048(11, 127, 65, (int)"crypto/x509/x509_vfy.c", 288);
    *(_DWORD *)(a1 + 96) = 17;
    return -1;
  }
  v7 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 76) = 1;
  v8 = sub_10E89C(v7);
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 28);
  if ( v9 <= 0 )
    goto LABEL_22;
  if ( v8 )
  {
    v10 = sub_D9AE4(v8);
    if ( v9 >= 5 )
      v9 = 5;
    if ( v10 >= *(_DWORD *)&aP_1[4 * v9 - 4] )
      goto LABEL_22;
  }
  v20 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 92) = 0;
  if ( !v20 )
    v20 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
  *(_DWORD *)(a1 + 100) = v20;
  *(_DWORD *)(a1 + 96) = 66;
  result = (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1);
  if ( result )
  {
LABEL_22:
    if ( !v3 || sub_10C010(*(_DWORD *)(v3 + 4)) <= 0 )
      goto LABEL_23;
    v13 = *(_DWORD **)(a1 + 128);
    v14 = *(_DWORD *)(a1 + 4);
    X509_free(v13[4], v11, v12);
    v13[4] = 0;
    v13[3] = 0;
    v13[6] = -1;
    v15 = *(int **)(a1 + 128);
    v16 = *(_DWORD *)(a1 + 4);
    v13[7] = -1;
    v17 = sub_110700(*(_DWORD *)(a1 + 76), v15, v16, 0);
    if ( v17 )
    {
      sub_11191C(0, *(_DWORD **)(a1 + 80));
      if ( v17 <= 0 )
      {
        *(_DWORD *)(a1 + 92) = 0;
        *(_DWORD *)(a1 + 100) = v14;
        *(_DWORD *)(a1 + 96) = 17;
        return -1;
      }
      v18 = sub_10E930(0, v14, 0, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
      if ( v18 )
      {
        *(_DWORD *)(a1 + 92) = 0;
        v24 = v14;
        if ( !v14 )
          v24 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
        *(_DWORD *)(a1 + 100) = v24;
        *(_DWORD *)(a1 + 96) = v18;
        if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
          goto LABEL_18;
      }
      if ( (v13[8] & 1) == 0 && !sub_110C34(a1) )
        goto LABEL_18;
      *(_DWORD *)(a1 + 100) = v14;
      *(_DWORD *)(a1 + 92) = 0;
      result = (*(int (__fastcall **)(int, int))(a1 + 28))(1, a1);
LABEL_24:
      if ( result > 0 )
        return result;
      goto LABEL_19;
    }
    if ( (v13[5] & 5) != 0 || (int)v13[6] >= 0 )
    {
LABEL_23:
      result = sub_1119BC(a1);
      goto LABEL_24;
    }
    sub_11191C(0, *(_DWORD **)(a1 + 80));
    v21 = sub_10E930(0, v14, 0, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
    v22 = v21;
    if ( !v21 )
    {
      *(_DWORD *)(a1 + 92) = 0;
      v23 = v14;
      if ( v14 )
      {
LABEL_33:
        *(_DWORD *)(a1 + 100) = v23;
        *(_DWORD *)(a1 + 96) = 65;
        result = (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1);
        goto LABEL_24;
      }
LABEL_49:
      v23 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
      goto LABEL_33;
    }
    *(_DWORD *)(a1 + 92) = 0;
    if ( v14 )
    {
      *(_DWORD *)(a1 + 100) = v14;
      *(_DWORD *)(a1 + 96) = v21;
      if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      {
        *(_DWORD *)(a1 + 92) = 0;
        v23 = v14;
        goto LABEL_33;
      }
    }
    else
    {
      v25 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
      *(_DWORD *)(a1 + 96) = v22;
      *(_DWORD *)(a1 + 100) = v25;
      if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      {
        *(_DWORD *)(a1 + 92) = 0;
        goto LABEL_49;
      }
    }
LABEL_18:
    result = 0;
LABEL_19:
    if ( !*(_DWORD *)(a1 + 96) )
      *(_DWORD *)(a1 + 96) = 1;
  }
  return result;
}
