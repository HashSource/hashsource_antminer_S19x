int __fastcall sub_74950(int a1, int a2, int a3, unsigned int a4, char a5, char a6, char a7, __int16 a8)
{
  if ( a4 > 3 )
    return -1;
  else
    return sub_748C4(
             a1,
             a2,
             a3,
             (unsigned __int8)aDh[a4],
             a6 & 7 | 0x40000000 | (unsigned __int8)(16 * (a5 & 7)) | ((a7 & 0x3F) << 8) | ((a8 & 0xFFF) << 16));
}
