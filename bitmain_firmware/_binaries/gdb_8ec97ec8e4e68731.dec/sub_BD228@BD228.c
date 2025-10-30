int __fastcall sub_BD228(int result, int a2, int a3)
{
  int v3; // r2
  int v4; // r4

  v3 = *(_DWORD *)(*(_DWORD *)(a3 + 20) + 20);
  if ( v3 != 1 )
  {
    v4 = result;
    sub_C0B5C(result, a2, v3, 0);
    return sub_C09B8(v4, a2);
  }
  return result;
}
