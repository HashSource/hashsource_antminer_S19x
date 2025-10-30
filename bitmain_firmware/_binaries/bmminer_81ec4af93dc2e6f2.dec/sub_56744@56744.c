int __fastcall sub_56744(int a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 259;
  if ( a1 == sub_57EB0() )
    return 256;
  if ( a1 == sub_57EF0() )
    return 257;
  snprintf(v3, 0x800u, "unmaped port = %d\n", a1);
  sub_3AF5C(0, v3, 0, (int)v3);
  return v4;
}
