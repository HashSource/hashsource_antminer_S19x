_DWORD *sub_2348E4()
{
  int v0; // r3
  _DWORD *result; // r0

  v0 = dword_46DCCC;
  if ( dword_46DCD0 != dword_46DCCC )
  {
    result = sub_234884();
    v0 = dword_46DCCC;
  }
  dword_46DCD0 = v0;
  return result;
}
