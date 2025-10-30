int sub_678E8()
{
  double v0; // d0
  double v2; // d0
  int i; // [sp+1Ch] [bp-8h]

  if ( dword_53155C <= 1 )
    return -1;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_53155C - 1 )
      return -1;
    if ( v0 > *((double *)&unk_531548 + i + 23) - 0.001 && v0 < *((double *)&unk_531548 + i + 24) + 0.001
      || v0 < *((double *)&unk_531548 + i + 23) + 0.001 && v0 > *((double *)&unk_531548 + i + 24) - 0.001 )
    {
      break;
    }
  }
  v2 = (v0 - *((double *)&unk_531548 + i + 23))
     * ((double)(*((unsigned __int8 *)&unk_531548 + i + 25) - *((unsigned __int8 *)&unk_531548 + i + 24))
      / (*((double *)&unk_531548 + i + 24) - *((double *)&unk_531548 + i + 23)))
     + (double)*((unsigned __int8 *)&unk_531548 + i + 24);
  round();
  if ( (unsigned int)(int)v2 >= 0x100 )
    return -1;
  else
    return (int)v2;
}
