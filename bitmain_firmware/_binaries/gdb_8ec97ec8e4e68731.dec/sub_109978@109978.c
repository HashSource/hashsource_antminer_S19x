int __fastcall sub_109978(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r4
  int v5; // r1
  _DWORD *v6; // r3
  _DWORD *v7; // r3
  bool v8; // zf

  result = sub_326F3C(*a1, a2 & -a1[4]);
  if ( result )
  {
    v4 = *(_DWORD **)(result + 4);
    v5 = v4[2];
    ++v4[3];
    result = sub_326E94(*a1, v5);
    v6 = (_DWORD *)v4[1];
    if ( v4 == v6 )
    {
      a1[1] = 0;
    }
    else
    {
      *v6 = *v4;
      *(_DWORD *)(*v4 + 4) = v4[1];
      if ( v4 == (_DWORD *)a1[1] )
        a1[1] = v4[1];
    }
    v7 = (_DWORD *)a1[2];
    v8 = v7 == 0;
    if ( v7 )
    {
      v4[1] = v7;
      v7 = (_DWORD *)a1[2];
    }
    else
    {
      v4[1] = v4;
      *v4 = v4;
    }
    if ( v8 )
      a1[2] = v4;
    else
      v7 = (_DWORD *)*v7;
    if ( !v8 )
    {
      *v4 = v7;
      v7[1] = v4;
      *(_DWORD *)a1[2] = v4;
    }
    --a1[3];
  }
  return result;
}
