int __fastcall sub_19F318(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r8
  int v10; // r0
  int v11; // r3
  int v12; // r4
  int result; // r0
  int v14; // r0

  v9 = sub_170040(a1);
  v10 = sub_171258(*(_DWORD **)(*(_DWORD *)(a1 + 24) + 20));
  if ( **(_BYTE **)(v10 + 24) == 7 )
  {
    sub_267E04(a4, v9, a3, a5);
    return 0;
  }
  v11 = *(_DWORD *)(a4 + 20);
  v12 = v10;
  if ( v11 )
  {
    if ( *(_DWORD *)(a4 + 40) != 115 )
    {
      v14 = sub_25AC8C(v9, a2);
      sub_25A6BC(v14, a5);
      v11 = 1;
      if ( *(_DWORD *)(v12 + 20) != 1 )
        return 0;
      goto LABEL_9;
    }
    v11 = 0;
  }
  if ( *(_DWORD *)(v10 + 20) != 1 )
    return 0;
LABEL_9:
  if ( **(_BYTE **)(v12 + 24) != 8 )
    return 0;
  result = *(_DWORD *)(a4 + 40) == 115;
  if ( !*(_DWORD *)(a4 + 40) )
    result = 1;
  if ( !a3 )
    result = 0;
  if ( result )
  {
    if ( v11 )
      sub_25A6BC(&word_3E1F84, a5);
    return sub_269EC4(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 20), 0, a3, -1, a5, a4);
  }
  return result;
}
