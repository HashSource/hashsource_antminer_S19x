int sub_11EAE4()
{
  int v0; // r5
  int i; // r4
  int result; // r0

  v0 = dword_4872D8;
  for ( i = *(_DWORD *)(dword_4872D8 + 396); i; *(_DWORD *)(v0 + 396) = i )
  {
    i = *(_DWORD *)(*(_DWORD *)(i + 16) + 132);
    result = ((int (*)(void))loc_11E87C)();
  }
  return result;
}
