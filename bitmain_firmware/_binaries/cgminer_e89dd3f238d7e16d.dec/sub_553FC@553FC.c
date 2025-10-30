int __fastcall sub_553FC(int result, int a2)
{
  int v3; // [sp+4h] [bp-30h]
  _DWORD v4[7]; // [sp+Ch] [bp-28h] BYREF
  int v5; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  v3 = result;
  v5 = dword_9431C;
  if ( a2 )
  {
    v4[0] = 0;
    v4[1] = 8;
    memset(&v4[2], 0, 16);
    v4[6] = a2;
    result = sub_552CC(v4);
  }
  for ( i = 0; *(_DWORD *)(v3 + 28 * i + 4) != 16; ++i )
  {
    if ( *(_DWORD *)(v3 + 28 * i + 4) == 8 )
    {
      result = sub_553FC(*(_DWORD *)(v3 + 28 * i), *(_DWORD *)(v3 + 28 * i + 24));
    }
    else
    {
      sub_5506C((const char **)(v3 + 28 * i));
      result = sub_552CC((_DWORD *)(v3 + 28 * i));
    }
  }
  if ( a2 )
  {
    result = dword_94324;
    *(_DWORD *)(dword_94324 + 28 * v5 + 20) = dword_9431C - v5;
  }
  return result;
}
