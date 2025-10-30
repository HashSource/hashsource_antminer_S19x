void __fastcall sub_54CE8(const char **a1, int a2, _DWORD *a3)
{
  size_t v3; // r9
  unsigned int v4; // r6
  size_t n; // r3
  unsigned int v6; // r4
  size_t v7; // r8
  size_t v8; // r12
  char v9; // lr
  unsigned int v10; // r7
  int v12; // lr
  char *v15; // r11
  int v16; // r0
  int v17; // r0
  const char *v18; // r8
  int v19; // r0
  const char *v20; // r0
  int v21; // r0
  const char *v22; // r0
  int v23; // r0
  const char *v24; // r4
  int v25; // r0
  const char *v26; // r0
  size_t v27; // [sp+14h] [bp-2Ch]

  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 28);
    n = *(_DWORD *)(a2 + 36);
    v6 = a3[1];
    v7 = v4 + n;
    if ( v6 >= v4 + n )
      goto LABEL_33;
    v8 = a3[2];
    v9 = v8;
    if ( v8 )
      v9 = 1;
    v10 = v8 <= v4 && v9 & 1;
    if ( v10 )
    {
LABEL_33:
      sub_259F10("skipping section %s...\n", *(const char **)a2);
    }
    else
    {
      if ( v6 <= v4 )
        v3 = *(_DWORD *)(a2 + 36);
      else
        v10 = v6 - v4;
      if ( v6 > v4 )
        v3 = n - v10;
      if ( v8 < v7 )
        v12 = v9 & 1;
      else
        v12 = 0;
      if ( v12 )
        v8 -= v7;
      if ( v12 )
        v3 += v8;
      if ( n )
      {
        v27 = *(_DWORD *)(a2 + 36);
        v23 = sub_9836C(v27);
        n = v27;
        v15 = (char *)v23;
      }
      else
      {
        v15 = 0;
      }
      if ( !sub_2ADEDC((int)a1, a2, v15, n, 0, 0, n) )
      {
        v24 = *a1;
        v25 = sub_2A6910();
        v26 = (const char *)sub_2A6920(v25);
        sub_946E0("Failed to read bfd file %s: '%s'.", v24, v26);
      }
      v16 = sub_259F10("Restoring section %s (0x%lx to 0x%lx)", *(const char **)a2, v4, v7);
      if ( *a3 || a3[1] || a3[2] )
      {
        v17 = sub_16F654(v16);
        v18 = (const char *)sub_25AC8C(v17, v10 + v4 + *a3);
        v19 = sub_16F654(v18);
        v20 = (const char *)sub_25AC8C(v19, v10 + v4 + *a3 + v3);
        sub_259F10(" into memory (%s to %s)\n", v18, v20);
      }
      else
      {
        sub_259B34(&word_356638);
      }
      v21 = sub_230484(v4 + *a3 + v10, &v15[v10], v3);
      if ( v21 )
      {
        v22 = (const char *)sub_6FF98(v21);
        sub_946B0("restore: memory write failed (%s).", v22);
      }
      if ( v15 )
        sub_349260(v15);
    }
  }
}
