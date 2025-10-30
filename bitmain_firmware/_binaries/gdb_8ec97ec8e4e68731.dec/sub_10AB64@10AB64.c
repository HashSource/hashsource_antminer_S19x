int __fastcall sub_10AB64(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int (__fastcall *v6)(int, int, _DWORD); // r6
  int v7; // r0

  v4 = sub_194570(**(_DWORD **)a2, a1);
  v5 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 40);
  if ( v5 )
  {
    v6 = (int (__fastcall *)(int, int, _DWORD))v4;
    while ( 1 )
    {
      v7 = sub_21B7DC(v5);
      if ( v6(v7, a1, 0) )
        break;
      v5 = *(_DWORD *)(v5 + 40);
      if ( !v5 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = 0;
  }
  *(_DWORD *)(a2 + 8) = v5;
  return v5;
}
