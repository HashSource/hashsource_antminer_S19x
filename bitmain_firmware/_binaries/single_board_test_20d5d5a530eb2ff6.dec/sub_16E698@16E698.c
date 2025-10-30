void *__fastcall sub_16E698(unsigned __int8 *a1, unsigned int a2, void *a3)
{
  void *v5; // r4
  _BYTE v7[172]; // [sp+0h] [bp-ACh] BYREF

  v5 = a3;
  if ( !a3 )
    v5 = &unk_6E2F4C;
  sub_16E1F8(v7);
  sub_16E48C((int)v7, a1, a2);
  sub_16E4E0((int)v5, (int)v7);
  return v5;
}
