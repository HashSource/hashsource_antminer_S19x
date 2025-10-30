_DWORD *sub_E5FA0()
{
  _DWORD *result; // r0
  int v1; // r2
  int v2; // r1
  bool v3; // zf
  int v4; // r3
  __int64 v5; // r0

  result = sub_93028(8u);
  v1 = dword_4788E0;
  v2 = dword_47896C;
  dword_47896C = (int)result;
  v3 = dword_4788E0 == 0;
  *result = v2;
  if ( v3 || (v4 = *(_DWORD *)(v1 + 4)) == 0 )
  {
    v5 = sub_94700((int)"buildsym.c", 876, "failed internal consistency check");
    return (_DWORD *)sub_E5FF8(v5, HIDWORD(v5));
  }
  else
  {
    result[1] = v4;
  }
  return result;
}
