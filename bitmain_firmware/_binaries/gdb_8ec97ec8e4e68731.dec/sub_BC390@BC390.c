int __fastcall sub_BC390(int a1, const char *a2, const char *a3, int a4, unsigned int a5, unsigned int a6)
{
  char *v10; // r0
  int result; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char *v15; // r0
  int v16; // r0
  int v17; // r0
  const char *v18; // r0
  _BYTE v19[20]; // [sp+Ch] [bp-50h] BYREF
  int v20; // [sp+20h] [bp-3Ch]

  v10 = sub_988AC(a5);
  result = sub_25A418(a1, "%-4s %-20s %-30s ", v10, a2, a3);
  switch ( a4 )
  {
    case 1:
      v16 = sub_16F654(result);
      v15 = (char *)sub_25AC8C(v16, a6);
      return sub_25A418(a1, "%s\n", v15);
    case 0:
      v15 = sub_988AC(a6);
      return sub_25A418(a1, "%s\n", v15);
    case 2:
      v12 = sub_2665F0(v19);
      if ( v20 )
      {
        v17 = sub_16F654(v12);
        v18 = (const char *)sub_25AC8C(v17, a6);
        v12 = sub_25A418(a1, "%s ", v18);
      }
      v13 = sub_16F654(v12);
      v14 = sub_1780B4(v13);
      sub_269EC4(*(_DWORD *)(v14 + 4), 0, a6, -1, a1, v19);
      return sub_25A418(a1, (const char *)&word_356638);
  }
  return result;
}
