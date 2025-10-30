int sub_DBB60()
{
  _DWORD *v0; // r4
  int result; // r0

  v0 = &unk_6E1954;
  do
  {
    sub_10BFDC(*v0, sub_DBB1C);
    *v0++ = 0;
  }
  while ( v0 != (_DWORD *)&unk_6E1994 );
  result = sub_10C574(dword_6E194C);
  dword_6E194C = 0;
  return result;
}
