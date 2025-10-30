int __fastcall sub_2301F0(unsigned int a1, unsigned int *a2)
{
  int v3; // r4
  int v4; // r0
  unsigned int v5; // r0
  unsigned __int8 v7[8]; // [sp+4h] [bp-8h] BYREF

  v3 = sub_230020(a1, (int)v7, 4);
  if ( !v3 )
  {
    v4 = sub_16F654(0);
    v5 = ((int (__fastcall *)(int))loc_165BB8)(v4);
    *a2 = sub_15C250(v7, 4, v5);
  }
  return v3;
}
