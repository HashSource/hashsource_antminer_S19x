int __fastcall sub_B70E8(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r3
  int v4; // r2

  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(result + 40);
    sub_B6ECC(result, 7, 0, result);
    v3 = *(_DWORD *)(v1 + 44);
    if ( v3 )
      *(_DWORD *)(v3 + 40) = *(_DWORD *)(v1 + 40);
    v4 = *(_DWORD *)(v1 + 40);
    if ( v4 )
      *(_DWORD *)(v4 + 44) = v3;
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    return v2;
  }
  return result;
}
