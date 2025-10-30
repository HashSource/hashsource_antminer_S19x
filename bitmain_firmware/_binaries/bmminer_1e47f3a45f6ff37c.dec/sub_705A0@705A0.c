int __fastcall sub_705A0(int a1, int a2)
{
  int v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-8h]

  if ( sub_74F6C(v7) )
    return 0;
  if ( sub_707AC(a1, 456020, v7, a2) )
  {
    v8 = 0;
  }
  else
  {
    v3 = sub_7507C(v7);
    v8 = sub_74E24(v3);
  }
  sub_74FE8(v7);
  return v8;
}
