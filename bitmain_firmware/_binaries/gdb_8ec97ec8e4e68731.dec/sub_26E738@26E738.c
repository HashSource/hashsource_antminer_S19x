int __fastcall sub_26E738(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r3
  int result; // r0
  _DWORD *v4; // r3

  v1 = (_DWORD *)a1;
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v2 = (_DWORD *)v1[25];
    result = v1[23];
    if ( v2 && *v2 )
    {
      if ( *v1 != 2 )
        sub_26BD38();
      sub_946E0("register has not been saved in frame");
    }
    v4 = (_DWORD *)v1[24];
    if ( !v4 || !*v4 )
      break;
    a1 = sub_92F64(9, "value is not available");
LABEL_7:
    ((void (__fastcall *)(int))loc_26E00C)(a1);
  }
  return result;
}
