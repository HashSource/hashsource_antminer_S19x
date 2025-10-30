int __fastcall sub_12A97C(int result)
{
  int v1; // r4
  int v2; // r5

  v1 = *(_DWORD *)(result + 396);
  if ( v1 )
  {
    v2 = result;
    do
    {
      v1 = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 132);
      result = ((int (*)(void))loc_11E87C)();
      *(_DWORD *)(v2 + 396) = v1;
    }
    while ( v1 );
  }
  return result;
}
