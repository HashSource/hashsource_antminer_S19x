char *sub_283468()
{
  char *v0; // r6
  size_t v1; // r1
  size_t v2; // r4
  signed int v3; // r7
  int v4; // r5
  int v5; // r3
  int v6; // r3

  if ( !dword_48ABC4 )
    sub_2833E8();
  v0 = *(char **)dword_4900E0;
  if ( *(_DWORD *)dword_4900E0 )
  {
    v2 = 0;
    v3 = 0;
    v0 = 0;
    v4 = 0;
    do
    {
      if ( (int)++v2 >= v3 )
      {
        v3 += 20;
        v0 = (char *)sub_93050(v0, 4 * v3);
      }
      v5 = dword_4900E0;
      v1 = v2;
      *(_DWORD *)&v0[v4] = **(_DWORD **)(dword_4900E0 + v4);
      v4 += 4;
      v6 = *(_DWORD *)(v5 + v4);
      *(_DWORD *)&v0[4 * v2] = 0;
    }
    while ( v6 );
  }
  else
  {
    v1 = 0;
  }
  qsort(v0, v1, 4u, (__compar_fn_t)sub_29160C);
  return v0;
}
