int __fastcall sub_26ED18(int a1)
{
  int *v1; // r3
  int v2; // r3
  void *v4; // r5
  int *v5; // r3
  int result; // r0

  v1 = *(int **)(a1 + 100);
  if ( !v1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
      return 0;
    goto LABEL_4;
  }
  v2 = *v1;
  if ( !v2 && (*(_BYTE *)(a1 + 4) & 2) != 0 )
  {
LABEL_4:
    v4 = sub_92E28();
    ((void (__fastcall *)(int))loc_26E00C)(a1);
    sub_92E40((int)v4);
    v5 = *(int **)(a1 + 100);
    if ( !v5 )
      return 0;
    result = *v5;
    if ( *v5 )
      return 1;
    return result;
  }
  result = v2;
  if ( v2 )
    return 1;
  return result;
}
