int *__fastcall sub_149BCC(_DWORD *a1, int a2, const char **a3, int a4)
{
  int *v4; // r6
  int *v5; // r4
  int v10; // r5
  int *v11; // r12

  v4 = *(int **)(*a1 + 4 * a2);
  if ( v4 )
  {
    v5 = (int *)*v4;
    v10 = *(_DWORD *)(*v4 + 12);
    while ( v10 != a4 || strcmp(*a3, (const char *)v5[1]) )
    {
      v11 = (int *)*v5;
      v4 = v5;
      v5 = (int *)*v5;
      if ( !v5 )
        return v11;
      v10 = v11[3];
      if ( a2 != (unsigned __int64)sub_347674(v10, a1[1]) >> 32 )
        return 0;
    }
  }
  return v4;
}
