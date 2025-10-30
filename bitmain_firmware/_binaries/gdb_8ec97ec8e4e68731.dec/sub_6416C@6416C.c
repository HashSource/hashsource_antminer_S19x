int __fastcall sub_6416C(int a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v4; // r0

  if ( a3 > 1 )
    sub_946E0("Invalid MI command");
  v4 = (_DWORD *)sub_242FDC(a1);
  return sub_24164C(*v4, *a2, -1);
}
