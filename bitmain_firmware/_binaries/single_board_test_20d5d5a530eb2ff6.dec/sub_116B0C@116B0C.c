int __fastcall sub_116B0C(int a1, char **a2)
{
  char **v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r6
  int *v9; // r0

  v3 = sub_EB288(a2);
  if ( v3 )
  {
    v7 = (int)v3;
    if ( a1 )
    {
      v8 = *(_DWORD *)(a1 + 196);
      if ( v8 || (v8 = sub_116960(), (*(_DWORD *)(a1 + 196) = v8) != 0) )
      {
        v9 = *(int **)(v8 + 4);
        if ( v9 )
          return sub_10BD3C(v9, v7);
        v9 = (int *)sub_10BFCC();
        *(_DWORD *)(v8 + 4) = v9;
        if ( v9 )
          return sub_10BD3C(v9, v7);
      }
    }
    ASN1_OBJECT_free(v7, v4, v5, v6);
  }
  return 0;
}
