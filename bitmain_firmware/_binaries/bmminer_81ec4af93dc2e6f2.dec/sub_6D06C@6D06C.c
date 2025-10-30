int __fastcall sub_6D06C(int a1, int a2)
{
  int v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-8h]

  if ( sub_71A64(v7) )
    return 0;
  if ( sub_6D278(a1, 442416, v7, a2) )
  {
    v8 = 0;
  }
  else
  {
    v3 = sub_71B7C(v7);
    v8 = sub_71914(v3);
  }
  sub_71AE0(v7);
  return v8;
}
