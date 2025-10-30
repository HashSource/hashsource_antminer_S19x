_DWORD *__fastcall sub_149B18(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r4
  int v10; // r5
  _DWORD *v11; // r12
  const void *v12; // r1
  int v13; // r12

  v4 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v4 )
  {
    v5 = (_DWORD *)*v4;
    v10 = *(_DWORD *)(*v4 + 20);
    while ( 1 )
    {
      if ( v10 == a4 )
      {
        v12 = (const void *)v5[1];
        v13 = *(_DWORD *)(a3 + 4) - *(_DWORD *)a3;
        if ( (v5[2] - (int)v12) >> 2 == v13 >> 2
          && (!v13 || !memcmp(*(const void **)a3, v12, *(_DWORD *)(a3 + 4) - *(_DWORD *)a3)) )
        {
          break;
        }
      }
      v11 = (_DWORD *)*v5;
      v4 = v5;
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        return v11;
      v10 = v11[5];
      if ( a2 != (unsigned __int64)sub_347674(v10, a1[1]) >> 32 )
        return 0;
    }
  }
  return v4;
}
