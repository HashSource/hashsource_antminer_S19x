int __fastcall sub_C2474(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  const char **v7; // r5
  const char *v8; // r4
  const char *v9; // r3
  int v10; // r0
  int v11; // [sp+4h] [bp-10h] BYREF
  const char **v12; // [sp+8h] [bp-Ch] BYREF

  v11 = a2;
  v3 = sub_21DDAC(a2 - 1);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 44);
    if ( v4 )
    {
      v5 = sub_324030(v4, &v11, 0);
      if ( v5 )
        return *(_DWORD *)v5;
    }
  }
  sub_1B240C(&v12, v11);
  v7 = v12;
  v8 = (const char *)sub_25AC8C(a1, v11);
  if ( v7 )
  {
    if ( dword_46D448 )
      v9 = (const char *)sub_21B3C4(v7);
    else
      v9 = *v7;
  }
  else
  {
    v9 = "???";
  }
  v10 = sub_92F64(11, "DW_OP_entry_value resolving cannot find DW_TAG_call_site %s in %s", v8, v9);
  return sub_C2528(v10);
}
