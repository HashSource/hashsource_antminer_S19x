bool __fastcall sub_1A1CC(int a1, unsigned int a2)
{
  int v3; // r5
  unsigned int v5; // r0
  bool v6; // zf
  unsigned int v7; // r0
  bool v8; // zf
  int v9; // [sp+0h] [bp-Ch] BYREF
  _BYTE v10[8]; // [sp+4h] [bp-8h] BYREF

  v3 = ((int (*)(void))loc_165C28)();
  if ( !sub_C37B8(a2, 0, &v9, v10) )
    return 0;
  v5 = sub_FA95C(a2, 4, v3);
  if ( v5 >> 28 == 15 )
    return 0;
  v6 = (v5 & 0xFFFFFF0) == 27324416;
  if ( (v5 & 0xFFFFFF0) != 0x1A0F000 )
    v6 = (v5 & 0xFFFFFF0) == 19922704;
  if ( !v6 && ((v5 & 0xFFF0000) != 0x8BD0000 || (v5 & 0xC000) == 0) )
    return 0;
  if ( v9 + 4 > a2 )
    return 0;
  v7 = sub_FA95C(a2 - 4, 4, v3);
  if ( v7 >> 28 == 15 )
    return 0;
  if ( (((v7 & 0xDF0F000) - 4247552) & 0xFFBFFFFF) == 0 || (v7 & 0xFFFFFF0) == 0x1A0D000 )
    return 1;
  v8 = (v7 & 0xFFF0000) == 146604032;
  if ( (v7 & 0xFFF0000) != 0x8BD0000 )
    return (v7 & 0xFFF0000) == 77398016;
  return v8;
}
