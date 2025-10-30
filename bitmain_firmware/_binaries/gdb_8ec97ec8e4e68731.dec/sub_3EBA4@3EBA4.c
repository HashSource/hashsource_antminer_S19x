int __fastcall sub_3EBA4(int a1)
{
  int v2; // r4
  int v3; // r0
  int result; // r0

  v2 = sub_23192C(a1);
  v3 = ps_getpid_0(&dword_4878EC);
  sub_3E974(v3);
  result = (*(int (__fastcall **)(int))(v2 + 244))(v2);
  if ( !dword_471BF4 )
    return sub_231C68(a1);
  return result;
}
