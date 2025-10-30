int __fastcall sub_99BC0(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int (__fastcall *v5)(int, _DWORD); // r3
  int v6; // r0

  result = sub_99170((_DWORD *)a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1340) == -1 )
      return !*(_DWORD *)(a1 + 1488) || sub_8C28C((_DWORD *)a1, v3, v4) || !(*(_BYTE *)(a1 + 1196) & 1);
    v4 = *(_DWORD *)(a1 + 1232);
    v5 = *(int (__fastcall **)(int, _DWORD))(v4 + 336);
    if ( !v5 )
      return !*(_DWORD *)(a1 + 1488) || sub_8C28C((_DWORD *)a1, v3, v4) || !(*(_BYTE *)(a1 + 1196) & 1);
    v6 = v5(a1, *(_DWORD *)(v4 + 340));
    if ( !v6 )
    {
      sub_95494((_DWORD *)a1, 113, 442, 328, (int)"ssl/statem/statem_clnt.c", 2836);
      return 0;
    }
    if ( v6 < 0 )
    {
      sub_95494((_DWORD *)a1, 80, 442, 294, (int)"ssl/statem/statem_clnt.c", 2842);
      return 0;
    }
    else
    {
      return !*(_DWORD *)(a1 + 1488) || sub_8C28C((_DWORD *)a1, v3, v4) || !(*(_BYTE *)(a1 + 1196) & 1);
    }
  }
  return result;
}
