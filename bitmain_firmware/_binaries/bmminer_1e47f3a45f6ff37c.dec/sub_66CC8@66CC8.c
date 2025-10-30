int sub_66CC8()
{
  double v0; // d0
  double v2; // d0
  int i; // [sp+1Ch] [bp-8h]

  if ( dword_53636C <= 1 )
    return -1;
  for ( i = 0; ; ++i )
  {
    if ( dword_53636C - 1 <= i )
      return -1;
    if ( *((double *)&unk_536358 + i + 23) - 0.001 < v0 && *((double *)&unk_536358 + i + 24) + 0.001 > v0
      || *((double *)&unk_536358 + i + 23) + 0.001 > v0 && *((double *)&unk_536358 + i + 24) - 0.001 < v0 )
    {
      break;
    }
  }
  v2 = (v0 - *((double *)&unk_536358 + i + 23))
     * ((double)(*((unsigned __int8 *)&unk_536358 + i + 25) - *((unsigned __int8 *)&unk_536358 + i + 24))
      / (*((double *)&unk_536358 + i + 24) - *((double *)&unk_536358 + i + 23)))
     + (double)*((unsigned __int8 *)&unk_536358 + i + 24);
  round();
  if ( (unsigned int)(int)v2 >= 0x100 )
    return -1;
  else
    return (int)v2;
}
