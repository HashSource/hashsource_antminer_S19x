int __fastcall sub_4F4B8(int a1, const char *a2, int a3, int a4, int a5)
{
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  const char *v14; // r5
  const char *v15; // r0

  sub_259F10("Dump of assembler code ");
  if ( a2 )
  {
    v9 = sub_259F10("for function %s:\n", a2);
  }
  else
  {
    v14 = (const char *)sub_25AC8C(a1, a3);
    v15 = (const char *)sub_25AC8C(a1, a4);
    v9 = sub_259F10("from %s to %s:\n", v14, v15);
  }
  v10 = (_DWORD *)sub_242FDC(v9);
  sub_10C8E0(a1, *v10, a5, -1, a3, a4);
  v11 = sub_259F10("End of assembler dump.\n");
  v12 = (_DWORD *)sub_242F8C(v11);
  return sub_25680C(*v12);
}
