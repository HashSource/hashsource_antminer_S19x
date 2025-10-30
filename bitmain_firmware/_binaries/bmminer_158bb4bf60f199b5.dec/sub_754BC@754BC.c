int __fastcall sub_754BC(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  sub_75D9C(0, a1, 0, 24, &v5);
  if ( a2 )
  {
    BYTE2(v5) |= 0x40u;
    HIBYTE(v5) &= 0xFu;
  }
  else
  {
    BYTE2(v5) &= ~0x40u;
    HIBYTE(v5) |= 0xF0u;
  }
  return sub_748C4(a1, 1, 0, 24, v5);
}
