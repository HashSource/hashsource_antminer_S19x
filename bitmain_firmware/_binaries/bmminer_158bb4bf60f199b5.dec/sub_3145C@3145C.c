int __fastcall sub_3145C(int a1)
{
  char v2[2056]; // [sp-808h] [bp-808h] BYREF

  if ( (unsigned int)dword_9E31C > 1 )
  {
    snprintf(v2, 0x800u, "input value error: %c\n", a1);
    sub_47AB4(1, v2, 0);
  }
  return 255;
}
