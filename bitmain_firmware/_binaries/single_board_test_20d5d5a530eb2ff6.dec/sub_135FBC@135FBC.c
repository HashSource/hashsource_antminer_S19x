_DWORD *__fastcall sub_135FBC(int a1, _DWORD *a2)
{
  void *v4; // r0
  _DWORD *result; // r0
  int v6; // r5
  int v7; // r4

  v4 = sub_B7820();
  result = sub_B655C((int)v4);
  v6 = (int)result;
  if ( result )
  {
    sub_B6ECC((int)result, 106, 0, a1);
    v7 = sub_135D44(v6, a2);
    BIO_vfree_0(v6);
    return (_DWORD *)v7;
  }
  return result;
}
