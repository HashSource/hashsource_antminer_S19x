int __fastcall sub_55188(int a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 259;
  if ( sub_58E98() == a1 )
    return 256;
  if ( sub_58ED8() == a1 )
    return 257;
  snprintf(v3, 0x800u, "unmaped port = %d\n", a1);
  sub_3B6AC(0, v3, 0, (int)v3);
  return v4;
}
