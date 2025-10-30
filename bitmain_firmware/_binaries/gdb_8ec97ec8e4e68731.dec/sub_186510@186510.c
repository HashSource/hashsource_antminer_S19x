int __fastcall sub_186510(unsigned int a1)
{
  char *v2; // r5
  size_t v3; // r0
  int v4; // r4
  const char *v5; // r1
  const char *v6; // r1
  const char *v7; // r1
  const char *v8; // r0

  v2 = sub_99A4C(a1);
  v3 = strlen(v2);
  v4 = (13 - v3) & ~((int)(13 - v3) >> 31);
  sub_259F10("%s", v2);
  sub_259F10("%*.*s ", v4, v4, "                 ");
  if ( *(_BYTE *)(dword_48797C + a1) )
    v5 = "Yes";
  else
    v5 = "No";
  sub_259F10("%s\t", v5);
  if ( *(_BYTE *)(dword_487980 + a1) )
    v6 = "Yes";
  else
    v6 = "No";
  sub_259F10("%s\t", v6);
  if ( *(_BYTE *)(dword_487948 + a1) )
    v7 = "Yes";
  else
    v7 = "No";
  sub_259F10("%s\t\t", v7);
  v8 = sub_99A28(a1);
  return sub_259F10("%s\n", v8);
}
