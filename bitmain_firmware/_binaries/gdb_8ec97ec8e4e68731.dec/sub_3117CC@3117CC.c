int __fastcall sub_3117CC(_DWORD *a1, unsigned __int8 **a2, unsigned int a3)
{
  int v4; // r8
  int v5; // r3
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r9
  int v10; // r3

  v4 = a1[19];
  v5 = a1[18] + 1;
  v6 = a1[20];
  a1[19] = 0;
  a1[18] = v5;
  a1[20] = 0;
  v7 = sub_31147C(a1, a2, a3);
  v8 = a1[19];
  v9 = v7;
  if ( v8 )
  {
    if ( *(_DWORD *)v8 )
    {
      free(*(void **)v8);
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)v8 = 0;
      v8 = a1[19];
    }
    free((void *)v8);
  }
  v10 = a1[18];
  a1[19] = v4;
  a1[20] = v6;
  a1[18] = v10 - 1;
  return v9;
}
