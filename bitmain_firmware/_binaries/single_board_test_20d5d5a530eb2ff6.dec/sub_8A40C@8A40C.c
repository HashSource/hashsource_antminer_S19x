int __fastcall sub_8A40C(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  int v4; // r3
  int v5; // r4

  result = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 612);
  *a3 = 0;
  if ( result )
  {
    v4 = *(_DWORD *)(result + 12);
    if ( v4 )
    {
      v5 = *(_DWORD *)(result + 16);
      result = 1;
      *a2 = v4;
      *a3 = v5;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
