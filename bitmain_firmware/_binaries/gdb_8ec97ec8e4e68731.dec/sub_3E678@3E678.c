int __fastcall sub_3E678(int *a1, int *a2)
{
  int v2; // r5
  int v3; // r4
  int result; // r0
  int v5; // r2
  int v6; // r3

  v2 = *a1;
  v3 = *a2;
  result = strcmp(*(const char **)(*a1 + 12), *(const char **)(*a2 + 12));
  if ( !result )
  {
    v5 = *(_DWORD *)(v2 + 4);
    v6 = *(_DWORD *)(v3 + 4);
    if ( v5 > v6 )
      return 1 - (v5 - v6);
    else
      return v6 - v5;
  }
  return result;
}
