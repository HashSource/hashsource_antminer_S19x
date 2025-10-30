_DWORD *sub_31E10()
{
  char v1[2048]; // [sp+Ch] [bp-808h] BYREF
  _DWORD *v2; // [sp+80Ch] [bp-8h]

  v2 = sub_202D4(1u, 0x1C0u, "cgminer.c", "make_work", 2337);
  if ( !v2 )
  {
    strcpy(v1, "Failed to calloc work in make_work");
    sub_1E4EC(3, v1, 1);
    sub_4BFB0(1);
  }
  v2[85] = sub_31D94();
  return v2;
}
