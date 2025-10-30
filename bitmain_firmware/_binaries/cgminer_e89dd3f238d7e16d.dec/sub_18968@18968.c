int __fastcall sub_18968(int a1)
{
  int i; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  v5 = 0;
  sub_12D2C(&stru_92FF0, "api_new.c", "ascdevice", 1279);
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_93010 )
    {
      sub_12E64(&stru_92FF0, "api_new.c", "ascdevice", 1287);
      return -1;
    }
    if ( **(_DWORD **)(*(_DWORD *)(dword_92F98 + 4 * i) + 4) == 2 )
      ++v5;
    if ( **(_DWORD **)(*(_DWORD *)(dword_92F98 + 4 * i) + 4) == 3 )
      ++v5;
    if ( v5 == a1 + 1 )
      break;
  }
  sub_12E64(&stru_92FF0, "api_new.c", "ascdevice", 1292);
  return i;
}
