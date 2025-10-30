int __fastcall sub_1A1660(int result, char a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r5

  v2 = *(_DWORD *)(result + 4);
  v3 = (_DWORD *)result;
  v4 = v2 + 1;
  if ( *(_DWORD *)(result + 8) < v2 + 1 )
  {
    result = ((int (*)(void))loc_1A15D8)();
    v2 = v3[1];
  }
  *(_BYTE *)(*v3 + v2) = a2;
  v3[1] = v4;
  return result;
}
