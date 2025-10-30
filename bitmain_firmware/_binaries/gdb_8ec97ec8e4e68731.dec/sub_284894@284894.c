int __fastcall sub_284894(int a1)
{
  int v1; // r7
  bool v2; // zf
  unsigned int v3; // r0
  int v4; // r1
  unsigned int v5; // r6
  bool v6; // zf
  bool v7; // zf

  v1 = a1;
  while ( 1 )
  {
    dword_48AAA0 |= 0x40u;
    v3 = sub_29334C(a1);
    v5 = v3 & 0xFFFFFFDF;
    v6 = v3 == 32;
    if ( v3 != 32 )
      v6 = v5 == 89;
    dword_48AAA0 &= ~0x40u;
    if ( v6 )
      return 1;
    v7 = v3 == 127;
    if ( v3 != 127 )
      v7 = v5 == 78;
    if ( v7 )
      return 0;
    if ( (v3 == 7) | (v3 >> 31) )
      sub_29121C();
    if ( v1 )
      break;
LABEL_7:
    a1 = sub_2945C8(v3, v4);
  }
  v2 = v3 == 13;
  if ( v3 != 13 )
    v2 = v3 == 10;
  if ( !v2 )
  {
    if ( v5 == 81 )
      return 0;
    goto LABEL_7;
  }
  return 2;
}
