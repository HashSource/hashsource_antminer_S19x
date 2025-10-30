const char *__fastcall sub_2CB18(int a1, const char *a2, int a3)
{
  int v5; // r0
  int v6; // r4
  const char *result; // r0
  const char **v8; // r3
  int *v9; // r4
  int v10; // r0
  const char *v11; // r0
  const char **v12; // r5

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = sub_64C8C(a1);
  v5 = sub_64C8C(a2);
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  v6 = dword_BA928;
  *(_BYTE *)(a3 + 20) = 2;
  *(_BYTE *)(a3 + 21) = 1;
  *(_DWORD *)(a3 + 8) = v5;
  if ( v6 )
  {
    result = *(const char **)v6;
    if ( *(const char **)v6 != a2 )
    {
      do
      {
        result = (const char *)strcmp(result, a2);
        if ( !result )
          break;
        v8 = *(const char ***)(v6 + 8);
        if ( !v8 )
        {
          v9 = (int *)(v6 + 8);
          goto LABEL_9;
        }
        result = *v8;
        v6 = *(_DWORD *)(v6 + 8);
      }
      while ( *v8 != a2 );
    }
    *(_DWORD *)(v6 + 4) = a3;
  }
  else
  {
    v9 = &dword_BA928;
LABEL_9:
    v10 = sub_64B04(0, 12, 0, 0);
    *v9 = v10;
    *(_DWORD *)(v10 + 8) = 0;
    v11 = a2;
    v12 = (const char **)*v9;
    result = (const char *)sub_64C8C(v11);
    *v12 = result;
    *(_DWORD *)(*v9 + 4) = a3;
  }
  return result;
}
