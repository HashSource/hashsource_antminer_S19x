int __fastcall sub_FE1FC(void *a1, size_t a2, void *a3)
{
  void *v5; // r4
  int result; // r0
  _BYTE v7[100]; // [sp+0h] [bp-64h] BYREF

  v5 = a3;
  if ( !a3 )
    v5 = &unk_6E1B78;
  result = sub_FF628(v7);
  if ( result )
  {
    sub_FF494((int)v7, a1, a2);
    sub_FF54C(v5, v7);
    sub_E07F8(v7, 0x60u);
    return (int)v5;
  }
  return result;
}
