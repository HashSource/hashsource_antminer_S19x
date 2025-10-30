unsigned int sub_2212C()
{
  int i; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "power off\n");
    sub_3B6AC(3, v2, 0, &v2[10]);
  }
  sub_57920();
  sub_3E0F0(30);
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_546A0(i);
  }
  return sleep(1u);
}
