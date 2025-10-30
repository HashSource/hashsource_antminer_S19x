int __fastcall sub_3BF8(int a1)
{
  unsigned int v1; // r3
  _BOOL4 v2; // r1
  _DWORD *v3; // r4
  unsigned int v4; // lr
  int v6; // [sp+4h] [bp-8h]

  v1 = *(unsigned __int16 *)(a1 + 74);
  v2 = *(unsigned __int16 *)(a1 + 68) > v1;
  if ( v1 > 7 )
    v2 = 0;
  if ( v2 )
  {
    v3 = (_DWORD *)(a1 + 4 * v1);
    v4 = a1 + 8 * (v1 + 13);
    v3[19] = 0;
    v1 = (unsigned __int16)(v1 + 1);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    v3[43] = 0;
    v3[51] = 0;
    *(_WORD *)(a1 + 74) = v1;
  }
  if ( (int)v1 < sys_samples )
    return sub_39A8(a1);
  *(_DWORD *)(a1 + 60) = 0;
  ++complete_servers;
  return v6;
}
