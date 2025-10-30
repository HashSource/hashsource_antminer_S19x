void __fastcall sub_B1F80(int a1, int a2, int a3)
{
  int v4; // r3
  _BYTE *v5; // r4
  int v8; // r8
  int v9; // r0
  int v10; // r5
  _BYTE *v11; // r7
  char *v12; // r0
  int v13; // r3
  int v14; // r10
  __int64 v15; // r0
  int v16; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 )
    goto LABEL_15;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_BYTE **)(v4 + 8);
  if ( !v5 )
  {
    sub_94700(
      (int)"ada-typeprint.c",
      285,
      "%s: Assertion `%s' failed.",
      "void print_range_type(type*, ui_file*, int)",
      "name != NULL");
LABEL_15:
    v15 = sub_94700(
            (int)"ada-typeprint.c",
            283,
            "%s: Assertion `%s' failed.",
            "void print_range_type(type*, ui_file*, int)",
            "raw_type != NULL");
    sub_B2100(v15, HIDWORD(v15));
    return;
  }
  if ( *(_BYTE *)v4 == 12 )
    v8 = *(_DWORD *)(v4 + 20);
  else
    v8 = a1;
  v9 = sub_338BD4(*(_DWORD *)(v4 + 8), "___XD");
  v10 = v9;
  if ( v9 )
  {
    v11 = (_BYTE *)(v9 + 5);
    v12 = strchr((const char *)(v9 + 5), 95);
    v13 = *(unsigned __int8 *)(v10 + 5);
    v14 = (int)v12;
    v16 = 1;
    if ( v13 == 76 )
    {
      v11 = (_BYTE *)(v10 + 6);
      sub_B1D34(v8, (int)v12, &v16, a2);
    }
    else
    {
      sub_B1E20(v8, v5, v10 - (_DWORD)v5, "___L", a2);
    }
    sub_25A418(a2, " .. ");
    if ( *v11 == 85 )
      sub_B1D34(v8, v14, &v16, a2);
    else
      sub_B1E20(v8, v5, v10 - (_DWORD)v5, "___U", a2);
  }
  else
  {
    sub_B1B34(a1, a2, a3);
  }
}
