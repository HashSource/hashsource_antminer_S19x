void *__fastcall sub_30F28(void *result)
{
  int *v1; // r4
  void *v2; // r7
  int *v3; // r5
  int v4; // r3
  int v5; // r3

  v1 = (int *)dword_108314;
  if ( (_UNKNOWN *)dword_108314 != &mon_mru_list )
  {
    v2 = result;
    do
    {
      while ( 1 )
      {
        v3 = (int *)v1[2];
        if ( (void *)v1[3] == v2 )
          break;
        v1 = (int *)v1[2];
        if ( v3 == (int *)&mon_mru_list )
          return result;
      }
      v4 = v1[1];
      *(_DWORD *)(v4 + 8) = v3;
      *(_DWORD *)(v1[2] + 4) = v4;
      sub_30B44(v1);
      result = memset(v1 + 1, 0, 0x44u);
      v5 = dword_BAE94;
      dword_BAE94 = (int)v1;
      *v1 = v5;
      v1 = v3;
    }
    while ( v3 != (int *)&mon_mru_list );
  }
  return result;
}
