int __fastcall sub_10EB44(int a1, int *a2, int a3)
{
  char *v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  bool v10; // zf
  bool v11; // zf

  if ( (a3 & 0x30000) == 0 )
    return 0;
  v6 = sub_EAC84(*(_DWORD *)(a1 + 4));
  if ( !a2 )
    return 57;
  if ( sub_DA19C((int)a2) != 408 )
    return 57;
  v7 = sub_DA1F4(a2);
  v8 = sub_C59B8(v7);
  if ( !v8 )
    return 57;
  v9 = sub_C6284(v8);
  if ( v9 == 715 )
  {
    v10 = v6 + 1 == 0;
    if ( v6 != (char *)-1 )
      v10 = v6 == (char *)795;
    if ( !v10 )
      return 59;
    if ( (a3 & 0x20000) == 0 )
      return 60;
  }
  else
  {
    if ( v9 != 415 )
      return 58;
    v11 = v6 + 1 == 0;
    if ( v6 != (char *)-1 )
      v11 = v6 == (char *)794;
    if ( !v11 )
      return 59;
    if ( (a3 & 0x10000) == 0 )
      return 60;
  }
  return 0;
}
