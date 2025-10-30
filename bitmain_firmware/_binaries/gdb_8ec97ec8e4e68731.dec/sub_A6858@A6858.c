int __fastcall sub_A6858(int *a1, int a2)
{
  int v2; // r3
  int v5; // [sp+4h] [bp-4h] BYREF

  v2 = a2;
  v5 = 0;
  if ( a2 )
    v2 = *(_DWORD *)sub_1780B4(*(_DWORD *)(*a1 + 4));
  return sub_A5918(a1, &v5, 1, v2);
}
