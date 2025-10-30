_DWORD *__fastcall sub_10F3EC(int *a1, int a2, int a3)
{
  _DWORD *result; // r0
  _DWORD *v7; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r5

  result = sub_10F27C();
  v7 = result;
  if ( result )
  {
    v10 = sub_10F350(a1, a2, a3, result);
    result = v7;
    if ( !v10 )
    {
      X509_OBJECT_free(v7, v8, v9);
      return 0;
    }
  }
  return result;
}
