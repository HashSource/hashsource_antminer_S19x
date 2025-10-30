int sub_176C0()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v1, "Note: front fan is power off!\n");
    sub_3B6AC(3, v1, 0, *(_DWORD *)"!\n");
  }
  return sub_5673C(0);
}
