int __fastcall sub_21B630(int a1, int a2, int a3, const char *a4)
{
  const char *v8; // r0
  const char *v9; // r7
  _BOOL4 v10; // r3
  unsigned int v11; // r3
  int v12; // r5
  char *v13; // r4
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int v20; // r5
  _DWORD *v21; // r0
  int v23; // r0

  if ( (*(_BYTE *)(a2 + 33) & 1) != 0 )
  {
    v8 = (const char *)((int (__fastcall *)(_DWORD))loc_2043D4)(*(_DWORD *)(a2 + 28));
    v9 = v8;
    if ( !a4 || (v8 = (const char *)j_strcmp(a4, v8)) != 0 )
    {
      v14 = (_DWORD *)sub_242F8C(v8);
      v15 = sub_25A6BC("\nFile ", *v14);
      v16 = (_DWORD *)sub_242F8C(v15);
      v17 = sub_25A6BC(v9, *v16);
      v18 = (_DWORD *)sub_242F8C(v17);
      v8 = (const char *)sub_25A6BC(":\n", *v18);
    }
    v10 = a1 != 2;
    if ( a3 != 1 )
      v10 = 0;
    if ( v10 )
    {
      v8 = (const char *)sub_259F10("static ");
      v11 = *(unsigned __int8 *)(a2 + 32);
LABEL_9:
      v12 = *(_DWORD *)(a2 + 24);
      if ( *((_DWORD *)off_46DBB8 + 4 * (v11 >> 3)) == 8 )
      {
        v13 = "";
      }
      else if ( dword_46D448 )
      {
        v8 = (const char *)sub_21B3C4(a2);
        v13 = (char *)v8;
      }
      else
      {
        v13 = *(char **)a2;
      }
      v19 = (_DWORD *)sub_242F8C(v8);
      sub_255DB0(v12, v13, *v19, 0);
    }
    v11 = *(unsigned __int8 *)(a2 + 32);
    if ( a1 != 2 || (v11 & 7) == 2 )
      goto LABEL_9;
    v20 = *(_DWORD *)(a2 + 24);
    v21 = (_DWORD *)sub_242F8C(v8);
    return sub_255D8C(v20, a2, *v21);
  }
  else
  {
    v23 = ((int (*)(void))loc_21A4BC)();
    return sub_21B790(v23);
  }
}
