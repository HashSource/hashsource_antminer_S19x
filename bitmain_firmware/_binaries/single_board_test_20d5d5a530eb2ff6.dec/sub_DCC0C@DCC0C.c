void *__fastcall sub_DCC0C(_DWORD *a1, const void *a2, size_t a3, int a4, int a5, void *a6, _DWORD *a7)
{
  void *v7; // r5
  int v12; // r0
  _DWORD *v13; // r4
  bool v14; // zf

  v7 = a6;
  if ( !a6 )
    v7 = &unk_6E1998;
  v12 = sub_DCB64();
  v13 = (_DWORD *)v12;
  if ( !v12 )
    goto LABEL_12;
  v14 = a2 == 0;
  if ( !a2 )
    v14 = a3 == 0;
  if ( v14 )
    a2 = &unk_1B5EC0;
  if ( sub_DC8C4(v12, a2, a3, a1, 0) && sub_DCA18(v13, a4, a5) && sub_DCA28((int)v13, (int)v7, a7) )
  {
    sub_DCA8C((int)v13);
    return v7;
  }
  else
  {
LABEL_12:
    sub_DCA8C((int)v13);
    return 0;
  }
}
