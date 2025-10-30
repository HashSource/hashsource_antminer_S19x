int __fastcall sub_C5BAC(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 28) = a2;
  if ( v2 )
    return sub_C6290(v2, a2);
  return result;
}
