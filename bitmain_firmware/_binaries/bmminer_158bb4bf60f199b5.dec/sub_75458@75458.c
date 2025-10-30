int __fastcall sub_75458(int a1, int a2)
{
  char v4; // r3
  int v6; // [sp+Ch] [bp-8h] BYREF

  sub_75D9C(0, a1, 0, 24, &v6);
  if ( a2 )
    v4 = BYTE1(v6) | 0x80;
  else
    v4 = BYTE1(v6) & 0x7F;
  BYTE1(v6) = v4;
  return sub_748C4(a1, 1, 0, 24, v6);
}
