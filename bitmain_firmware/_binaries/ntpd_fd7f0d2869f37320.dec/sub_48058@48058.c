int __fastcall sub_48058(int a1, int a2)
{
  int v2; // r4
  int v4; // r1
  int result; // r0
  int v6; // [sp+0h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 84);
  v6 = 4;
  if ( ioctl(*(_DWORD *)(v2 + 28), 0x5417u, &v6) < 0 )
    sub_39C88(a2, 3);
  sub_6055C(v2 + 232);
  if ( write(*(_DWORD *)(v2 + 28), "T", 1u) != 1 )
    sub_39C88(a2, 3);
  ioctl(*(_DWORD *)(v2 + 28), 0x5416u, &v6);
  if ( *(_DWORD *)(v2 + 216) == *(_DWORD *)(v2 + 220) )
    return sub_39C88(a2, 1);
  v4 = *(_DWORD *)(v2 + 236);
  *(_DWORD *)(v2 + 224) = *(_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 228) = v4;
  sub_3A534(a2);
  result = sub_42D0C(a2 + 16, (const char *)(v2 + 56));
  ++*(_DWORD *)(v2 + 776);
  return result;
}
