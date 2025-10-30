_DWORD *__fastcall sub_177FD4(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  char *v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r7
  _QWORD *v12; // r5
  __int64 v13; // r8
  int v14; // r3
  __int64 v15; // r10
  int v16; // r6
  int v17; // r2
  int v18; // r2
  unsigned int v19; // r3

  result = sub_177F5C(a1, a2, a3);
  v8 = *(char **)(a1 + 24);
  v9 = *v8;
  if ( v9 == 4 )
  {
    v19 = *(_DWORD *)(a3 + 20);
    if ( *(_DWORD *)(a1 + 20) < v19 )
      *(_DWORD *)(a1 + 20) = v19;
  }
  else if ( v9 == 3 )
  {
    v10 = *((__int16 *)v8 + 2);
    v11 = *(_DWORD *)(a1 + 20) + *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a1 + 20) = v11;
    if ( v10 > 1 )
    {
      v12 = result;
      v13 = *((_QWORD *)result - 3);
      v14 = *(_DWORD *)(*(result - 3) + 20);
      *((_BYTE *)result + 8) &= 0xF1u;
      v15 = v13 + (unsigned int)(8 * v14);
      *(_QWORD *)result = v15;
      if ( a4 )
      {
        v16 = 8 * a4;
        result = (_DWORD *)sub_347ED4(v15, HIDWORD(v15), v16, v16 >> 31);
        if ( v17 )
        {
          v18 = v16 - v17;
          *v12 = v15 + v18;
          *(_DWORD *)(a1 + 20) = v11 + v18 / 8;
        }
      }
    }
  }
  return result;
}
