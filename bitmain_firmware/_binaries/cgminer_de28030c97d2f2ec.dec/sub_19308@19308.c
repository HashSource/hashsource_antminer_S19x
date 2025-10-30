int __fastcall sub_19308(int a1)
{
  int i; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  v5 = 0;
  sub_134EC(&stru_94188, "api_new.c", "ascdevice", 1279);
  for ( i = 0; i < dword_941A8; ++i )
  {
    if ( **(_DWORD **)(*(_DWORD *)(dword_94130 + 4 * i) + 4) == 2 )
      ++v5;
    if ( **(_DWORD **)(*(_DWORD *)(dword_94130 + 4 * i) + 4) == 3 )
      ++v5;
    if ( a1 + 1 == v5 )
    {
      sub_1361C(&stru_94188, "api_new.c", "ascdevice", 1292);
      return i;
    }
  }
  sub_1361C(&stru_94188, "api_new.c", "ascdevice", 1287);
  return -1;
}
