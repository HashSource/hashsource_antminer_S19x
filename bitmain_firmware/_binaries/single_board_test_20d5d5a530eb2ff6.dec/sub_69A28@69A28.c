int sub_69A28()
{
  _BYTE *v0; // r3
  _BYTE *v1; // r2
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  v0 = &byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
  if ( !v0[264776] && v0[2] && *(_BYTE *)(dword_223680 + 88) && v0[5] )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Base PT2 is OK,continue run sweep test...\n", "run_sweep_test_after_PT2_test");
    strcpy(byte_65AC40, "Base PT2 is OK,continue run sweep test...");
    sub_3CC5C((int)byte_65AC40, v3);
    return sub_6995C((unsigned __int8)byte_5FE894);
  }
  else
  {
    v1 = &byte_2337B0[264784 * (unsigned __int8)byte_5FE894];
    if ( v1[2] && v1[5] && *(_DWORD *)(dword_223680 + 64) == dword_5FE780 )
    {
      sub_1E938(v3, 0x30u);
      printf("%s ", v3);
      printf("%s : Base PT2 is fail, run sweep test to matche lowest level\n", "run_sweep_test_after_PT2_test");
      strcpy(byte_65AA40, "Base PT2 is fail, run sweep test to matche lowest level");
      sub_3CC5C((int)byte_65AA40, v3);
      return sub_6995C(-1);
    }
    else
    {
      sub_1E938(v3, 0x30u);
      printf("%s ", v3);
      printf("%s : Base PT2 is failed cause hal Err,no need sweep.\n", "run_sweep_test_after_PT2_test");
      strcpy(byte_65AB40, "Base PT2 is failed cause hal Err,no need sweep.");
      sub_3CC5C((int)byte_65AB40, v3);
      return 12;
    }
  }
}
