char *sub_2FDF4()
{
  char *result; // r0
  char v1[2048]; // [sp+0h] [bp-814h] BYREF
  char *nptr; // [sp+800h] [bp-14h]
  int v3; // [sp+804h] [bp-10h]
  unsigned int v4; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  v4 = 0;
  v3 = 0;
  if ( dword_871DC )
  {
    v3 = 0;
    result = strtok((char *)dword_871DC, ",");
    for ( nptr = result; nptr; nptr = result )
    {
      if ( v3 >= dword_93010 )
      {
        strcpy(v1, "Too many values passed to set temp cutoff");
        sub_1DB6C(3, v1, 1);
        sub_4B2A0(1);
      }
      v4 = atoi(nptr);
      if ( v4 > 0xC8 )
      {
        strcpy(v1, "Invalid value passed to set temp cutoff");
        sub_1DB6C(3, v1, 1);
        sub_4B2A0(1);
      }
      sub_2D554(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1384);
      *(_DWORD *)(*(_DWORD *)(dword_92F98 + 4 * v3) + 184) = v4;
      sub_2D6C8(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1386);
      ++v3;
      result = strtok(0, ",");
    }
    if ( v3 <= 1 )
    {
      sub_2D554(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1407);
      for ( i = v3; i < dword_93010; ++i )
        *(_DWORD *)(*(_DWORD *)(dword_92F98 + 4 * i) + 184) = v4;
      return (char *)sub_2D6C8(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1413);
    }
  }
  else
  {
    sub_2D554(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1391);
    for ( i = v3; i < dword_93010; ++i )
    {
      if ( !*(_DWORD *)(*(_DWORD *)(dword_92F98 + 4 * i) + 184) )
        *(_DWORD *)(*(_DWORD *)(dword_92F98 + 4 * i) + 184) = 95;
    }
    return (char *)sub_2D6C8(&stru_92FF0, "cgminer.c", "load_temp_cutoffs", 1400);
  }
  return result;
}
