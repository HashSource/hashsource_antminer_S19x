int __fastcall sub_12D6C4(_DWORD *a1, _DWORD *a2, char *a3, int a4)
{
  int result; // r0

  result = sub_12D4B0(a1, a2, a3, a4);
  if ( result == 1 )
    a2[1] = a2[1] & 0x100 | 2;
  return result;
}
