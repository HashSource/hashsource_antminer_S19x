int __fastcall sub_5604C(int result, int a2)
{
  int v3; // [sp+4h] [bp-30h]
  _DWORD v4[7]; // [sp+Ch] [bp-28h] BYREF
  int v5; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  v3 = result;
  v5 = dword_954B4;
  if ( a2 )
  {
    v4[0] = 0;
    v4[1] = 8;
    memset(&v4[2], 0, 16);
    v4[6] = a2;
    result = sub_55F28(v4);
  }
  for ( i = 0; *(_DWORD *)(v3 + 28 * i + 4) != 16; ++i )
  {
    if ( *(_DWORD *)(v3 + 28 * i + 4) == 8 )
    {
      result = sub_5604C(*(_DWORD *)(v3 + 28 * i), *(_DWORD *)(v3 + 28 * i + 24));
    }
    else
    {
      sub_55CCC((const char **)(v3 + 28 * i));
      result = sub_55F28((_DWORD *)(v3 + 28 * i));
    }
  }
  if ( a2 )
    *(_DWORD *)(dword_954BC + 28 * v5 + 20) = dword_954B4 - v5;
  return result;
}
