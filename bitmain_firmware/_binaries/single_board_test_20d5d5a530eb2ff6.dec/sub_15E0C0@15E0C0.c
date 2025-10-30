int __fastcall sub_15E0C0(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int result; // r0

  v2 = (_DWORD *)*a1;
  result = *(_DWORD *)*a1 - **(_DWORD **)a2;
  if ( !result )
    return v2[1] - *(_DWORD *)(*(_DWORD *)a2 + 4);
  return result;
}
