int __fastcall sub_1E7A08(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r8
  int v5; // r7
  _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF

  v2 = sub_16F654(a1);
  result = ((int (__fastcall *)(int))loc_1E2770)(v2);
  if ( *(_DWORD *)(dword_488C94 + 56) )
  {
    v4 = *(_DWORD *)(dword_488C94 + 408);
    v5 = *(_DWORD *)(v4 + 4 * (dword_46DB48 + 2));
    if ( v5 )
    {
      if ( *(_DWORD *)(a1 + 12) == ps_getpid_0(v5 + 4) )
      {
        sub_1F7D58(v5);
        *(_DWORD *)(v4 + 4 * (dword_46DB48 + 2)) = 0;
      }
    }
    v6[0] = a1;
    v6[1] = 0;
    return ((int (__fastcall *)(int, int (__fastcall *)(int, int, int, int *), _DWORD *))loc_1E7958)(
             dword_488CE4,
             sub_1E7884,
             v6);
  }
  return result;
}
