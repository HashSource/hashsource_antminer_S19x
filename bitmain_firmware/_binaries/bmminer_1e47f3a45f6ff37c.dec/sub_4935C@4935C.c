int sub_4935C()
{
  int i; // r4
  int v1; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v3, "[DEBUG] HW sweep reset.\n");
    sub_3B6AC(4, v3, 0, *(int *)"weep reset.\n");
  }
  sub_28758(255, 0);
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_79D34((unsigned __int8)i);
  }
  v1 = sub_69D38();
  return sub_69D6C(v1 & 0xFFFF70FF | 0x8400);
}
