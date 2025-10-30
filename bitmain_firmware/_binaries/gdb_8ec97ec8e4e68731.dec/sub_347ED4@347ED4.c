int __fastcall sub_347ED4(int a1, int a2, int a3, int a4)
{
  bool v5; // cf
  int v6; // r0
  int v7; // r1
  _DWORD v8[2]; // [sp+8h] [bp-8h] BYREF

  if ( !a4 && !a3 )
    JUMPOUT(0x347FA4);
  if ( a2 < 0 )
  {
    v5 = a1 == 0;
    v6 = -a1;
    v7 = a2 - (2 * a2 + !v5);
    if ( a4 < 0 )
      return sub_3480A0(v6, v7, -a3, a4 - (2 * a4 + (unsigned int)(a3 != 0)), v8);
    else
      return -(int)sub_3480A0(v6, v7, a3, a4, v8);
  }
  else if ( a4 < 0 )
  {
    return -(int)sub_3480A0(a1, a2, -a3, a4 - (2 * a4 + (unsigned int)(a3 != 0)), v8);
  }
  else
  {
    return sub_3480A0(a1, a2, a3, a4, v8);
  }
}
