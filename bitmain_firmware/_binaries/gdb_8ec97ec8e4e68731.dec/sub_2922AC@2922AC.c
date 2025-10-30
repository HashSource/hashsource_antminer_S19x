int __fastcall sub_2922AC(int a1)
{
  int v2; // r8
  int v3; // r7
  int result; // r0

  if ( a1 < 0 )
    return sub_29230C(-a1);
  v2 = dword_4900D4;
  v3 = dword_4900D8;
  sub_295508();
  dword_4900D4 = dword_4900D8;
  sub_29551C(a1, 0);
  result = sub_2919E0(0);
  dword_4900D4 = v2;
  dword_4900D8 = v3;
  return result;
}
