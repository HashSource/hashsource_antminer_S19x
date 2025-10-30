int __fastcall sub_A823C(_DWORD *a1)
{
  int v1; // r3

  v1 = a1[1];
  if ( !v1 )
    v1 = *(_DWORD *)(*a1 + 4);
  return a1[2] + v1;
}
