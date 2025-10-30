char *__fastcall sub_2143C(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a1 == 3 && (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v3, "enc/dec undefined data type, use default key!\n");
    sub_3AF5C(3, v3, 0, *(_DWORD *)"!\n");
  }
  if ( dword_AF2E4 == 1 )
    return (char *)&unk_AF2F8 + 16 * a1;
  if ( dword_AF2E4 == 2 )
    return (char *)&unk_AF2E8 + 4 * a1;
  return 0;
}
