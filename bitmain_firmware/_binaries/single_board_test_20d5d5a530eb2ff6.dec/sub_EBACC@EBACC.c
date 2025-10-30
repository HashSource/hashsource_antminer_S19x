int __fastcall sub_EBACC(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r4
  int v6; // r0

  result = sub_11D910();
  v5 = (_DWORD *)result;
  if ( result )
  {
    if ( sub_115E74(result + 4, a2) )
    {
      v6 = *(_DWORD *)(a1 + 4);
      *v5 = 4;
      GENERAL_NAME_free(v6);
      *(_DWORD *)(a1 + 4) = v5;
      return 1;
    }
    else
    {
      GENERAL_NAME_free(v5);
      return 0;
    }
  }
  return result;
}
