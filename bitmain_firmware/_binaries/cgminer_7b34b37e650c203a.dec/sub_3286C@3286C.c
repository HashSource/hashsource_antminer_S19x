int sub_3286C()
{
  int v0; // r3

  v0 = ++dword_69074;
  if ( dword_69074 > dword_733CC )
  {
    sub_324B8();
    v0 = dword_69074;
  }
  return *(_DWORD *)(dword_744C8 + 4 * (v0 + 0x3FFFFFFF));
}
