int __fastcall sub_194034(int a1, int a2, int a3, const char *a4)
{
  _DWORD *v4; // r0
  int result; // r0
  _DWORD *v7; // r0
  const char *v8; // r5
  int v9; // r0
  const char *v10; // r3
  int v11; // lr
  const char *v12; // r5
  _DWORD *v13; // r0
  const char *v14; // r5
  _DWORD *v15; // r0
  __int64 v16; // r0
  int v17; // [sp-4h] [bp-4h]

  if ( dword_4879E8 )
  {
    v7 = (_DWORD *)sub_242F8C(a1);
    result = sub_25A418(*v7, "Range checking is \"%s\".\n", a4);
LABEL_9:
    if ( off_46D5A4[0][3] != (char *)dword_4879EC )
      return sub_946B0("the current range check setting does not match the language.\n");
    return result;
  }
  switch ( dword_4879EC )
  {
    case 1:
      v8 = "warn";
      goto LABEL_8;
    case 0:
      v8 = "off";
LABEL_8:
      v4 = (_DWORD *)sub_242F8C(a1);
      result = sub_25A418(*v4, "Range checking is \"auto; currently %s\".\n", v8);
      goto LABEL_9;
    case 2:
      v8 = "on";
      goto LABEL_8;
  }
  v9 = sub_94700((int)"language.c", 237, "Unrecognized range check setting.");
  v17 = v11;
  if ( dword_4879F0 )
  {
    v14 = v10;
    v15 = (_DWORD *)sub_242F8C(v9);
    sub_25A418(*v15, "Case sensitivity in name search is \"%s\".\n", v14);
  }
  else
  {
    if ( dword_4879F4 )
    {
      if ( dword_4879F4 != 1 )
      {
        v16 = sub_94700((int)"language.c", 309, "Unrecognized case-sensitive setting.");
        return sub_1941BC(v16, (char *)HIDWORD(v16));
      }
      v12 = "off";
    }
    else
    {
      v12 = "on";
    }
    v13 = (_DWORD *)sub_242F8C(v9);
    sub_25A418(*v13, "Case sensitivity in name search is \"auto; currently %s\".\n", v12);
  }
  if ( off_46D5A4[0][4] == (char *)dword_4879F4 )
    __asm { POPEQ           {R4-R6,PC} }
  return sub_946B0("the current case sensitivity setting does not match the language.\n");
}
