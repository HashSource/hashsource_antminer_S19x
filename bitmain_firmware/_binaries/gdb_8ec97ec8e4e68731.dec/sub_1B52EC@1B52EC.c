int __fastcall sub_1B52EC(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r6
  int v6; // r4
  size_t v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10[3]; // [sp+0h] [bp-Ch] BYREF

  sub_1780B4();
  v4 = *(_DWORD *)(v3 + 4);
  if ( !sub_22EBBC(v3) )
    return 0;
  sub_1B141C(v10, "sel_getUid", 0, 0);
  if ( v10[0] )
  {
    v6 = sub_2611C4("sel_getUid", 0);
LABEL_5:
    v7 = strlen(a2);
    v8 = sub_262454(a2, v7 + 1, v4);
    v10[0] = sub_26160C(v8);
    v9 = sub_17E6EC(v6, 0, 1, (char *)v10);
    return sub_26EB1C(v9);
  }
  sub_1B141C(v10, "sel_get_any_uid", 0, 0);
  if ( v10[0] )
  {
    v6 = sub_2611C4("sel_get_any_uid", 0);
    goto LABEL_5;
  }
  if ( dword_47AC88 <= 0 )
    return 0;
  sub_F43B4(&off_46D334, "no way to lookup Objective-C selectors");
  return 0;
}
