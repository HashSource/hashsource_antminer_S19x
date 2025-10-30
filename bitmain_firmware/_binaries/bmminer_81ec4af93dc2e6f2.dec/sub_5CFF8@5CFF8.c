int __fastcall sub_5CFF8(int a1, void *a2)
{
  int v4; // [sp+8h] [bp-Ch]
  char v5; // [sp+Ch] [bp-8h]

  v5 = sub_5CE0C(a2);
  v4 = sub_5C960();
  if ( !a1 )
    LOBYTE(v4) = v4 & 0xC0 | v5 & 0x3F;
  if ( a1 == 1 )
    BYTE1(v4) = BYTE1(v4) & 0xC0 | v5 & 0x3F;
  if ( a1 == 2 )
    BYTE2(v4) = BYTE2(v4) & 0xC0 | v5 & 0x3F;
  if ( a1 == 3 )
    HIBYTE(v4) = HIBYTE(v4) & 0xC0 | v5 & 0x3F;
  sub_5C994(v4);
  return 0;
}
