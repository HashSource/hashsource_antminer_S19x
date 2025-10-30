void __fastcall sub_179D48(unsigned __int8 *a1, int a2, int a3)
{
  _DWORD *v6; // r9
  int v7; // r8
  int v8; // r0
  int v9; // r7
  int v10; // r5
  int v11; // r3
  int v12; // r0
  __int64 v13; // r6
  int v14; // r0
  char *v15; // r0
  char *v16; // r5
  void *v17; // r6
  int v18; // r3
  int v19; // [sp+Ch] [bp-60h] BYREF
  __int64 v20; // [sp+10h] [bp-5Ch] BYREF
  _BYTE v21[80]; // [sp+1Ch] [bp-50h] BYREF

  v6 = (_DWORD *)((int (__fastcall *)(int))loc_1708E0)(a2);
  v7 = sub_170040((int)v6);
  v8 = sub_17988C(v7, a1, &v19, &v20);
  v9 = v19;
  v10 = v8;
  if ( v19 )
  {
    if ( !v8 )
    {
      sub_25A6BC("(", a3);
      sub_E9398(a2, "", a3, -1, v10, (int)"\a");
      sub_25A6BC(") ", a3);
      sub_2665F0(v21);
      sub_1C73DC(v21, v7, v19, a3, dword_46D448);
      goto LABEL_9;
    }
  }
  else if ( !v8 )
  {
    sub_25A418(a3, "NULL");
    return;
  }
  v11 = *(_DWORD *)(((int (__fastcall *)(int, int))loc_16EC88)(v7, dword_487880) + 24);
  v12 = v9;
  v13 = v20;
  v14 = sub_347418(v12, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 36) + 20));
  v15 = (char *)sub_179B2C(v6, v14, v13);
  v16 = v15;
  if ( v15 )
  {
    v17 = (void *)sub_1008BC(v15);
    sub_25A418(a3, "&virtual ");
    if ( v17 )
    {
      sub_25A6BC(v17, a3);
      free(v17);
    }
    else
    {
      sub_25A6BC(v16, a3);
    }
    return;
  }
  sub_25A418(a3, "&virtual table offset ");
  sub_266EA4(a3, 100, 1, v19, v19, 0);
LABEL_9:
  if ( v20 )
  {
    sub_25A418(a3, ", this adjustment ", (_DWORD)v20, (unsigned int)v20 | HIDWORD(v20));
    sub_266EA4(a3, 100, 1, v18, v20, HIDWORD(v20));
  }
}
