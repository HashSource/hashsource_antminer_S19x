int __fastcall sub_4140C(int a1)
{
  int v2; // r5
  int v3; // r0
  int result; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = ps_getpid_0(&dword_4878EC);
  v2 = v5;
  v3 = sub_324138(dword_472134, sub_418E0, &v5);
  if ( sub_4B204(v3) )
    result = ((int (*)(void))loc_4B3A4)();
  else
    result = (*(int (__fastcall **)(int))(dword_472024 + 244))(a1);
  if ( off_47217C )
    return ((int (__fastcall *)(int))off_47217C)(v2);
  return result;
}
