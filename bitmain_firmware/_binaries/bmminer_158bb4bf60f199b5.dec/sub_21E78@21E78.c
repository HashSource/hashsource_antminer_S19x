int __fastcall sub_21E78(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v5, 0x800u, "set UART baud to %d\n", a1);
    sub_47AB4(3, v5, 0);
  }
  if ( a1 > 3000000 )
    v2 = 400000000;
  else
    v2 = 25000000;
  v3 = sub_772E8(v2);
  sub_1A8AC(a1, v3 - 1);
  sub_4A830(50000, 0);
  result = sub_70E58(a1);
  *(_DWORD *)(dword_A0D68 + 12956) = a1;
  return result;
}
