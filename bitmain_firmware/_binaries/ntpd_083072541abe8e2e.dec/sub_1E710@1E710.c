char *__fastcall sub_1E710(unsigned __int16 *a1, int a2)
{
  int v4; // r5
  unsigned __int16 *v5; // r4
  char *v6; // r3
  int v8; // r2
  int v9; // r0
  char *v10; // [sp+4h] [bp-10h]

  v4 = 0;
  v5 = (unsigned __int16 *)&ctl_traps;
  v6 = (char *)&unk_10819C;
  while ( 1 )
  {
    if ( (v5[25] & 1) == 0 )
      goto LABEL_4;
    if ( a1[1] != v5[1] )
      goto LABEL_4;
    v8 = *v5;
    if ( v8 != *a1 )
      goto LABEL_4;
    if ( v8 == 2 )
    {
      if ( *((_DWORD *)a1 + 1) != *((_DWORD *)v5 + 1) )
        goto LABEL_4;
    }
    else
    {
      v10 = v6;
      v9 = memcmp(a1 + 4, &v6[52 * v4], 0x10u);
      v6 = v10;
      if ( v9 || *((_DWORD *)a1 + 6) != *((_DWORD *)v5 + 6) )
        goto LABEL_4;
    }
    if ( *((_DWORD *)v5 + 7) == a2 )
      return (char *)&ctl_traps + 52 * v4;
LABEL_4:
    ++v4;
    v5 += 26;
    if ( v4 == 3 )
      return 0;
  }
}
