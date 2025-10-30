_BYTE *__fastcall sub_100A04(char *a1, size_t a2, _BYTE *a3)
{
  _BYTE *v5; // r5
  int v7[29]; // [sp+0h] [bp-74h] BYREF

  v5 = a3;
  if ( !a3 )
    v5 = &unk_6E1BA8;
  sub_100664(v7);
  sub_1006C8(v7, a1, a2);
  sub_100784(v5, v7);
  sub_E07F8(v7, 0x70u);
  return v5;
}
