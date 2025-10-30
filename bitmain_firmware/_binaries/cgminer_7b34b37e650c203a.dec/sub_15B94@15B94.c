int __fastcall sub_15B94(int a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r12
  char *v5; // r1
  int result; // r0

  v4 = *(_BYTE **)(a1 + 4);
  if ( a4 )
  {
    LOBYTE(a4) = 0;
    LOWORD(v5) = -23488;
  }
  else
  {
    LOWORD(v5) = -23472;
  }
  HIWORD(v5) = 4;
  *(_DWORD *)(a1 + 8) = v4;
  *v4 = a4;
  *(_BYTE *)(a1 + 13) = a4;
  result = sub_15B00((unsigned int *)a1, v5);
  byte_68A7C = 1;
  byte_68A7D = 1;
  return result;
}
