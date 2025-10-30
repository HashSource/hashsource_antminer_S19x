int __fastcall sub_12354(int result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r3

  v3 = *(_DWORD **)a2;
  if ( *(_DWORD *)a2 == result + 12 && v3 == *(_DWORD **)(a2 + 4) )
  {
    v4 = *(_DWORD *)(result + 12);
    a3[1] = v3;
    *a3 = v4;
    v5 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = a3;
    *(_DWORD *)(v5 + 4) = a3;
    *(_DWORD *)(a2 + 4) = a3;
    *(_DWORD *)a2 = a3;
  }
  else
  {
    *a3 = *v3;
    a3[1] = v3;
    result = *v3;
    *v3 = a3;
    *(_DWORD *)(result + 4) = a3;
    *(_DWORD *)a2 = a3;
  }
  return result;
}
