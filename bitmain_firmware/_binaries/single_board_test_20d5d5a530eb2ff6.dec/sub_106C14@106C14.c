_BYTE *__fastcall sub_106C14(void *a1, size_t a2, _BYTE *a3)
{
  _BYTE *v5; // r5
  int v7[55]; // [sp+0h] [bp-DCh] BYREF

  v5 = a3;
  if ( !a3 )
    v5 = &unk_6E1BF8;
  sub_1065B8((int)v7);
  sub_106AB8((int)v7, a1, a2);
  sub_106678(v5, v7);
  sub_E07F8(v7, 0xD8u);
  return v5;
}
