void sub_1C547C()
{
  int v0; // r0
  char *v1; // r1
  bool v2; // zf
  char *v3; // r1

  v0 = dword_487CA8;
  v1 = *(char **)(dword_487CA8 + 4);
  if ( v1 == *(char **)(dword_487CA8 + 8) )
  {
    sub_96B5C((int *)dword_487CA8, v1, &dword_487CA4);
  }
  else
  {
    v2 = v1 == 0;
    v3 = v1 + 4;
    if ( !v2 )
      *((_DWORD *)v3 - 1) = dword_487CA4;
    *(_DWORD *)(v0 + 4) = v3;
  }
  dword_487CA4 = 0;
}
