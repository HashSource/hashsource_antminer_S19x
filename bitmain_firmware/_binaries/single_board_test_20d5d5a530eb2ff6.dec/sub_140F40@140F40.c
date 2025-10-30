_DWORD *__fastcall sub_140F40(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r6
  _DWORD *result; // r0
  int *v7; // r0
  int v8; // r7
  int v9; // r5

  v3 = *(_DWORD **)(a1 + 28);
  v4 = *(_DWORD *)(a1 + 20);
  if ( v3 )
  {
    result = (_DWORD *)sub_B876C();
    v3 = result;
    if ( !result )
      return result;
    sub_DB0D4(result, a1);
  }
  v7 = DSA_new();
  v8 = (int)v7;
  if ( v7 )
  {
    v9 = sub_13FF6C(v7, *(_DWORD *)v4, *(_DWORD *)(v4 + 4), *(_DWORD **)(v4 + 8), 0, 0, 0, 0, 0, v3);
    sub_B87A4((int)v3);
    if ( v9 )
    {
      sub_D9F44(a2, 116, v8);
      return (_DWORD *)v9;
    }
    else
    {
      sub_C09D0(v8);
      return 0;
    }
  }
  else
  {
    sub_B87A4((int)v3);
    return 0;
  }
}
