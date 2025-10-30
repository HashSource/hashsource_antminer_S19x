int __fastcall sub_1FEC84(__int64 a1, _DWORD *a2, char a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r6
  _DWORD *v6; // r12
  int v7; // r2
  int v9; // r12
  int v10; // r2
  int v11; // r3
  int v12; // r7
  int v13; // r5
  int v14; // r0
  void *v15; // r0
  _DWORD *v16; // r0
  __int64 v17; // r0

  v4 = a1;
  v5 = (_DWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 4) = BYTE4(a1);
  *(_DWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = a1 + 16;
  v6 = a2 + 2;
  HIDWORD(a1) = a4;
  if ( (_DWORD *)*a2 == a2 + 2 )
  {
    v12 = a2[3];
    v13 = a2[4];
    v14 = a2[5];
    *(_DWORD *)(v4 + 16) = *v6;
    v5[1] = v12;
    v5[2] = v13;
    v5[3] = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 16) = a2[2];
  }
  *(_DWORD *)(v4 + 12) = a2[1];
  *a2 = v6;
  a2[1] = 0;
  *((_BYTE *)a2 + 8) = 0;
  *(_BYTE *)(v4 + 32) = a3;
  *(_DWORD *)(v4 + 36) = v4 + 44;
  LODWORD(a1) = a4 + 2;
  if ( (_DWORD *)*a4 == a4 + 2 )
    goto LABEL_14;
  *(_DWORD *)(v4 + 36) = *a4;
  *(_DWORD *)(v4 + 44) = a4[2];
  while ( 1 )
  {
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(HIDWORD(a1) + 4);
    *(_QWORD *)HIDWORD(a1) = (unsigned int)a1;
    *(_BYTE *)(HIDWORD(a1) + 8) = 0;
    v7 = *(_DWORD *)(v4 + 12);
    *(_BYTE *)(v4 + 92) = 0;
    *(_BYTE *)(v4 + 96) = 1;
    if ( !v7 )
      break;
    if ( !*(_BYTE *)(v4 + 32) )
      return v4;
    if ( *(_DWORD *)(v4 + 40) )
      goto LABEL_9;
    a1 = sub_94700(
           (int)"skip.c",
           136,
           "%s: Assertion `%s' failed.",
           "skiplist_entry::skiplist_entry(bool, std::__cxx11::string&&, bool, std::__cxx11::string&&, skiplist_entry::private_key)",
           "!m_function.empty ()");
LABEL_14:
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)(a1 + 8);
    v11 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 48) = v9;
    *(_DWORD *)(v4 + 52) = v10;
    *(_DWORD *)(v4 + 56) = v11;
  }
  if ( !*(_DWORD *)(v4 + 40) )
  {
    sub_94700(
      (int)"skip.c",
      129,
      "%s: Assertion `%s' failed.",
      "skiplist_entry::skiplist_entry(bool, std::__cxx11::string&&, bool, std::__cxx11::string&&, skiplist_entry::private_key)",
      "!m_file.empty () || !m_function.empty ()");
    if ( *(_BYTE *)(v4 + 92) )
    {
      *(_BYTE *)(v4 + 92) = 0;
      sub_16373C((regex_t *)(v4 + 60));
    }
    v15 = *(void **)(v4 + 36);
    if ( v15 != (void *)(v4 + 44) )
      sub_339E64(v15);
    v16 = *(_DWORD **)(v4 + 8);
    if ( v16 != v5 )
      sub_339E64(v16);
    sub_338FFC(v16);
  }
  if ( !*(_BYTE *)(v4 + 4) )
  {
    if ( *(_BYTE *)(v4 + 32) )
    {
LABEL_9:
      sub_1636B8((regex_t *)(v4 + 60), *(const char **)(v4 + 36), 9, "regexp");
      *(_BYTE *)(v4 + 92) = 1;
    }
    return v4;
  }
  v17 = sub_94700(
          (int)"skip.c",
          132,
          "%s: Assertion `%s' failed.",
          "skiplist_entry::skiplist_entry(bool, std::__cxx11::string&&, bool, std::__cxx11::string&&, skiplist_entry::private_key)",
          "!m_file.empty ()");
  return sub_1FEEA8(v17, HIDWORD(v17));
}
