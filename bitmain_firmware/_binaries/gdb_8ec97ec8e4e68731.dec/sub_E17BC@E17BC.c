_DWORD *__fastcall sub_E17BC(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // r2
  int v6; // r3

  v2 = *(_DWORD *)(a2 + 28);
  if ( v2 == *(_DWORD *)(a2 + 24) )
    sub_946E0("No trace.");
  v3 = *(_DWORD *)(v2 - 28);
  v4 = *(_DWORD *)(v2 - 32);
  v5 = *(_DWORD *)(v2 - 12);
  *result = a2;
  v6 = (v3 - v4) >> 4;
  if ( v6 )
    --v6;
  result[2] = v6;
  result[1] = v5 - 1;
  return result;
}
