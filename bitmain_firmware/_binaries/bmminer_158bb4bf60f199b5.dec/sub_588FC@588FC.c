int sub_588FC()
{
  int v0; // r3

  v0 = ++dword_1AF140;
  if ( dword_1AF140 > dword_242F4C )
  {
    sub_58548();
    v0 = dword_1AF140;
  }
  return *(_DWORD *)(dword_244048 + 4 * (v0 + 0x3FFFFFFF));
}
