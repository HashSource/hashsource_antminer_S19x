const char *__fastcall sub_2C7BC(int a1, const char *a2, int a3)
{
  int v5; // r4
  const char *result; // r0
  const char **v7; // r3
  int *v8; // r4
  int v9; // r3
  const char *v10; // r0
  const char **v11; // r5
  int v12; // r3

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = sub_63D08(a1);
  *(_DWORD *)(a3 + 8) = sub_63D08(a2);
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  v5 = dword_B9928;
  *(_WORD *)(a3 + 20) = 258;
  if ( v5 )
  {
    result = *(const char **)v5;
    if ( a2 != *(const char **)v5 )
    {
      do
      {
        result = (const char *)strcmp(result, a2);
        if ( !result )
          break;
        v7 = *(const char ***)(v5 + 8);
        if ( !v7 )
        {
          v8 = (int *)(v5 + 8);
          goto LABEL_9;
        }
        result = *v7;
        v5 = *(_DWORD *)(v5 + 8);
      }
      while ( *v7 != a2 );
    }
    *(_DWORD *)(v5 + 4) = a3;
  }
  else
  {
    v8 = &dword_B9928;
LABEL_9:
    v9 = sub_63BA4(0, 12, 0, 0);
    *v8 = v9;
    v10 = a2;
    *(_DWORD *)(v9 + 8) = 0;
    v11 = (const char **)*v8;
    result = (const char *)sub_63D08(v10);
    v12 = *v8;
    *v11 = result;
    *(_DWORD *)(v12 + 4) = a3;
  }
  return result;
}
