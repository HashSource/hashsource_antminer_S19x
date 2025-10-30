bool __fastcall sub_F6694(int a1, int a2)
{
  int v4; // r4

  if ( (sub_F7F30(*(_DWORD *)(a1 + 24)) & 1) != 0 )
    return 1;
  v4 = sub_F7F30(*(_DWORD *)(a2 + 24)) & 1;
  if ( v4 )
    return 1;
  if ( !sub_B8354(*(int **)(*(_DWORD *)(a2 + 24) + 16), *(int **)(*(_DWORD *)(a1 + 24) + 16)) )
    return sub_B8354(*(int **)(*(_DWORD *)(a2 + 24) + 20), *(int **)(*(_DWORD *)(a1 + 24) + 20)) == 0;
  return v4;
}
