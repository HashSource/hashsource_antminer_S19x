int sub_18864()
{
  int i; // [sp+0h] [bp-Ch]
  int v2; // [sp+4h] [bp-8h]

  v2 = 0;
  sub_12D2C(&stru_92FF0, "api_new.c", "numascs", 1266);
  for ( i = 0; i < dword_93010; ++i )
  {
    if ( **(_DWORD **)(*(_DWORD *)(dword_92F98 + 4 * i) + 4) == 2 )
      ++v2;
    if ( **(_DWORD **)(*(_DWORD *)(dword_92F98 + 4 * i) + 4) == 3 )
      ++v2;
  }
  sub_12E64(&stru_92FF0, "api_new.c", "numascs", 1271);
  return v2;
}
