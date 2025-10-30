int __fastcall sub_89E84(int result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r3

  *a2 = 0;
  v3 = *(_DWORD *)(result + 124);
  if ( v3 && (v4 = *(_DWORD *)(v3 + 832), (*a2 = v4) != 0) )
    *a3 = *(_DWORD *)(*(_DWORD *)(result + 124) + 836);
  else
    *a3 = 0;
  return result;
}
