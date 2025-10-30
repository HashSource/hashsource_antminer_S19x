_DWORD *__fastcall sub_15996C(int a1, _DWORD *a2)
{
  int *v2; // r5
  _DWORD *result; // r0
  int v5; // r4

  v2 = *(int **)(a1 + 20);
  if ( *v2 )
  {
    result = (_DWORD *)EC_KEY_new();
    v5 = (int)result;
    if ( result )
    {
      if ( !sub_C59BC(result, *v2) || (result = (_DWORD *)sub_D9F44(a2, 408, v5)) == 0 )
      {
        sub_C5410(v5);
        return 0;
      }
    }
  }
  else
  {
    sub_D0048(16, 219, 139, (int)"crypto/ec/ec_pmeth.c", 401);
    return 0;
  }
  return result;
}
