int __fastcall sub_23DDAC(int result)
{
  int v1; // r3
  int v2; // r4

  v1 = *(_DWORD *)(result + 204);
  if ( v1 )
  {
    v2 = result;
    sub_242238(v1, result);
    result = sub_24220C(*(_DWORD *)(v2 + 204));
    *(_DWORD *)(v2 + 204) = 0;
  }
  return result;
}
