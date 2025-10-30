int __fastcall sub_1B51D8(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r6
  int v6; // r4
  size_t v7; // r0
  _DWORD *v8; // r0
  int v9[3]; // [sp+0h] [bp-Ch] BYREF

  sub_1780B4();
  v4 = *(_DWORD *)(v3 + 4);
  if ( !sub_22EBBC(v3) )
    return 0;
  sub_1B141C(v9, "objc_lookUpClass", 0, 0);
  if ( v9[0] )
  {
    v6 = sub_2611C4("objc_lookUpClass", 0);
LABEL_5:
    v7 = strlen(a2);
    v9[0] = sub_262454(a2, v7 + 1, v4);
    v9[0] = sub_26160C(v9[0]);
    v8 = sub_17E6EC(v6, 0, 1, (char *)v9);
    return sub_26EB1C(v8);
  }
  sub_1B141C(v9, "objc_lookup_class", 0, 0);
  if ( v9[0] )
  {
    v6 = sub_2611C4("objc_lookup_class", 0);
    goto LABEL_5;
  }
  if ( dword_47AC88 <= 0 )
    return 0;
  sub_F43B4(&off_46D334, "no way to lookup Objective-C classes");
  return 0;
}
