int sub_24353C()
{
  int v0; // r4
  int result; // r0

  v0 = dword_487668;
  do
    result = sub_152C64();
  while ( result >= 0 && !*(_DWORD *)(v0 + 68) );
  dword_487668 = v0;
  return result;
}
