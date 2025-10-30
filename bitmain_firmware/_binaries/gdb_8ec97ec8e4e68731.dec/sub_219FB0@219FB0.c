int sub_219FB0()
{
  int result; // r0
  _DWORD *v1; // r6
  _DWORD *v2; // r1
  int v3; // r0

  result = sub_1CD14C(dword_487D2C, (_DWORD *)dword_489704);
  if ( !result )
  {
    v1 = sub_93094(1u, 8u);
    v2 = (_DWORD *)dword_489704;
    v3 = dword_487D2C;
    v1[1] = 0;
    sub_1CD144(v3, v2, (int)v1);
    return (int)v1;
  }
  return result;
}
