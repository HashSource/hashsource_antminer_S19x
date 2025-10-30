int __fastcall sub_1F91A0(int *a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v6; // r9
  int i; // r6
  bool v8; // zf
  char s1[24]; // [sp+4h] [bp-18h] BYREF

  v2 = *a1;
  if ( *(__int16 *)(*a1 + 4) > 0 )
  {
    v3 = 0;
    v6 = 0;
    for ( i = 0; *(__int16 *)(v2 + 4) > i; ++i )
    {
      if ( sub_174F0C(*(_DWORD *)(v2 + 24) + v3) || (v8 = a2 == 1, a2 = 0, v8) )
      {
        v2 = *a1;
      }
      else
      {
        sub_93170(s1, 0x14u, "__%d", v6);
        v2 = *a1;
        ++v6;
        a2 = strcmp(s1, *(const char **)(*(_DWORD *)(*a1 + 24) + v3 + 16));
        if ( a2 )
          return 0;
      }
      v3 += 24;
    }
  }
  return 1;
}
