size_t *__fastcall sub_2ACC78(int a1)
{
  size_t *v2; // r4
  int v3; // r0
  int v4; // r6
  unsigned int v5; // r9
  _BYTE *v6; // r6
  int v7; // r10
  unsigned int v8; // r4
  int v9; // r0
  size_t v10; // r8
  int v11; // r0
  unsigned int v12; // r7
  size_t *v13; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    sub_2A6BBC("opncls.c", 1821);
  v2 = *(size_t **)(a1 + 172);
  if ( v2 && *v2 )
    return v2;
  v3 = sub_2AD7AC(a1, ".note.gnu.build-id");
  v4 = v3;
  if ( !v3 )
  {
    v2 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(16);
    return v2;
  }
  if ( *(_DWORD *)(v3 + 36) <= 0x23u )
  {
    v2 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return v2;
  }
  v2 = (size_t *)sub_2ADFDC(a1, v3, &ptr);
  if ( !v2 )
  {
    if ( !ptr )
      return 0;
LABEL_22:
    free(ptr);
    return v2;
  }
  v5 = *(_DWORD *)(v4 + 36);
  if ( v5 <= 0xC )
  {
    v2 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    free(ptr);
    return v2;
  }
  v6 = ptr;
  v7 = (*(int (__fastcall **)(char *))(*(_DWORD *)(a1 + 4) + 76))((char *)ptr + 8);
  v8 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a1 + 4) + 76))(v6);
  v9 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a1 + 4) + 76))(v6 + 4);
  v10 = v9;
  if ( v8 <= 0xFFFFFFFC )
  {
    v11 = v9 == 0;
    v12 = (v8 + 3) & 0xFFFFFFFC;
    if ( v7 != 3 )
      v11 |= 1u;
    if ( v8 != 4 )
      v11 |= 1u;
    if ( !v11 && v6[12] == 71 && v6[13] == 78 && v6[14] == 85 && !v6[15] && v5 >= v10 + 16 )
    {
      v13 = (size_t *)sub_2ACBF4(a1, v10 + 8);
      v2 = v13;
      if ( v13 )
      {
        *v13 = v10;
        memcpy(v13 + 1, &v6[v12 + 12], v10);
        *(_DWORD *)(a1 + 172) = v2;
      }
      goto LABEL_22;
    }
  }
  free(ptr);
  ((void (__fastcall *)(int))loc_2A6C48)(5);
  return 0;
}
