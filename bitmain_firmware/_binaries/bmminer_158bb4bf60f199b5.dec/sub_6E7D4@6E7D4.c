int __fastcall sub_6E7D4(void **a1, unsigned int a2, void **a3)
{
  _BOOL4 v5; // r3
  _DWORD *v6; // r3
  int v7; // r6
  int v8; // r0
  void ***v9; // r3
  int v10; // r2
  int v11; // r2
  char *v13; // r3
  char *v14; // r3

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_12;
  v5 = a3 == a1;
  if ( *a1 != (void *)1 )
    v5 = 1;
  if ( v5 || (unsigned int)a1[3] <= a2 )
  {
LABEL_12:
    v13 = (char *)a3[1];
    if ( v13 != (char *)-1 )
    {
      v14 = v13 - 1;
      a3[1] = v14;
      if ( !v14 )
        sub_6E5DC(a3);
    }
    return -1;
  }
  v6 = a1[4];
  v7 = 4 * a2;
  v8 = v6[a2];
  v9 = (void ***)&v6[a2];
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    if ( v10 != -1 )
    {
      v11 = v10 - 1;
      *(_DWORD *)(v8 + 4) = v11;
      if ( !v11 )
      {
        sub_6E5DC((void **)v8);
        v9 = (void ***)((char *)a1[4] + v7);
      }
    }
  }
  *v9 = a3;
  return 0;
}
