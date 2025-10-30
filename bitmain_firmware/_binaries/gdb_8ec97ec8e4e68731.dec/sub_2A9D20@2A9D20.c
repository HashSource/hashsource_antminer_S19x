int __fastcall sub_2A9D20(int a1, int a2)
{
  int v4; // r0
  size_t n; // r2
  int v6; // r4
  int v8; // r3
  int v9; // r12
  char v10; // r3
  int v11; // r2
  int v12; // [sp+14h] [bp-1Ch] BYREF
  char s1[4]; // [sp+18h] [bp-18h] BYREF
  _BYTE v14[20]; // [sp+1Ch] [bp-14h] BYREF

  v4 = sub_2A81C4(a1, a2);
  if ( v4 > 24 )
    sub_2A6BF0((int)"compress.c", 486, (int)"bfd_init_section_decompress_status");
  if ( v4 )
    n = v4;
  else
    n = 12;
  v6 = v4;
  if ( *(_DWORD *)(a2 + 40)
    || *(_DWORD *)(a2 + 108)
    || (v8 = *(unsigned __int8 *)(a2 + 24), (v8 & 0x30) != 0)
    || !sub_2ADEDC(a1, a2, s1, v8, 0, 0, n) )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    if ( v6 )
    {
      if ( sub_2A80EC(a1, (int)s1, a2, &v12) )
      {
        v9 = v12;
        goto LABEL_14;
      }
    }
    else if ( !strncmp(s1, "ZLIB", 4u) )
    {
      v9 = sub_2AB614(v14);
LABEL_14:
      v10 = *(_BYTE *)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = v9;
      *(_BYTE *)(a2 + 24) = v10 & 0xCF | 0x20;
      *(_DWORD *)(a2 + 44) = v11;
      return 1;
    }
    ((void (__fastcall *)(int))loc_2A6C48)(3);
    return 0;
  }
}
