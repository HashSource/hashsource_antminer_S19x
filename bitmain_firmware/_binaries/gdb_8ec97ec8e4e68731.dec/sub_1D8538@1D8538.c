int __fastcall sub_1D8538(int a1, int a2, int a3, int a4)
{
  int result; // r0
  _DWORD *v5; // r3
  bool v6; // zf

  result = (int)&off_46DAB8;
  v5 = (_DWORD *)off_46DAB8[1];
  v6 = v5 == 0;
  if ( v5 )
    result = 1;
  else
    LOWORD(v5) = 31052;
  if ( v6 )
  {
    HIWORD(v5) = 72;
    return *v5 == 1;
  }
  return result;
}
