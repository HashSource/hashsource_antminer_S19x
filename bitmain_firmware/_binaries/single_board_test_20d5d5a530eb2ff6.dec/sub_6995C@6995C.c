int __fastcall sub_6995C(int a1)
{
  int v2; // r4
  int v3; // r0
  int v5; // [sp+0h] [bp-3Ch]
  char v6[52]; // [sp+8h] [bp-34h] BYREF

  sub_2146C("Sweep init", "waiting...", 0);
  v5 = a1;
  v2 = 12;
  v3 = sub_47C38(1, dword_21B3A4, dword_223680, dword_22B69C, v5);
  if ( !sub_2C914(v3) )
    return v2;
  sub_2146C("Sweep start", "waiting...", 0);
  v2 = sub_480CC();
  if ( !v2 )
  {
    sub_26290();
    return v2;
  }
  sub_43C84();
  sub_1E938(v6, 0x30u);
  printf("%s ", v6);
  printf("%s : sweep fail\n", "run_sweep_test_after_by_PT2_info");
  strcpy(byte_65A940, "sweep fail");
  sub_3CC5C((int)byte_65A940, v6);
  return 12;
}
