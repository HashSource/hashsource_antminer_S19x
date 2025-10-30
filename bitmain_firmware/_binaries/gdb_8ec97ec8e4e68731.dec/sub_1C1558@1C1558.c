int __fastcall sub_1C1558(int a1, int a2, const void *a3)
{
  int v6; // r5
  char *v7; // r2
  int v8; // r3
  const char *v10; // r0
  _DWORD dest[20]; // [sp+Ch] [bp-50h] BYREF

  v6 = sub_26BC70(a1);
  memcpy(dest, a3, 0x4Cu);
  v7 = *(char **)(v6 + 24);
  dest[13] = 1;
  v8 = *v7;
  if ( v8 != 1 )
  {
    if ( v8 != 18 )
      return sub_266BC4(a1, a2, 0, dest, off_46D5A4[0]);
LABEL_5:
    sub_25A418(a2, "(");
    sub_255DB0(v6, "", a2, -1);
  }
  if ( *((_DWORD *)v7 + 2) )
    goto LABEL_5;
  v10 = *(const char **)(*(_DWORD *)(*((_DWORD *)v7 + 5) + 24) + 8);
  if ( !v10 || strcmp(v10, "char") )
    goto LABEL_5;
  return sub_266BC4(a1, a2, 0, dest, off_46D5A4[0]);
}
