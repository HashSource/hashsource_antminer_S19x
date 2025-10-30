int __fastcall sub_8A4B4(int a1)
{
  int v3; // [sp+8h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-10h] BYREF
  char *v5; // [sp+10h] [bp-Ch]
  char *s; // [sp+14h] [bp-8h]

  s = (char *)(a1 + 5137);
  if ( *(_BYTE *)(a1 + 5137) == 45 )
  {
    *(_DWORD *)(a1 + 9236) = 1;
    ++s;
  }
  else
  {
    if ( *s == 48 )
      *(_DWORD *)(a1 + 9240) = 1;
    *(_DWORD *)(a1 + 9236) = 0;
  }
  v3 = 0;
  v4 = 0;
  _isoc99_sscanf(s, "%ld.", &v4);
  v5 = strchr(s, 46);
  if ( v5 )
    _isoc99_sscanf(v5, ".%ld", &v3);
  *(_DWORD *)(a1 + 9248) = v4;
  *(_DWORD *)(a1 + 9244) = v3;
  return 0;
}
