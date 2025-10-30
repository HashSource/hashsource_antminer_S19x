void __fastcall sub_6E68C(int a1, int a2)
{
  int v2; // r7
  int v3; // r9
  int v5; // r4
  int v6; // r5
  void *v7; // r0
  void *v8; // r3
  void *ptr; // [sp+0h] [bp-14h] BYREF
  _BYTE v10[4]; // [sp+4h] [bp-10h] BYREF
  void *v11; // [sp+8h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 84) = 1;
  if ( v2 != v3 )
  {
    v5 = v2;
    v6 = 0;
    do
    {
      sub_1C371C(v10, 10, off_46D5A4[0], a2);
      ((void (__fastcall *)(int, _BYTE *, int))loc_16D4A4)(a2, v10, v6);
      if ( *(_DWORD *)(v2 + 32 * v6) )
      {
        sub_1C37BC(v10, 52);
        sub_1C38F4(v10, *(_DWORD *)(v2 + 32 * v6));
        sub_1C37BC(v10, 52);
      }
      sub_1C375C(&ptr, v10);
      v7 = ptr;
      ptr = 0;
      v8 = *(void **)(v5 + 28);
      *(_DWORD *)(v5 + 28) = v7;
      if ( v8 )
      {
        free(v8);
        if ( ptr )
          free(ptr);
        v7 = *(void **)(v5 + 28);
      }
      sub_1C3EC0(v7);
      ++v6;
      if ( v11 )
        free(v11);
      v5 += 32;
    }
    while ( v3 != v5 );
  }
}
