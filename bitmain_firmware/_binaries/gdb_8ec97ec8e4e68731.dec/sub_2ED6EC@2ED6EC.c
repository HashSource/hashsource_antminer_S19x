int __fastcall sub_2ED6EC(int a1, int a2, int (__fastcall *a3)(int, int, int, int, int), _DWORD *a4)
{
  char *i; // r4
  int v7; // r3
  int result; // r0
  unsigned int v9; // [sp+Ch] [bp-4h] BYREF

  v9 = 0;
  for ( i = (char *)sub_2ED3CC(a1, a2, a3, a4, &v9); i; i = sub_2AD7CC(*((_DWORD *)i + 37), (const char **)i) )
  {
    if ( (i[24] & 8) == 0 )
    {
      v7 = *((_DWORD *)i + 37);
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4) != 5 || (*(_DWORD *)(v7 + 40) & 0x800) != 0 )
      {
        i[24] |= 8u;
      }
      else
      {
        result = sub_2ED50C(a1, (int)i, (int)a3);
        if ( !result )
          return result;
      }
    }
    if ( !v9 )
      break;
  }
  return 1;
}
