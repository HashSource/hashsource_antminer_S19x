int __fastcall sub_33AC8C(int result, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r4
  _DWORD *v5; // r5

  if ( result != a3 )
  {
    v3 = *(_DWORD **)(result + 4);
    v4 = *(_DWORD **)(a3 + 4);
    v5 = *(_DWORD **)(a2 + 4);
    *v4 = result;
    *v5 = a3;
    *v3 = a2;
    *(_DWORD *)(result + 4) = v4;
    result = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a3 + 4) = result;
    *(_DWORD *)(a2 + 4) = v3;
  }
  return result;
}
