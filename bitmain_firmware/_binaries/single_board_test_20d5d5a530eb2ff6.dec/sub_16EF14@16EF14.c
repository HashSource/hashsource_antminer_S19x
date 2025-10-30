int __fastcall sub_16EF14(int result)
{
  int v1; // r4

  if ( result )
  {
    v1 = *(_DWORD *)(result + 8) != 0;
    if ( *(_DWORD *)(result + 4) )
      v1 += sub_10C010(*(_DWORD *)(result + 4));
    return v1;
  }
  return result;
}
