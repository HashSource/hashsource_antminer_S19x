int __fastcall sub_3C850(int a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r12
  char *v5; // r1
  int result; // r0

  v4 = *(_BYTE **)(a1 + 4);
  if ( a4 )
  {
    LOBYTE(a4) = 0;
    LOWORD(v5) = -2312;
  }
  else
  {
    LOWORD(v5) = -2292;
  }
  HIWORD(v5) = 7;
  *(_DWORD *)(a1 + 8) = v4;
  *v4 = a4;
  *(_BYTE *)(a1 + 13) = a4;
  result = sub_3C770((unsigned int *)a1, v5);
  byte_1AEB6C = 1;
  byte_1AEB6E = 1;
  return result;
}
