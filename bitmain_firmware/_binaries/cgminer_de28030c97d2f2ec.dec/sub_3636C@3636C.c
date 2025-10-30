int __fastcall sub_3636C(int a1)
{
  char v4[16]; // [sp+Ch] [bp-810h] BYREF
  int v5; // [sp+80Ch] [bp-10h]
  int i; // [sp+810h] [bp-Ch]
  int v7; // [sp+814h] [bp-8h]

  v7 = 0;
  for ( i = 0; i < dword_92028; ++i )
  {
    v5 = *(_DWORD *)(dword_920CC + 4 * i);
    if ( *(_DWORD *)(v5 + 4) == a1 )
    {
      v7 = v5;
      break;
    }
  }
  if ( v7 )
    return v7;
  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(v4, 0x800u, "WTF No pool %d found!", a1);
    sub_1E4EC(3, v4, 0);
  }
  return *(_DWORD *)(dword_920CC + 4 * a1);
}
