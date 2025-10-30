void __fastcall sub_1610FC(int a1, int a2)
{
  unsigned int v4; // r5
  size_t n; // r4
  void *v6; // r10
  __int64 v7; // r8
  int v8; // r3
  char *v9; // r4
  int v10; // r0
  const char *v11; // r0
  int v12; // r0
  const char *v13; // r0

  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 && !strncmp(*(const char **)a2, "load", 4u) )
  {
    v4 = *(_DWORD *)(a2 + 36);
    if ( v4 <= 0x100000 )
    {
      if ( !v4 )
        return;
      n = *(_DWORD *)(a2 + 36);
      v6 = sub_9836C(n);
    }
    else
    {
      n = 0x100000;
      v6 = sub_9836C(0x100000u);
    }
    v7 = 0;
    while ( 1 )
    {
      if ( n >= v4 )
        n = v4;
      if ( sub_230020(*(_DWORD *)(a2 + 28) + v7, v6, n) )
      {
        v9 = sub_988AC(n);
        v10 = sub_16F654(v9);
        v11 = (const char *)sub_25AC8C(v10, *(_DWORD *)(a2 + 28));
        sub_946B0("Memory read failed for corefile section, %s bytes at %s.", v9, v11);
        goto LABEL_13;
      }
      if ( !sub_2ADDE8(a1, a2, v6, v8, v7, SHIDWORD(v7), n) )
        break;
      v7 += n;
      v4 -= n;
      if ( !v4 )
        goto LABEL_13;
    }
    v12 = sub_2A6910(0);
    v13 = (const char *)sub_2A6920(v12);
    sub_946B0("Failed to write corefile contents (%s).", v13);
LABEL_13:
    sub_349260(v6);
  }
}
