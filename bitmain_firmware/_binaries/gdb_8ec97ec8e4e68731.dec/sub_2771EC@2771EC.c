int *__fastcall sub_2771EC(_DWORD *a1, int a2, int a3, int a4)
{
  int *v4; // r6
  int *v5; // r4
  int v10; // r5
  int *v11; // r12
  int v12; // r3

  v4 = *(int **)(*a1 + 4 * a2);
  if ( v4 )
  {
    v5 = (int *)*v4;
    v10 = *(_DWORD *)(*v4 + 32);
    while ( 1 )
    {
      if ( v10 == a4 )
      {
        v12 = *(_DWORD *)(a3 + 4);
        if ( v12 == v5[2] && (!v12 || !memcmp(*(const void **)a3, (const void *)v5[1], *(_DWORD *)(a3 + 4))) )
          break;
      }
      v11 = (int *)*v5;
      v4 = v5;
      v5 = (int *)*v5;
      if ( !v5 )
        return v11;
      v10 = v11[8];
      if ( a2 != (unsigned __int64)sub_347674(v10, a1[1]) >> 32 )
        return 0;
    }
  }
  return v4;
}
