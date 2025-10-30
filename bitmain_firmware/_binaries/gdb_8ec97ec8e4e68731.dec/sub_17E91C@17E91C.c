int __fastcall sub_17E91C(int a1)
{
  int v1; // r0
  const char *v2; // r4
  _DWORD *v3; // r0

  v1 = sub_183688(a1);
  v2 = *(const char **)(v1 + 56);
  if ( !v2 )
    v2 = "";
  v3 = (_DWORD *)sub_242F8C(v1);
  return sub_25A418(*v3, "Terminal for future runs of program being debugged is \"%s\".\n", v2);
}
