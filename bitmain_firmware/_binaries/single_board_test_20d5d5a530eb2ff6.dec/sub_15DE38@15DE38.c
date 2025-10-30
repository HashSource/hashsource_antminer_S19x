int __fastcall sub_15DE38(int a1, int a2, int a3, char *a4, int a5)
{
  char *v8; // r5
  int v9; // r0
  int v10; // r6
  int v11; // r4
  int v12; // r4
  _BYTE v14[8176]; // [sp+10h] [bp-2004h] BYREF

  v8 = a4;
  if ( !a4 && byte_6E1CEC )
    v8 = &byte_6E1CEC;
  v9 = sub_16C988();
  v10 = v9;
  if ( !v9 )
    return -1;
  v11 = 0x1FFF;
  if ( a3 <= 0x1FFF )
    v11 = a3;
  if ( sub_16C9DC(v9, v8) < 0 || a5 && sub_16CC88(v10, v8, 0, v14, a2, v11, a1) < 0 )
  {
    v12 = -1;
  }
  else
  {
    v12 = sub_16D6B0(v10);
    sub_E07F8(v14, 0x2000u);
  }
  sub_16C990(v10);
  return v12;
}
