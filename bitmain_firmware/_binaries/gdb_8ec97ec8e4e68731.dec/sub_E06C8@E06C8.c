int __fastcall sub_E06C8(int a1, int a2, _DWORD *a3, int a4)
{
  int result; // r0

  *a3 = 1;
  a3[1] = 0;
  result = sub_273FA0(a4, "size");
  if ( result )
    a3[1] = **(_DWORD **)(result + 4);
  return result;
}
