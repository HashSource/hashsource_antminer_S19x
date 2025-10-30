unsigned int __fastcall sub_20B10(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  unsigned __int16 v6; // r0
  _BYTE v7[4]; // [sp+4h] [bp-4h] BYREF

  if ( sub_230020(a2, v7, 2) )
    return 0;
  v4 = sub_15ECB4(a1);
  v5 = ((int (__fastcall *)(int))loc_165C28)(v4);
  v6 = sub_15C250(v7, 2, v5);
  if ( (v6 & 0xFF80) != 0x4700 )
    return 0;
  else
    return sub_15ECAC(a1, (v6 >> 3) & 0xF) & 0xFFFFFFFE;
}
