int *__fastcall sub_624AC(int a1, __int16 a2, const void *a3, size_t a4, int a5)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r10
  void *v11; // r5
  int *result; // r0
  void *v13; // r0
  void *v14; // r0
  _DWORD *v15; // r3

  v9 = sub_61F34(a1);
  v10 = v9;
  if ( v9 && v9[6] == a1 )
  {
    v13 = (void *)v9[3];
    if ( v13 )
    {
      memset(v13, 0, v10[8]);
      free((void *)v10[3]);
    }
    v14 = (void *)sub_63BA4(0, a4 + 1, 0, 0);
    v15 = (_DWORD *)v10[4];
    v10[3] = v14;
    *((_WORD *)v10 + 14) = a2;
    v10[8] = a4;
    if ( v15 != (_DWORD *)a5 )
    {
      sub_6177C(v15);
      v14 = (void *)v10[3];
      v10[4] = a5;
    }
    result = (int *)memcpy(v14, a3, a4);
    if ( a1 == cache_keyid )
      return sub_615D8();
  }
  else
  {
    v11 = (void *)sub_63BA4(0, a4 + 1, 0, 0);
    memcpy(v11, a3, a4);
    return (int *)sub_61C70(a1, 0, a2, 0, a4, (int)v11, a5);
  }
  return result;
}
