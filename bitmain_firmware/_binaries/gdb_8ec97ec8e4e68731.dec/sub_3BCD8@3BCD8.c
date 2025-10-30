int __fastcall sub_3BCD8(int result)
{
  int v1; // r3
  int v2; // r4

  v1 = *(_DWORD *)(result + 4);
  if ( v1 != -1 )
  {
    v2 = result;
    result = close(v1);
    *(_DWORD *)(v2 + 4) = -1;
  }
  return result;
}
