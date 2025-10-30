char *__fastcall sub_4FDC8(int a1)
{
  if ( (unsigned int)a1 > 0x7E000000 )
    return 0;
  if ( a1 <= 15 )
    return (char *)&dword_1001C + 2;
  return (char *)(a1 + 65550);
}
