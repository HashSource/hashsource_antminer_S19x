int __fastcall sub_269EC4(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int v9; // r8
  int v10; // r5
  unsigned int v11; // r3
  int v12; // r9
  void *v13; // r10
  unsigned int v14; // r6
  bool v15; // r2
  _BOOL4 v16; // r3
  int v17; // r8
  _BOOL4 v18; // r4
  int v19; // r0
  int v21; // r0
  __int64 v22; // r0
  __int64 v23; // r0
  int v24; // [sp+10h] [bp-4Ch] BYREF
  int v25; // [sp+14h] [bp-48h]
  int v26; // [sp+18h] [bp-44h] BYREF
  int v27; // [sp+1Ch] [bp-40h] BYREF
  void *ptr; // [sp+20h] [bp-3Ch] BYREF
  char v29; // [sp+28h] [bp-34h] BYREF

  v25 = a2;
  v27 = 0;
  v24 = sub_170040(a1);
  v9 = ((int (*)(void))loc_165BB8)();
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_DWORD *)(a6 + 28);
  if ( a4 != -1 && a4 < v11 )
    v11 = a4;
  v12 = sub_268DBC(a3, a4, v10, v11, v9, &v27, &v26);
  v13 = sub_9253C(2515740, v27);
  v14 = v26 + a3;
  if ( v26 >= v10 )
  {
    LODWORD(v22) = sub_15C250((unsigned __int8 *)(v27 + v26 - v10), v10, v9);
    v15 = v22 != 0;
  }
  else
  {
    v15 = 1;
  }
  if ( v15 && a4 == -1 )
  {
    if ( sub_230020(v14, (int)&v24, v10) )
    {
      v17 = v26;
      v18 = 0;
    }
    else
    {
      LODWORD(v23) = sub_15C250((unsigned __int8 *)&v24, v10, v9);
      v17 = v26;
      v18 = v23 != 0;
    }
  }
  else
  {
    v16 = a4 >= 0;
    if ( !v12 )
      v16 = 0;
    v17 = v26;
    if ( v16 )
    {
      v18 = 1;
      goto LABEL_16;
    }
    v18 = sub_347690(v26) < a4;
  }
  if ( !v12 )
  {
    v19 = sub_347690(v17);
    (*((void (__fastcall **)(int, int, int, int, int, _BOOL4, int))off_46D5A4[0] + 13))(a5, a1, v27, v19, v25, v18, a6);
    goto LABEL_14;
  }
LABEL_16:
  if ( v17 > 0 )
  {
    v21 = sub_347690(v17);
    (*((void (__fastcall **)(int, int, int, int, int, _BOOL4, int))off_46D5A4[0] + 13))(a5, a1, v27, v21, v25, v18, a6);
  }
  sub_FA65C((char **)&ptr, -1, v24, v14);
  sub_25A418(a5, "<error: ");
  sub_25A6BC(ptr, a5);
  sub_25A418(a5, ">");
  if ( ptr != &v29 )
    sub_339E64(ptr);
LABEL_14:
  sub_25680C(a5);
  sub_92620(v13);
  return sub_347690(v26);
}
