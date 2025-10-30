int __fastcall sub_605A4(int a1, int a2)
{
  int v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-8h]

  if ( sub_64F70(v7) )
    return 0;
  if ( sub_607B0(a1, 390488, v7, a2) )
  {
    v8 = 0;
  }
  else
  {
    v3 = sub_65080(v7);
    v8 = sub_64E28(v3);
  }
  sub_64FEC(v7);
  return v8;
}
