int __fastcall sub_98B60(int a1, int a2, signed int a3, int a4, int a5, int a6)
{
  char *v7; // r4
  bool v8; // cc
  int v9; // r2
  char *v10; // r7
  char *v11; // r4
  signed int v12; // r0
  signed int v13; // r6
  signed int v14; // r2
  char *v15; // r5
  __int64 v17; // r0
  int v18; // r2
  int v19; // r3

  v7 = (char *)(dword_475844 + 1);
  v8 = dword_475844 + 1 <= 15;
  if ( dword_475844 + 1 > 15 )
    v9 = 0;
  else
    v9 = 50;
  if ( dword_475844 + 1 > 15 )
  {
    dword_475844 = v9;
  }
  else
  {
    ++dword_475844;
    v7 = &byte_475524[v9 * (_DWORD)v7];
  }
  if ( !v8 )
    v7 = byte_475524;
  v10 = sub_989F0(a1, a2, 8, (int)byte_475524);
  v11 = v7 + 49;
  v12 = strlen(v10);
  v13 = v12;
  if ( v12 < a3 )
    v14 = a3;
  else
    v14 = v12;
  if ( v14 > 47 )
  {
    v17 = sub_94700((int)"common/print-utils.c", 241, "hex_string_custom: insufficient space to store result");
    return sub_98C1C(v17, HIDWORD(v17), v18, v19, a5, a6);
  }
  else
  {
    v15 = &v11[-2 - v14];
    strcpy(v15, "0x");
    memset(&v11[-v14], 48, v14);
    strcpy(&v11[-v13], v10);
    return (int)v15;
  }
}
