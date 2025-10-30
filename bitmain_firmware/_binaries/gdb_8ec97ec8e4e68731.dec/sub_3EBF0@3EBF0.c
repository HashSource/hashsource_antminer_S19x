char *__fastcall sub_3EBF0(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  char *result; // r0

  v5 = sub_23192C(a1);
  v6 = ps_getpid_0(&dword_4878EC);
  sub_3E974(v6);
  (*(void (__fastcall **)(int, int, int))(v5 + 40))(v5, a2, a3);
  result = byte_471BB0;
  if ( !dword_471BF4 )
    return (char *)sub_231C68(&unk_471C3C);
  return result;
}
