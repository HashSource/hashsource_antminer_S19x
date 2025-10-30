_DWORD *__fastcall sub_104DD8(int a1)
{
  int v1; // r1
  _DWORD *result; // r0

  v1 = dword_489438;
  result = (_DWORD *)dword_489444;
  if ( dword_489438 == dword_48966C )
  {
    dword_48966C = 2 * dword_489438;
    result = sub_93050((void *)dword_489444, 8 * dword_489438);
    v1 = dword_489438;
    dword_489444 = (int)result;
  }
  dword_489438 = v1 + 1;
  result[v1] = a1;
  return result;
}
