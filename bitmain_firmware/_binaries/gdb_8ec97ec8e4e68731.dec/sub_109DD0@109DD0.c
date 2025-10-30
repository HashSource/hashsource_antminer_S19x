_DWORD *__fastcall sub_109DD0(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  _DWORD *v4; // r3
  bool v5; // zf
  _DWORD *v6; // r3
  bool v7; // zf
  _DWORD *result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v12; // r12
  _DWORD *v13; // r4
  _DWORD *v14; // r3
  bool v15; // zf

  v2 = (_DWORD *)a1[1];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)v2[1];
      sub_326E94(*a1, v2[2]);
      v4 = (_DWORD *)a1[2];
      v5 = v4 == 0;
      if ( v4 )
      {
        v2[1] = v4;
        v4 = (_DWORD *)a1[2];
      }
      else
      {
        v2[1] = v2;
        *v2 = v2;
      }
      if ( v5 )
        a1[2] = v2;
      else
        v4 = (_DWORD *)*v4;
      if ( !v5 )
      {
        *v2 = v4;
        v4[1] = v2;
        *(_DWORD *)a1[2] = v2;
      }
      v2 = v3;
      v6 = (_DWORD *)a1[1];
      v7 = v6 == 0;
      if ( v6 )
        v7 = v3 == v6;
    }
    while ( !v7 );
  }
  result = (_DWORD *)dword_475848;
  v9 = dword_47584C;
  v10 = dword_475850;
  v11 = a1[4];
  v12 = dword_46D43C;
  a1[1] = 0;
  a1[3] = 0;
  a1[5] = result;
  a1[6] = v9;
  a1[7] = v10;
  if ( v11 != v12 )
  {
    result = (_DWORD *)a1[2];
    if ( result )
    {
      do
      {
        v13 = (_DWORD *)result[1];
        free(result);
        v14 = (_DWORD *)a1[2];
        result = v13;
        v15 = v14 == 0;
        if ( v14 )
          v15 = v13 == v14;
      }
      while ( !v15 );
      v12 = dword_46D43C;
    }
    a1[4] = v12;
    a1[2] = 0;
  }
  return result;
}
