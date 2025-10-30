int __fastcall sub_2ADEDC(int a1, _DWORD *a2, void *dest, int a4, __int64 a5, size_t n)
{
  int v7; // r8
  unsigned int v8; // r2
  bool v9; // cf
  int v11; // r6

  v7 = a2[5];
  if ( (v7 & 0x80) != 0 )
    goto LABEL_9;
  if ( (*(_BYTE *)(a1 + 40) & 0x18) == 0x10 || (v8 = a2[10]) == 0 )
    v8 = a2[9];
  v9 = v8 >= n;
  if ( v8 >= n )
    v9 = v8 >= (unsigned int)a5;
  if ( !v9 || v8 < a5 + n )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return 0;
  }
  if ( !n )
    return 1;
  if ( (v7 & 0x100) == 0 )
  {
LABEL_9:
    memset(dest, 0, n);
    return 1;
  }
  if ( (v7 & 0x4000) == 0 )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 160))();
  v11 = a2[27];
  if ( v11 )
  {
    memmove(dest, (const void *)(v11 + a5), n);
    return 1;
  }
  else
  {
    a2[5] = v7 & 0xFFFFBFFF;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
}
