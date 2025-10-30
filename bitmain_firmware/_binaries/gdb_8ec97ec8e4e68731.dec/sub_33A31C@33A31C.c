int __fastcall sub_33A31C(int a1, int a2, int a3, unsigned int a4)
{
  int result; // r0

  result = sub_33A848(a1, a2);
  if ( !result && a4 <= 3 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 20))(a2, a1, a3);
  return result;
}
