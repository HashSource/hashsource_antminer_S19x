bool __fastcall sub_F11B4(int a1, int a2)
{
  char *v4; // r0
  int v5; // r3
  int v6; // r4
  int v7; // r9
  int v8; // r5
  int v9; // r1
  int v10; // r2
  char *v11; // r6
  int *v12; // r0
  bool v13; // cc
  int v14; // r1
  char ***v15; // r8
  int v16; // r0
  char **v17; // r0
  char **v18; // r3
  int v19; // r4

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)22 || v4 == (char *)24 )
  {
    v5 = *(_DWORD *)(a1 + 20);
    v6 = 0;
    v7 = *(_DWORD *)(v5 + 16);
    v8 = *(_DWORD *)(v5 + 4);
    v11 = sub_EAC84(**(_DWORD **)(a2 + 8));
    while ( 1 )
    {
      v13 = v6 < sub_10C010(v8, v9, v10);
      v14 = v6++;
      if ( !v13 )
        break;
      v12 = (int *)sub_10C01C(v8, v14);
      if ( v11 == sub_EAC84(*v12) )
        return sub_10BD3C(v7, a2) != 0;
    }
    v15 = (char ***)sub_B2888();
    if ( v15 )
    {
      v16 = sub_B2408();
      v15[1] = (char **)v16;
      if ( v16 )
      {
        v17 = sub_EAA20((unsigned int)v11);
        v18 = v15[1];
        *v15 = v17;
        *v18 = (char *)5;
        v19 = sub_10BD3C(v8, v15);
        if ( v19 )
          return sub_10BD3C(v7, a2) != 0;
        X509_ALGOR_free((int)v15);
        return v19;
      }
    }
    X509_ALGOR_free((int)v15);
    sub_D0048(33, 103, 65, (int)"crypto/pkcs7/pk7_lib.c", 222);
    return 0;
  }
  else
  {
    sub_D0048(33, 103, 113, (int)"crypto/pkcs7/pk7_lib.c", 203);
    return 0;
  }
}
