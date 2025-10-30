void *__fastcall sub_7F1C0(void *s, int a2)
{
  int v3; // r4
  int v4; // r5
  void *v5; // r0
  int v6; // r6

  if ( a2 )
  {
    v3 = (int)s;
    v4 = 0;
    do
    {
      v5 = (void *)v3;
      ++v4;
      v6 = *(_DWORD *)(v3 + 28);
      v3 += 48;
      s = memset(v5, 0, 0x30u);
      *(_DWORD *)(v3 - 20) = v6;
    }
    while ( a2 != v4 );
  }
  return s;
}
