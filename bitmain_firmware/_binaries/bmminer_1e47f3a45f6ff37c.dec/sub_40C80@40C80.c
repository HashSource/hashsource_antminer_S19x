int sub_40C80()
{
  int v0; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_533B38 - 10;
  dword_533B38 -= 10;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "level down voltage 10");
    sub_3B6AC(3, v2, 0, *(int *)"oltage 10");
    v0 = dword_533B38;
  }
  sub_223A0(v0);
  return 0;
}
