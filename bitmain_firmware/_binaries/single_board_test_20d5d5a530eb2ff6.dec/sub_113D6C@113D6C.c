int **__fastcall sub_113D6C(int **result, int a2, signed int a3, int a4)
{
  int *v5; // r6
  int *v6; // r5
  _BOOL4 v9; // r10
  int v10; // r0
  unsigned int v11; // r4
  int v12; // r7
  int v13; // r0
  int v14; // r5
  signed int v15; // r4
  int v16; // r5
  int v17; // r0

  if ( !result )
    return result;
  v5 = *result;
  v6 = (int *)result;
  v9 = a4 == 0;
  v10 = sub_10C010((int)*result);
  v11 = v10;
  v6[1] = 1;
  if ( !((a3 > v10) | ((unsigned int)a3 >> 31)) )
  {
    if ( a4 != -1 )
    {
      if ( a3 < v10 )
      {
        v11 = a3;
        v12 = *(_DWORD *)(sub_10C01C(v5, a3) + 8);
        v13 = sub_115C0C(a2);
        v14 = v13;
        if ( !v13 )
        {
LABEL_6:
          X509_NAME_ENTRY_free(v14);
          return 0;
        }
        goto LABEL_11;
      }
      v11 = a3;
      goto LABEL_8;
    }
    v11 = a3;
LABEL_15:
    if ( v11 )
    {
      v12 = *(_DWORD *)(sub_10C01C(v5, v11 - 1) + 8);
    }
    else
    {
      v9 = 1;
      v12 = 0;
    }
    goto LABEL_10;
  }
  if ( a4 == -1 )
    goto LABEL_15;
LABEL_8:
  v12 = v11;
  if ( v11 )
    v12 = *(_DWORD *)(sub_10C01C(v5, v11 - 1) + 8) + 1;
LABEL_10:
  v13 = sub_115C0C(a2);
  v14 = v13;
  if ( !v13 )
    goto LABEL_6;
LABEL_11:
  *(_DWORD *)(v13 + 8) = v12;
  if ( sub_10BA90(v5, v13, v11) )
  {
    if ( v9 )
    {
      v15 = v11 + 1;
      v16 = sub_10C010((int)v5);
      if ( v16 > v15 )
      {
        do
        {
          v17 = sub_10C01C(v5, v15++);
          ++*(_DWORD *)(v17 + 8);
        }
        while ( v16 != v15 );
      }
    }
    return (int **)1;
  }
  else
  {
    sub_D0048(11, 113, 65, (int)"crypto/x509/x509name.c", 227);
    X509_NAME_ENTRY_free(v14);
    return 0;
  }
}
