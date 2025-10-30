unsigned int __fastcall sub_2A9AAC(int a1, int a2, char *a3, unsigned int a4)
{
  int v8; // r4
  int v9; // r0
  int v10; // r3
  int v11; // r10
  size_t v12; // r8
  unsigned int v13; // r1
  _DWORD *v14; // r10
  char v15; // r3
  unsigned int v16; // r2
  unsigned int result; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r0
  char v21; // r3
  char v22; // r3
  unsigned int v23; // [sp+4h] [bp-10h] BYREF
  int v24; // [sp+8h] [bp-Ch] BYREF
  unsigned int v25; // [sp+Ch] [bp-8h] BYREF

  v8 = sub_2A81C4(a1, 0);
  v9 = sub_2A992C(a1, a2, &v24, (int *)&v25);
  if ( !v8 )
    v8 = 12;
  if ( !v9 )
  {
    v23 = v8 + sub_303B5C(a4);
    v20 = sub_2ACBF4(a1, v23);
    v14 = (_DWORD *)v20;
    if ( v20 )
    {
      if ( sub_303B40(v20 + v8, &v23, a3, a4) )
      {
        sub_2AD1F0(a1, v14);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        return 0;
      }
      v23 += v8;
      if ( v23 >= a4 )
      {
        sub_2AD1F0(a1, v14);
        v22 = *(_BYTE *)(a2 + 24);
        *(_DWORD *)(a2 + 108) = a3;
        *(_BYTE *)(a2 + 24) = v22 & 0xCF;
        return a4;
      }
      sub_2A7FB0(a1, v14, (_DWORD *)a2);
      goto LABEL_15;
    }
    return 0;
  }
  if ( v24 < 0 )
    sub_2A6BF0((int)"compress.c", 102, (int)"bfd_compress_section_contents");
  v11 = v25;
  if ( v24 )
    v12 = a4 - v24;
  else
    v12 = a4 - 12;
  if ( !v24 )
    v10 = 12;
  v13 = v12 + v8;
  if ( !v24 )
    v24 = v10;
  v23 = v12 + v8;
  if ( v13 <= v25 )
  {
    v14 = (_DWORD *)sub_2ACBF4(a1, v13);
    if ( v14 )
    {
      *(_DWORD *)(a2 + 36) = v25;
      sub_2A7FB0(a1, v14, (_DWORD *)a2);
      memmove((char *)v14 + v8, &a3[v24], v12);
LABEL_15:
      free(a3);
      v15 = *(_BYTE *)(a2 + 24);
      v16 = v23;
      result = a4;
      *(_DWORD *)(a2 + 108) = v14;
      *(_BYTE *)(a2 + 24) = v15 & 0xCF | 0x10;
      *(_DWORD *)(a2 + 36) = v16;
      return result;
    }
    return 0;
  }
  v18 = sub_2ACBF4(a1, v25);
  if ( !v18 )
    return 0;
  v19 = v24;
  *(_DWORD *)(a2 + 36) = v25;
  if ( sub_2A9594((int)&a3[v19], v12, v18, v11) )
  {
    free(a3);
    v21 = *(_BYTE *)(a2 + 24);
    result = v25;
    *(_DWORD *)(a2 + 108) = v18;
    *(_BYTE *)(a2 + 24) = v21 & 0xCF | 0x10;
  }
  else
  {
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    sub_2AD1F0(a1, v18);
    return 0;
  }
  return result;
}
