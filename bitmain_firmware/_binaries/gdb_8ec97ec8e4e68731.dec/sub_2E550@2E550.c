int __fastcall sub_2E550(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r8
  int v9; // r4
  __int64 v10; // r0
  int v11; // r3

  v7 = sub_15ECB4(a2);
  v8 = ((int (__fastcall *)(int))loc_165BB8)(v7);
  v9 = sub_15ECAC(a2, 13);
  LODWORD(v10) = sub_FA95C(v9, 4, v8);
  if ( v9 + 8 == v10 )
    v11 = 168;
  else
    v11 = 160;
  return sub_2E4C0(a2, a3, a4, v11);
}
