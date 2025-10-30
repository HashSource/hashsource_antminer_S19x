void __fastcall sub_21F39C(int a1, int a2, int a3, char *a4, char *a5)
{
  int v5; // r9
  char *v6; // r12
  __int16 *v7; // lr
  int v8; // r4
  int v11; // r5
  int v14; // r2
  int v15; // r2

  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(char **)(v5 + 24);
  if ( (unsigned int)(*v6 - 3) <= 1 )
  {
    v7 = (*((_WORD *)v6 + 1) & 0x380) == 0x80 ? (__int16 *)*((_DWORD *)v6 + 7) : &word_3B4A2C;
    v8 = *v7;
    if ( v8 < *((__int16 *)v6 + 2) )
    {
      v11 = 24 * v8;
      do
      {
        ++v8;
        v14 = *((_DWORD *)v6 + 6) + v11;
        v11 += 24;
        v15 = *(_DWORD *)(v14 + 16);
        if ( v15 )
        {
          sub_21F094(a1, *(_BYTE *)(a2 + 20) & 0x1F, v15, a3, a4, a5);
          v6 = *(char **)(v5 + 24);
        }
      }
      while ( *((__int16 *)v6 + 2) > v8 );
    }
  }
}
