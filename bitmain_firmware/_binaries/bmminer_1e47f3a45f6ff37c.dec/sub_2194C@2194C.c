char *__fastcall sub_2194C(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a1 == 3 && (unsigned int)dword_B308C > 3 )
  {
    strcpy(v3, "enc/dec undefined data type, use default key!\n");
    sub_3B6AC(3, v3, 0, *(_DWORD *)"!\n");
  }
  if ( dword_B274C == 1 )
    return (char *)&unk_B2760 + 16 * a1;
  if ( dword_B274C == 2 )
    return (char *)&unk_B2750 + 4 * a1;
  return 0;
}
