void *__fastcall sub_210C58(size_t *a1)
{
  char *v2; // r0
  size_t v3; // r1
  void *v4; // r5
  char *v5; // r2
  char *v6; // r2
  char *v7; // r3
  _DWORD *v8; // r0

  v2 = (char *)sub_93028(4 * (*a1 + 1));
  v3 = *a1;
  v4 = v2;
  if ( *a1 )
  {
    v6 = &v2[4 * v3];
    v7 = v2;
    v8 = a1 + 1;
    do
    {
      *(_DWORD *)v7 = v8;
      v7 += 4;
      v8 += 3;
    }
    while ( v7 != v6 );
    v5 = v7;
  }
  else
  {
    v5 = v2;
  }
  *(_DWORD *)v5 = 0;
  qsort(v4, v3, 4u, (__compar_fn_t)sub_211764);
  return v4;
}
