int __fastcall sub_116AB4(int a1, char **a2, int a3, int a4)
{
  int result; // r0
  int v6; // r4
  int **v7; // r6
  int *v8; // r0

  if ( a2 )
  {
    result = (int)sub_EB288(a2);
    v6 = result;
    if ( !result )
      return result;
  }
  else
  {
    v6 = 0;
  }
  if ( a1 )
  {
    v7 = *(int ***)(a1 + 196);
    if ( v7 || (v7 = (int **)sub_116960(), (*(_DWORD *)(a1 + 196) = v7) != 0) )
    {
      v8 = *v7;
      if ( *v7 || (v8 = (int *)sub_10BFCC(), (*v7 = v8) != 0) )
      {
        if ( !v6 || sub_10BD3C(v8, v6) )
          return 1;
      }
    }
  }
  ASN1_OBJECT_free(v6, a2, a3, a4);
  return 0;
}
