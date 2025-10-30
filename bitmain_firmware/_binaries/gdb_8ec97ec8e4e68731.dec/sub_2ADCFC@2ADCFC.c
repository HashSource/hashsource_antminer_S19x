int __fastcall sub_2ADCFC(int result, int (__fastcall *a2)(int, int, int), int a3)
{
  int v3; // r6
  int v4; // r4
  int v5; // r5

  v3 = result;
  v4 = *(_DWORD *)(result + 100);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      ++v5;
      result = a2(v3, v4, a3);
      v4 = *(_DWORD *)(v4 + 12);
    }
    while ( v4 );
  }
  else
  {
    v5 = 0;
  }
  if ( *(_DWORD *)(v3 + 108) != v5 )
    sub_2A6BF0((int)"section.c", 1400, (int)"bfd_map_over_sections");
  return result;
}
