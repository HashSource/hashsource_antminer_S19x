int sub_19204()
{
  int i; // [sp+0h] [bp-Ch]
  int v2; // [sp+4h] [bp-8h]

  v2 = 0;
  sub_134EC(&stru_94188, "api_new.c", "numascs", 1266);
  for ( i = 0; i < dword_941A8; ++i )
  {
    if ( **(_DWORD **)(*(_DWORD *)(dword_94130 + 4 * i) + 4) == 2 )
      ++v2;
    if ( **(_DWORD **)(*(_DWORD *)(dword_94130 + 4 * i) + 4) == 3 )
      ++v2;
  }
  sub_1361C(&stru_94188, "api_new.c", "numascs", 1271);
  return v2;
}
