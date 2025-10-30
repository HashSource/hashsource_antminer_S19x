void __fastcall sub_65394(int a1, int a2, int a3)
{
  int v5; // r0
  const char *v6; // r4
  size_t v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r9
  size_t v11; // r7
  unsigned int v12; // r10
  char *v13; // r8
  void *v14; // r6
  char *v15; // r11
  int v16; // r4
  __int64 v17; // kr00_8
  char *v18; // r3
  const void *v19; // r1
  unsigned int v20; // [sp+4h] [bp-18h]
  int v21; // [sp+8h] [bp-14h]
  int v22; // [sp+Ch] [bp-10h]
  int v23; // [sp+14h] [bp-8h] BYREF

  if ( (unsigned int)(a3 - 2) > 1 )
    sub_946E0("Usage: ADDR DATA [COUNT].");
  v5 = sub_14CB9C(*(_DWORD *)a2);
  v6 = *(const char **)(a2 + 4);
  v22 = v5;
  v7 = strlen(v6);
  v8 = sub_B894C(v7);
  v21 = ((int (__fastcall *)(int))loc_16EA14)(v8);
  sub_347674(v7, 2 * v21);
  v10 = v9;
  if ( v9 )
    sub_946E0("Hex-encoded '%s' must represent an integral number of addressable memory units.", v6);
  v11 = v7 >> 1;
  v20 = sub_347418(v11, v21);
  if ( a3 == 3 )
    v12 = strtoul(*(const char **)(a2 + 8), 0, 10);
  else
    v12 = v20;
  if ( v11 )
  {
    v13 = (char *)sub_9836C(v11);
    v15 = v13 - 1;
    do
    {
      if ( sscanf(v6, "%02x", &v23) != 1 )
        sub_946E0("Invalid argument");
      v6 += 2;
      *++v15 = v23;
    }
    while ( v15 != &v13[v11 - 1] );
  }
  else
  {
    v13 = 0;
  }
  if ( v12 > v20 )
  {
    v16 = v21 * v12;
    if ( v21 * v12 )
      v16 = sub_9836C(v21 * v12);
    v17 = sub_347674(v12, v20);
    if ( (_DWORD)v17 )
    {
      v18 = (char *)v16;
      do
      {
        ++v10;
        v18 = (char *)memcpy(v18, v13, v11) + v11;
      }
      while ( (_DWORD)v17 != v10 );
    }
    if ( HIDWORD(v17) )
    {
      v19 = v13;
      v14 = v13;
      v13 = (char *)v16;
      memcpy((void *)(v16 + v17 * v11), v19, HIDWORD(v17) * v21);
    }
    else
    {
      v14 = v13;
      v13 = (char *)v16;
    }
  }
  else
  {
    v14 = 0;
  }
  sub_FAB00(v22, v13, v12);
  if ( v13 )
    sub_339E64(v13);
  if ( v14 )
    sub_339E64(v14);
}
