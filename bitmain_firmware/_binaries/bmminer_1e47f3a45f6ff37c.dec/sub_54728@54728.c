int __fastcall sub_54728(int a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = sub_59050(a1);
  if ( v4 >= 0 )
    return sub_5763C(v4, 1);
  snprintf(v3, 0x800u, "bad chain id = %d\n", a1);
  return sub_3B6AC(0, v3, 0, (int)v3);
}
