void __fastcall sub_325AB0(int a1)
{
  FILE *v2; // r0
  FILE *v3; // r0
  int v4; // r5
  void *v5; // r0
  void (__fastcall *v6)(int); // r3
  int v7; // [sp+0h] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+4h] [bp-8h] BYREF

  if ( *(int *)(a1 + 12) > 0 )
    (*(void (**)(void))(*(_DWORD *)(a1 + 68) + 12))();
  if ( *(int *)(a1 + 24) > 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 68) + 12))(a1);
  v2 = *(FILE **)(a1 + 52);
  if ( v2 )
    fclose(v2);
  v3 = *(FILE **)(a1 + 56);
  if ( v3 )
    fclose(v3);
  if ( !*(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)a1 &= ~1u;
    sub_324F30((int *)a1, 1, (int)&v7, (int)v8);
  }
  if ( *(_DWORD *)(a1 + 20) )
    free(*(void **)(a1 + 16));
  free(*(void **)(a1 + 32));
  free(*(void **)(a1 + 36));
  free(*(void **)(a1 + 40));
  if ( *(int *)(a1 + 60) > 0 )
  {
    v4 = 0;
    do
    {
      remove(*(const char **)(*(_DWORD *)(a1 + 64) + 4 * v4));
      v5 = *(void **)(*(_DWORD *)(a1 + 64) + 4 * v4++);
      free(v5);
    }
    while ( *(_DWORD *)(a1 + 60) > v4 );
    free(*(void **)(a1 + 64));
  }
  v6 = *(void (__fastcall **)(int))(*(_DWORD *)(a1 + 68) + 32);
  if ( v6 )
    v6(a1);
  free((void *)a1);
}
