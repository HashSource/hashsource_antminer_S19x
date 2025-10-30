int __fastcall sub_CF484(int a1, unsigned int a2)
{
  int v2; // r4
  int *v5; // r5
  int v6; // r8
  int v7; // t1

  if ( dword_478368 >= (unsigned int)(dword_478368 + 4 * dword_47836C) )
    return 0;
  v2 = *(_DWORD *)dword_478368;
  if ( !*(_DWORD *)dword_478368 )
    return 0;
  v5 = (int *)(dword_478368 + 4);
  v6 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 + 12) > 1u
      || *(_DWORD *)(*(_DWORD *)(v2 + 16) + 16) != 1 && !*(_BYTE *)(v2 + 40)
      || !sub_CF3F0((_DWORD *)v2, a1, a2)
      || dword_489690 && sub_2142A0(*(_DWORD *)(v2 + 64)) && !sub_2142D0(*(_DWORD *)(v2 + 64)) )
    {
      goto LABEL_6;
    }
    if ( *(_BYTE *)(v2 + 40) )
      return 2;
    v6 = 1;
LABEL_6:
    if ( (unsigned int)v5 < dword_478368 + 4 * dword_47836C )
    {
      v7 = *v5++;
      v2 = v7;
      if ( v7 )
        continue;
    }
    return v6;
  }
}
