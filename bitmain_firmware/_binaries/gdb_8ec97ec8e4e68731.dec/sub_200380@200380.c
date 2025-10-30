int __fastcall sub_200380(int a1)
{
  void *v2; // r5
  int v3; // r0
  void (__fastcall **v4)(int, unsigned int); // r6
  void *v5; // r7
  const char **v6; // r0
  const char *v7; // r8
  size_t v8; // r0
  int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r2
  int v12; // r4
  const char *v14; // r4
  int v15; // r0
  const char *v16; // r0
  const char **v17; // [sp+4h] [bp-4h] BYREF

  v2 = (void *)(a1 + 520);
  v3 = sub_16F654(a1);
  v4 = *(void (__fastcall ***)(int, unsigned int))((int (__fastcall *)(int, int))loc_16EC88)(v3, dword_4893A0);
  v5 = (void *)sub_29B910(v2);
  v4[8]((int)&v17, (unsigned int)v5);
  v6 = v17;
  if ( v17 )
  {
    *(_DWORD *)(a1 + 1036) = v17;
    v7 = *v6;
    v17 = 0;
    v8 = strlen(v7);
    if ( v8 >= 0x200 )
      sub_946E0("Shared library file name is too long.");
    memcpy(v2, v7, v8 + 1);
    v9 = sub_948C4(*(_DWORD *)(a1 + 1036), (void **)(a1 + 1048), (_DWORD *)(a1 + 1052));
    if ( v9 )
    {
      v14 = **(const char ***)(a1 + 1036);
      v15 = sub_2A6910(v9);
      v16 = (const char *)sub_2A6920(v15);
      sub_946E0("Can't find the file sections in `%s': %s", v14, v16);
    }
    v10 = *(_DWORD *)(a1 + 1048);
    v11 = *(_DWORD *)(a1 + 1052);
    if ( v10 < v11 )
    {
      do
      {
        (*v4)(a1, v10);
        if ( !*(_DWORD *)(a1 + 1056) && !*(_DWORD *)(a1 + 1060) && !strcmp(**(const char ***)(v10 + 8), ".text") )
        {
          *(_DWORD *)(a1 + 1056) = *(_DWORD *)v10;
          *(_DWORD *)(a1 + 1060) = *(_DWORD *)(v10 + 4);
        }
        v11 = *(_DWORD *)(a1 + 1052);
        v10 += 16;
      }
      while ( v11 > v10 );
      v10 = *(_DWORD *)(a1 + 1048);
    }
    sub_94948(a1, v10, v11);
    v12 = 1;
    if ( v17 )
      ((void (*)(void))loc_1625A8)();
  }
  else
  {
    v12 = 0;
  }
  if ( v5 )
    free(v5);
  return v12;
}
