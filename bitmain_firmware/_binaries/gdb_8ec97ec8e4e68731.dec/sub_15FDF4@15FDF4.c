int __fastcall sub_15FDF4(int a1)
{
  int v2; // r0
  _DWORD *v3; // r3

  do
  {
    v3 = *(_DWORD **)(a1 + 16);
    if ( v3 )
    {
      v2 = a1;
      if ( *v3 != 3 )
        return a1;
      goto LABEL_3;
    }
    sub_160DD4(a1, a1 + 12);
    v2 = a1;
    if ( **(_DWORD **)(a1 + 16) != 3 )
      break;
LABEL_3:
    a1 = ((int (__fastcall *)(int))loc_15FA88)(v2);
  }
  while ( a1 );
  return a1;
}
