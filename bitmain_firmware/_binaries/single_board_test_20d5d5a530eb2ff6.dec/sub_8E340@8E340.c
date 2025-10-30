int __fastcall sub_8E340(int result, int a2)
{
  int v2; // r3

  if ( result )
  {
    v2 = *(_DWORD *)(result + 40);
    *(_DWORD *)(result + 40) = a2;
    return v2;
  }
  return result;
}
