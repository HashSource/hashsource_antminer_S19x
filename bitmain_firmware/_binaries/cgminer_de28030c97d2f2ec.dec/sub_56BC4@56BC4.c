int __fastcall sub_56BC4(int a1)
{
  int v1; // r3
  int v4; // [sp+Ch] [bp-10h] BYREF
  _BYTE *i; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  for ( i = sub_55BD4(&v4); i; i = sub_55C4C((int)i, &v4) )
  {
    if ( *(_UNKNOWN **)(dword_954BC + 28 * v4 + 24) != &unk_954C4 )
    {
      v1 = v6++;
      *(_BYTE *)(a1 + v1) = *i;
    }
  }
  return v6;
}
