int __fastcall sub_1A72F4(_DWORD *a1, _DWORD **a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r1
  int result; // r0

  v2 = (_DWORD *)*a1;
  v3 = *a2;
  result = *(_DWORD *)*a1 - *v3;
  if ( !result )
    return v3[1] - v2[1];
  return result;
}
