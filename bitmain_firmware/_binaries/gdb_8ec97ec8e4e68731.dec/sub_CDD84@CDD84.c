int __fastcall sub_CDD84(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r9
  int *v7; // r5
  int v8; // t1
  int v9; // r0
  int v10; // r3

  if ( dword_478368 >= (unsigned int)(dword_478368 + 4 * dword_47836C) )
    return 0;
  v3 = *(_DWORD *)dword_478368;
  if ( !*(_DWORD *)dword_478368 )
    return 0;
  v6 = a1;
  v7 = (int *)(dword_478368 + 4);
  while ( 1 )
  {
    if ( *(_DWORD *)(v3 + 12) <= 1u && (*(_DWORD *)(*(_DWORD *)(v3 + 16) + 16) == 1 || *(_BYTE *)(v3 + 40)) )
    {
      v9 = sub_16F654(a1);
      a1 = ((int (__fastcall *)(int))loc_16D8FC)(v9);
      if ( a1 || v6 == *(_DWORD *)(*(_DWORD *)(v3 + 48) + 20) )
      {
        v10 = *(_DWORD *)(v3 + 56);
        if ( !v10 )
          v10 = 1;
        a1 = sub_1B05A0(a2, a3, *(_DWORD *)(v3 + 52), v10);
        if ( a1 )
        {
          if ( !dword_489690 )
            break;
          if ( !sub_2142A0(*(_DWORD *)(v3 + 64)) )
            break;
          a1 = sub_2142D0(*(_DWORD *)(v3 + 64));
          if ( a1 )
            break;
        }
      }
    }
    if ( (unsigned int)v7 < dword_478368 + 4 * dword_47836C )
    {
      v8 = *v7++;
      v3 = v8;
      if ( v8 )
        continue;
    }
    return 0;
  }
  return 1;
}
