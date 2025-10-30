bool __fastcall sub_47AD4(int a1)
{
  int v2; // r4
  int v3; // r5
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r2
  int v8; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = *(_DWORD *)(dword_530F00 + 4);
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", a1, 1);
    sub_3AF5C(4, s, 0, v8);
  }
  v3 = sub_26540();
  if ( v3 )
  {
    v4 = (unsigned __int8 *)(v2 + (a1 << 8));
    v5 = &v4[v3];
    v3 = 0;
    do
    {
      if ( *v4++ )
        ++v3;
    }
    while ( v4 != v5 );
  }
  return sub_26540() == v3;
}
