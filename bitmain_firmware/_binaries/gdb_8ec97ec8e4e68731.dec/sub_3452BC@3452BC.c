int __fastcall sub_3452BC(int *a1)
{
  int v1; // r3
  int v2; // r4

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 12) - 1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3451A4(a1);
    v1 = *a1;
  }
  return v1 + v2;
}
