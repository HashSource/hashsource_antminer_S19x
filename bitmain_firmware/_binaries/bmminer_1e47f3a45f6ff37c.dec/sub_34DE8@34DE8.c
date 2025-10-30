int __fastcall sub_34DE8(int a1)
{
  int v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v4, "set uart relay");
    sub_3B6AC(3, v4, 0, *(_DWORD *)"ay");
  }
  sub_27D14();
  sub_3E0F0(100);
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v4, 0x800u, "set UART baud to %d\n", a1);
    sub_3B6AC(3, v4, 0, v2);
  }
  sub_27B90(a1);
  sub_26AB4();
  return sub_185F4();
}
