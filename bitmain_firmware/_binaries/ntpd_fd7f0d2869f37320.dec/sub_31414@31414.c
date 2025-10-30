void *__fastcall sub_31414(void *result)
{
  int *v1; // r4
  void *v2; // r7
  int *v3; // r5
  int v4; // r3
  int v5; // r3

  v1 = (int *)dword_109334;
  if ( (_UNKNOWN *)dword_109334 != &mon_mru_list )
  {
    v2 = result;
    do
    {
      v3 = (int *)v1[2];
      if ( (void *)v1[3] == v2 )
      {
        v4 = v1[1];
        *(_DWORD *)(v4 + 8) = v3;
        *(_DWORD *)(v1[2] + 4) = v4;
        sub_30F28(v1);
        result = memset(v1, 0, 0x48u);
        v5 = dword_BBE9C;
        dword_BBE9C = (int)v1;
        *v1 = v5;
      }
      v1 = v3;
    }
    while ( v3 != (int *)&mon_mru_list );
  }
  return result;
}
