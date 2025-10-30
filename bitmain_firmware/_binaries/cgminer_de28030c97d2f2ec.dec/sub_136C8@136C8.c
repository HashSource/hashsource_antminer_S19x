int __fastcall sub_136C8(int result, _DWORD *a2, int a3)
{
  int v3; // r0
  __int64 v4; // r0
  int v5; // r0
  int v6; // r0
  int v8; // [sp+Ch] [bp-10h]
  int i; // [sp+14h] [bp-8h]

  v8 = result;
  if ( result && a2 )
  {
    for ( i = 0; a2[2] > i; ++i )
    {
      if ( *(_DWORD *)(a2[4] + 4 * i) == a3 )
      {
        v3 = sub_67728(*(_DWORD *)(a2[3] + 4 * i));
        sub_6611C(v8, "status", v3);
        v4 = *(int *)(a2[4] + 4 * i);
        v5 = sub_67C3C(v4, HIDWORD(v4));
        sub_6611C(v8, "code", v5);
        v6 = sub_67728(*(_DWORD *)(a2[5] + 4 * i));
        return sub_6611C(v8, "msg", v6);
      }
    }
  }
  return result;
}
