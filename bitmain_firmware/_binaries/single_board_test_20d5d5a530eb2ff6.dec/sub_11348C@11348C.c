int __fastcall sub_11348C(int a1, _DWORD *a2)
{
  void **v4; // r0
  int v5; // r4
  char **v6; // r0
  char **v7; // r0
  char **v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  bool v12; // cc
  unsigned int v13; // r1

  if ( !a1 )
    return 0;
  sub_10BFDC(*(_DWORD *)(a1 + 32), (void (__fastcall *)(int))ASN1_OBJECT_free);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    return 1;
  }
  v4 = sub_10BFCC();
  *(_DWORD *)(a1 + 32) = v4;
  if ( !v4 )
    return 0;
  v5 = 0;
  do
  {
    v12 = v5 < sub_10C010((int)a2);
    v13 = v5++;
    if ( !v12 )
    {
      *(_DWORD *)(a1 + 12) |= 0x80u;
      return 1;
    }
    v6 = (char **)sub_10C01C(a2, v13);
    v7 = sub_EB288(v6);
    v8 = v7;
    if ( !v7 )
      return 0;
  }
  while ( sub_10BD3C(*(int **)(a1 + 32), (int)v7) );
  ASN1_OBJECT_free(v8, v9, v10, v11);
  return 0;
}
