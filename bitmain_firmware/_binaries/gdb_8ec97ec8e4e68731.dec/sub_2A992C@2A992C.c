int __fastcall sub_2A992C(int a1, int a2, int *a3, int *a4)
{
  int v8; // r7
  signed int n; // r0
  int v10; // r5
  int v11; // r3
  int v12; // r3
  bool v13; // zf
  int result; // r0
  unsigned int v15; // r3
  int v16; // r0
  char s1[4]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v18[24]; // [sp+14h] [bp-18h] BYREF

  v8 = (*(unsigned __int8 *)(a2 + 24) >> 4) & 3;
  n = sub_2A81C4(a1, a2);
  if ( n > 24 )
    sub_2A6BF0((int)"compress.c", 390, (int)"bfd_is_section_compressed_with_header");
  v10 = n;
  v11 = *(unsigned __int8 *)(a2 + 24);
  if ( n )
  {
    v12 = v11 & 0xCF;
    *(_BYTE *)(a2 + 24) = v12;
    if ( sub_2ADEDC(a1, a2, s1, v12, 0, 0, n) )
    {
      *a4 = *(_DWORD *)(a2 + 36);
      v13 = sub_2A80EC(a1, (int)s1, a2, a4) == 0;
      result = 1;
      if ( v13 )
        v10 = -1;
      goto LABEL_6;
    }
LABEL_13:
    result = 0;
    *a4 = *(_DWORD *)(a2 + 36);
    goto LABEL_6;
  }
  v15 = v11 & 0xFFFFFFCF;
  *(_BYTE *)(a2 + 24) = v15;
  if ( !sub_2ADEDC(a1, a2, s1, v15, 0, 0, 0xCu) )
    goto LABEL_13;
  v16 = strncmp(s1, "ZLIB", 4u);
  *a4 = *(_DWORD *)(a2 + 36);
  if ( v16 || (v10 = strcmp(*(const char **)a2, ".debug_str")) == 0 && (word_438898[v18[0]] & 0x10) != 0 )
  {
    result = 0;
  }
  else
  {
    v10 = 0;
    *a4 = sub_2AB614(v18);
    result = 1;
  }
LABEL_6:
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0xCF | (16 * (v8 & 3));
  *a3 = v10;
  return result;
}
