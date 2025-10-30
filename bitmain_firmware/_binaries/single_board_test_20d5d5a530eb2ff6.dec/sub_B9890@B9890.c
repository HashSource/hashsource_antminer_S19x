int __fastcall sub_B9890(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  int v5; // r8
  int v6; // r4
  int v7; // r5
  _DWORD *v8; // r9
  _DWORD *v9; // r6
  _DWORD *v10; // r7
  int result; // r0
  int v12; // t1

  v5 = a3;
  v6 = a5;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  if ( a3 < a5 )
  {
    v5 = a5;
    v8 = a4;
    v6 = a3;
    v9 = a2;
  }
  v10 = (_DWORD *)(a1 + 4 * v5);
  if ( v6 <= 0 )
    return sub_12F8E8(a1, v8, v5, 0);
  result = sub_12F8E8(a1, v8, v5, *v9);
  for ( *(_DWORD *)(v7 + 4 * v5) = result; v6 != 1; v10 += 4 )
  {
    v10[1] = sub_12F7C0(v7 + 4, v8, v5, v9[1]);
    result = v7 + 8;
    if ( v6 == 2 )
      break;
    v10[2] = sub_12F7C0(result, v8, v5, v9[2]);
    result = v7 + 12;
    v7 += 16;
    if ( v6 == 3 )
      break;
    v6 -= 4;
    v10[3] = sub_12F7C0(result, v8, v5, v9[3]);
    result = v7;
    if ( !v6 )
      break;
    v12 = v9[4];
    v9 += 4;
    result = sub_12F7C0(v7, v8, v5, v12);
    v10[4] = result;
  }
  return result;
}
