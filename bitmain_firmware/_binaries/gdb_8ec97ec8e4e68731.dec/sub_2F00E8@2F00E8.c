_DWORD *sub_2F00E8()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v3; // r0
  void *v5; // r0
  int v6; // r4

  v0 = sub_2AB368(44);
  v1 = v0;
  if ( !v0 )
    return v1;
  v2 = sub_2AAA0C((int)v0, (int)sub_2F008C, 24);
  if ( v2 )
  {
    v1[8] = 64;
    v1[9] = 0;
    v1[7] = 1;
    v3 = sub_2AB368(256);
    v1[10] = v3;
    v2 = (int)v3;
    if ( v3 )
    {
      *v3 = 0;
      return v1;
    }
  }
  v5 = v1;
  v6 = v2;
  free(v5);
  return (_DWORD *)v6;
}
