int __fastcall sub_112BDC(int a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r7
  int v10; // r3

  v5 = a2;
  v6 = a4;
  if ( a3 )
  {
    v7 = a3;
    if ( !a2 )
      v5 = a3;
  }
  else
  {
    if ( !a2 )
    {
      if ( !a4 )
        return 1;
      if ( sub_16EC6C(a4) != -1 )
      {
        v10 = *(_DWORD *)(a1 + 16);
        goto LABEL_10;
      }
LABEL_25:
      v9 = 0;
      sub_D0048(11, 134, 120, (int)"crypto/x509/x509_vfy.c", 2237);
      return v9;
    }
    v7 = a2;
  }
  if ( sub_120294(v7) == -1 )
  {
    v9 = 0;
    sub_D0048(11, 134, 121, (int)"crypto/x509/x509_vfy.c", 2216);
    return v9;
  }
  v8 = sub_120238();
  v9 = *(_DWORD *)(v8 + 4);
  if ( v9 )
  {
    if ( v6 )
      goto LABEL_18;
  }
  else
  {
    if ( sub_120294(v5) == -1 )
    {
      sub_D0048(11, 134, 121, (int)"crypto/x509/x509_vfy.c", 2224);
      return v9;
    }
    v8 = sub_120238();
    if ( v6 )
      goto LABEL_18;
  }
  v6 = *(_DWORD *)(v8 + 4);
  if ( !v6 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)(v10 + 16) )
      return 1;
    goto LABEL_9;
  }
LABEL_18:
  if ( sub_16EC6C(v6) == -1 )
    goto LABEL_25;
  v10 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(v10 + 16) )
  {
LABEL_10:
    if ( !*(_DWORD *)(v10 + 20) )
      *(_DWORD *)(v10 + 20) = v6;
    return 1;
  }
LABEL_9:
  *(_DWORD *)(v10 + 16) = v7;
  if ( v6 )
    goto LABEL_10;
  return 1;
}
