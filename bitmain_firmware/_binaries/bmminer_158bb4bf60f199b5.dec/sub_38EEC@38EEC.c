void *__fastcall sub_38EEC(char *a1, int a2, int a3)
{
  void *result; // r0
  int v5; // r10
  char *v6; // r7
  int v7; // r8
  int v8; // r4
  int v9; // r5
  char *v10; // r9
  int v11; // r0
  char *v12; // r3
  char *v13; // r2
  int i; // r3
  int v15; // r1
  int v16; // r2
  char *v17; // r7
  int j; // r4
  int v19; // r0
  int v20; // r10
  int v23; // [sp+10h] [bp-A84h]
  _DWORD s[156]; // [sp+20h] [bp-A74h] BYREF
  char v25[2052]; // [sp+290h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v25, "Get asic grade by PM data:\n");
    sub_47AB4(3, v25, 0);
  }
  result = memset(s, 0, sizeof(s));
  v5 = 0;
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v5 + 4) != 1 )
    {
      if ( ++v5 == 16 )
        return result;
    }
    sub_2DF9C(v5, (int)s);
    v6 = a1;
    v7 = 0;
    v23 = v5;
    v8 = 0;
    v9 = a2 + 78 * v5;
    v10 = a1;
    do
    {
      v11 = v8 + 6;
      v12 = v6;
      do
      {
        v12 += 8;
        *(_DWORD *)&v6[8 * v8 + v7] = s[2 * v8];
        *((_DWORD *)v12 - 1) = v8++;
      }
      while ( v11 != v8 );
      qsort(v6, 6u, 8u, (__compar_fn_t)sub_36CA4);
      v13 = v6;
      for ( i = 0; i != 6; ++i )
      {
        v15 = *((_DWORD *)v13 + 1);
        v13 += 8;
        *(_BYTE *)(v9 + v15) = i;
      }
      v7 -= 48;
      v6 += 48;
    }
    while ( v7 != -624 );
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v25, "1 step result:\n");
      sub_47AB4(3, v25, 0);
    }
    sub_36CB4(v5, a2);
    do
    {
      v17 = v10;
      for ( j = 0; j != 6; ++j )
      {
        v19 = j;
        v20 = *((_DWORD *)v17 + 1);
        v17 += 8;
        *(_BYTE *)(v9 + v20) = sub_77070(v19, a3, v16);
      }
      v10 += 48;
    }
    while ( a1 + 624 != v10 );
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v25, 0x800u, "%d step result:\n", a3);
      sub_47AB4(3, v25, 0);
    }
    v5 = v23 + 1;
    result = (void *)sub_36CB4(v23, a2);
  }
  while ( v23 != 15 );
  return result;
}
