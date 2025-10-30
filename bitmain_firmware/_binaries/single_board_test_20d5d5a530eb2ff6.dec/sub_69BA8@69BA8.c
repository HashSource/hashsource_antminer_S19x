int sub_69BA8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r4
  int v4; // r6
  int result; // r0
  int v6; // r0
  int v7; // [sp+8h] [bp-30h] BYREF
  char v8; // [sp+Ch] [bp-2Ch]

  v0 = sub_472C0(0, 1);
  sub_6F490(v0);
  v1 = sub_22B14();
  sub_1E938((char *)&v7, 0x30u);
  printf("%s ", (const char *)&v7);
  printf("%s : first sensor check res:%d\n", "Single_Board_Sweep_Test", v1);
  snprintf(byte_65AD40, 0x100u, "first sensor check res:%d", v1);
  v2 = sub_3CC5C((int)byte_65AD40, (const char *)&v7);
  if ( !v1 )
  {
    v6 = sub_2146C("Sensor Check", "Err", 0);
    sub_6F490(v6);
    return 12;
  }
  if ( *(_BYTE *)(dword_223680 + 285) )
  {
    sub_65EEC(v2);
    return sub_69A28();
  }
  sub_2146C("Sweep init", "waiting...", (const char *)*(unsigned __int8 *)(dword_223680 + 285));
  v3 = sub_47C38(1, dword_21B3A4, dword_223680, dword_22B69C, -1);
  sub_472D0((int)&v7);
  if ( v8 )
  {
    if ( !v3 )
      goto LABEL_5;
LABEL_11:
    sub_40D18(dword_21B3A4);
    return 12;
  }
  sub_2C914(v7);
  if ( v3 )
    goto LABEL_11;
LABEL_5:
  v4 = sub_480CC();
  sub_40D18(dword_21B3A4);
  sub_2A09C();
  if ( v4 )
  {
    sub_472D0((int)&v7);
    result = 12;
    if ( !v8 )
    {
      sub_2C914(v7);
      return 12;
    }
  }
  else
  {
    sub_26290();
    return v3;
  }
  return result;
}
