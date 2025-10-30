int __fastcall sub_1707CC(int a1, __int64 a2, _QWORD *a3)
{
  int v4; // r1
  int v7; // r0
  _QWORD *v8; // r1
  int v9; // r3
  __int64 v10; // t1
  __int64 v11; // r2

  v4 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v4 != 5 )
  {
    *a3 = a2;
    return 1;
  }
  v7 = *(__int16 *)(v4 + 4);
  if ( v7 <= 0 )
    return 0;
  v8 = *(_QWORD **)(v4 + 24);
  if ( a2 != *v8 )
  {
    v9 = 0;
    while ( ++v9 != v7 )
    {
      v10 = v8[3];
      v8 += 3;
      if ( v10 == a2 )
      {
        v11 = v9;
        goto LABEL_11;
      }
    }
    return 0;
  }
  v11 = 0;
LABEL_11:
  *a3 = v11;
  return 1;
}
