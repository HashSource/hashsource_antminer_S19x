int __fastcall sub_50B6C(int a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r0
  const char *v8; // r2
  int v10; // [sp+1Ch] [bp-8h]

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
  {
    sub_394A0((__int16 *)a2, 1);
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 232);
    v6 = *(_DWORD *)(v3 + 236);
    ++*(_DWORD *)(v3 + 776);
    *(_DWORD *)(v3 + 224) = v5;
    *(_DWORD *)(v3 + 228) = v6;
    sub_39D44(a2);
  }
  v7 = a2 + 16;
  v8 = (const char *)(v3 + 56);
  if ( (*(_DWORD *)(a2 + 76) & 0x10000) != 0 )
  {
    if ( !*(_BYTE *)(v3 + 56) )
      v8 = "(none)";
    sub_42050(v7, (int)"%s  %u %u %u %u %u %u", v8, v4[4], v4[5], v4[6], v4[7], v4[8], v4[9]);
  }
  else
  {
    sub_41F44(v7, (const char *)(v3 + 56));
  }
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = 0;
  return v10;
}
