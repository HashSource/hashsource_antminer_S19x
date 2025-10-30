int __fastcall sub_224470(const char *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r5
  int result; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0

  v5 = sub_53238(a3);
  v6 = v5;
  if ( dword_489C84 )
  {
    v9 = (_DWORD *)sub_242FC8(v5);
    sub_2594B0(*v9, "-> %s->to_open (...)\n", *(const char **)(v6 + 4));
  }
  result = (*(int (__fastcall **)(const char *, int))(v6 + 20))(a1, a2);
  if ( dword_489C84 )
  {
    v8 = (_DWORD *)sub_242FC8(result);
    return sub_2594B0(*v8, "<- %s->to_open (%s, %d)\n", *(const char **)(v6 + 4), a1, a2);
  }
  return result;
}
