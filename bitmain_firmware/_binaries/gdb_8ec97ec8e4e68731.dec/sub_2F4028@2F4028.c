int __fastcall sub_2F4028(int a1, int a2, int a3, void *src)
{
  int v5; // r0
  void *v7; // r7
  int v8; // r2
  _DWORD *v10; // r8
  int result; // r0
  unsigned int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r10
  unsigned int v15; // r5
  bool v16; // cc
  unsigned int v17; // r2
  unsigned int v18; // r7
  int v19; // r2
  int v20; // r5
  int (__fastcall *v21)(int); // r3
  void (__fastcall *v22)(int, _BYTE *); // r5
  int v23; // r0
  __int64 v24; // [sp+0h] [bp-18h]
  _BYTE srca[4]; // [sp+10h] [bp-8h] BYREF
  _BYTE v26[4]; // [sp+14h] [bp-4h] BYREF

  v5 = *(_DWORD *)(a3 + 40);
  v7 = src;
  v8 = *(_DWORD *)(a3 + 140);
  if ( !v5 )
    src = *(void **)(a3 + 36);
  v10 = *(_DWORD **)(v8 + 136);
  if ( !v5 )
    *(_DWORD *)(a3 + 40) = src;
  if ( (*(_WORD *)(a3 + 24) & 0x380) != 0x300 )
    sub_2A6BBC("elf-eh-frame.c", 1845);
  if ( (*(_DWORD *)(a3 + 20) & 0x8000) != 0 || (v10[5] & 0x8000) != 0 )
    return 1;
  result = sub_2ADDE8(a1, *(_DWORD **)(a3 + 60), v7, 0, *(unsigned int *)(a3 + 56), *(_DWORD *)(a3 + 40));
  if ( result )
  {
    v12 = (*(int (__fastcall **)(void *))(*(_DWORD *)(a1 + 4) + 44))(v7);
    v13 = *(_DWORD *)(a3 + 40);
    v14 = v12;
    if ( v13 > 8 )
    {
      v15 = 8;
      while ( 1 )
      {
        v12 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(a1 + 4) + 44))((unsigned int)v7 + v15) + v15;
        v15 += 8;
        v16 = v12 > v14;
        v14 = v12;
        if ( !v16 )
          break;
        v13 = *(_DWORD *)(a3 + 40);
        if ( v13 <= v15 )
          goto LABEL_17;
      }
      sub_2A6A5C("%B: %A not in order", *(_DWORD *)(a3 + 148), a3);
      return 0;
    }
LABEL_17:
    v17 = ((v10[14] + v10[9] + *(_DWORD *)(v10[15] + 28)) & 0xFFFFFFFE)
        - (*(_DWORD *)(*(_DWORD *)(a3 + 60) + 28)
         + *(_DWORD *)(a3 + 56));
    v18 = v17 - v13;
    if ( ((v17 - v13) & 1) != 0 )
    {
      sub_2A6A5C("%B: %A invalid input section size", *(_DWORD *)(a3 + 148));
      goto LABEL_27;
    }
    if ( v17 <= v12 )
    {
      sub_2A6A5C("%B: %A points past end of text section", *(_DWORD *)(a3 + 148));
LABEL_27:
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return 0;
    }
    v19 = *(_DWORD *)(a3 + 36);
    if ( v19 == v13 )
      return 1;
    v20 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
    if ( v19 != v13 + 8 )
      sub_2A6BBC("elf-eh-frame.c", 1898);
    if ( !*(_DWORD *)(v20 + 448) )
      sub_2A6BBC("elf-eh-frame.c", 1900);
    (*(void (__fastcall **)(unsigned int, _BYTE *))(*(_DWORD *)(a1 + 4) + 48))(v18, srca);
    v21 = *(int (__fastcall **)(int))(v20 + 448);
    v22 = *(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a1 + 4) + 48);
    v23 = v21(a2);
    v22(v23, v26);
    v24 = (unsigned int)(*(_DWORD *)(a3 + 56) + *(_DWORD *)(a3 + 40));
    return sub_2ADDE8(a1, *(_DWORD **)(a3 + 60), srca, v24, v24, 8u);
  }
  return result;
}
