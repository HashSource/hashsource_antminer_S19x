_DWORD *__fastcall sub_1CE06C(
        _DWORD *result,
        int (__fastcall *a2)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD),
        int a3)
{
  _DWORD *v3; // r4
  _DWORD *v6; // r7
  int v7; // [sp+18h] [bp-Ch]

  v3 = (_DWORD *)result[2];
  v7 = *result;
  if ( v3 )
  {
    v6 = result;
    do
    {
      result = (_DWORD *)a2(a3, 2, v7, v3[2], v3[3], v3[4], v3[5], v3[6]);
      v3 = (_DWORD *)v3[1];
    }
    while ( (_DWORD *)v6[2] != v3 );
  }
  return result;
}
