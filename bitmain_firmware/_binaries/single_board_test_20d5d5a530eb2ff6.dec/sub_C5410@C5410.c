int __fastcall sub_C5410(int result)
{
  unsigned int *v1; // r2
  unsigned int v2; // r3
  int v3; // r3
  int v4; // r4
  void (*v5)(void); // r3
  int v6; // r3
  void (__fastcall *v7)(int); // r3

  if ( result )
  {
    v1 = (unsigned int *)(result + 32);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 - 1, v1) );
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 > 0 )
        return result;
    }
    else
    {
      __dmb(0xBu);
    }
    v4 = result;
    if ( *(_DWORD *)result )
    {
      v5 = *(void (**)(void))(*(_DWORD *)result + 12);
      if ( v5 )
        v5();
    }
    sub_CDDF8(*(_DWORD *)(v4 + 4));
    v6 = *(_DWORD *)(v4 + 12);
    if ( v6 )
    {
      v7 = *(void (__fastcall **)(int))(*(_DWORD *)v6 + 192);
      if ( v7 )
        v7(v4);
    }
    sub_DC2BC(8, v4, v4 + 40);
    sub_10C574(*(_DWORD *)(v4 + 44));
    sub_C64B8(*(_DWORD *)(v4 + 12));
    sub_C6490(*(_DWORD *)(v4 + 16));
    sub_B87C8(*(int **)(v4 + 20));
    return sub_E0758(v4, 48, (size_t)"crypto/ec/ec_key.c");
  }
  return result;
}
