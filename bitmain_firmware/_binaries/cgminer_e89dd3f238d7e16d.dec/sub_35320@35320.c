int __fastcall sub_35320(int a1)
{
  char v4[16]; // [sp+Ch] [bp-810h] BYREF
  int v5; // [sp+80Ch] [bp-10h]
  int i; // [sp+810h] [bp-Ch]
  int v7; // [sp+814h] [bp-8h]

  v7 = 0;
  for ( i = 0; i < dword_90E90; ++i )
  {
    v5 = *(_DWORD *)(dword_90F34 + 4 * i);
    if ( a1 == *(_DWORD *)(v5 + 4) )
    {
      v7 = v5;
      break;
    }
  }
  if ( v7 )
    return v7;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(v4, 0x800u, "WTF No pool %d found!", a1);
    sub_1DB6C(3, v4, 0);
  }
  return *(_DWORD *)(dword_90F34 + 4 * a1);
}
