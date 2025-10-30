int __fastcall sub_3C170(int a1, unsigned __int16 a2)
{
  int v2; // r4
  _BYTE v4[4]; // [sp+Ch] [bp-38h] BYREF
  char v5[52]; // [sp+10h] [bp-34h] BYREF

  v4[1] = 4 * a2;
  v4[0] = a2 >> 6;
  v2 = sub_3BD08(a1, 1, 33, (int)v4, 2);
  if ( !v2 )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : fail\n", "set_dac53401_voltage");
    strcpy((char *)&dword_633D68, "fail");
    sub_3CC5C(&dword_633D68, v5);
  }
  return v2;
}
