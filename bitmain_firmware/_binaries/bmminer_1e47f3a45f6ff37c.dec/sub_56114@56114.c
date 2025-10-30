unsigned int __fastcall sub_56114(unsigned __int8 a1, const char *a2)
{
  const char *v6; // [sp+14h] [bp-10h]

  v6 = a2;
  do
    ++v6;
  while ( *v6 != 32 );
  *v6 = 0;
  if ( !atoi(a2) )
    return 0;
  if ( atoi(a2) > (int)&unk_3D0900 )
    dword_535F24[a1] = atoi(a2);
  return 10 * ((unsigned int)(float)(6.0e10 / (float)(unsigned int)(2 * dword_535F24[a1])) / 0xA);
}
