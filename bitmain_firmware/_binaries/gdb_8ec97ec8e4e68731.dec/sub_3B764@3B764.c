int __fastcall sub_3B764(int result)
{
  int v1; // r3
  int v2; // r4

  v1 = *(_DWORD *)(result + 4);
  if ( v1 >= 0 )
  {
    v2 = result;
    result = close(v1);
    *(_DWORD *)(v2 + 4) = -1;
  }
  return result;
}
